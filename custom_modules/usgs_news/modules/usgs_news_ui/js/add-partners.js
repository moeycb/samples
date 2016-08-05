/**
 * Created by dchaplow on 8/11/15.
 */


Drupal.behaviors.usgsNewsPartners = {
    attach : function(context, settings){
        jQuery(document).ready(function(){
            jQuery(document).on('click', '#add_partner_btn', function(e){
                e.preventDefault();
                var base_url = Drupal.settings.usgs_news_ui.base_url;
                //get currently selected partner - if there is one
                var partner = jQuery('#add_partner').val();
                if(partner!=undefined){
                    //extract tid from text - since we can't (too lazy) get the value from the datalist

                    var tid = [];
                    partner.replace(/\[(.+?)\]/g, function($0, $1) { tid.push($1) });
                    //load partner details from Drupal
                    var data_url = base_url+'/get-partner-data/'+tid[0];
                    if(tid[0]){
                        jQuery.ajax({
                            url: data_url,
                            async: true,
                        }).done(function(result) {
                            jQuery('#partners_display').append(result[1]['data']);
                            //add partner ID to hidden spot on form for submission to Drupal
                            jQuery('#partners_tid').val(function(){
                                return this.value +','+tid[0];
                            });
                        });
                    }
                }

            });

            jQuery(document).on('click', '.close_button', function(e){
                e.preventDefault();
                var node = jQuery(this).data('node');
                jQuery('#node_'+node).parent().remove();

                //remove the nodeID from the hidden field

                //get the hidden field data
                var tids = jQuery('#partners_tid').val();
                //convert it to an array
                var tid_array = tids.split(',');
                //find the first instance of the id
                var target_id = tid_array.indexOf(node);
                //remove that index from the array
                tid_array.splice(target_id);
                //convert it back to a string
                var tid_string = tid_array.toString();
                //save that data back into the hidden field
                jQuery('#partners_tid').val(tid_string);
            });

        });

    }
}





