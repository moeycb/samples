/* ========================================================================
 * USGS Bootstrap: script.js v1.0
 * ========================================================================  */
(function ($) {
    Drupal.behaviors.usgsBootstrap = {
        attach: function (context, settings) {
            $(document).ready(function(e){
                $('.toggle-social-share').bind('click', function () {
                    $('.search-block-wrapper').hide();
                    $('.social-share').toggle('slow');

                    return false;
                });
                $('.toggle-search-block').bind('click', function () {
                    $('.social-share').hide();
                    $('.search-block-wrapper').toggle('slow');
                    return false;
                });
                $('#usgs-mega-menu-container').on('shown.bs.collapse', function(e){
                    $('#mobile-search-form').collapse('hide');
                });
                $('#mobile-search-form').on('shown.bs.collapse', function(e){
                    $('#usgs-mobile-menu').collapse('hide');
                });
            });
        }
    };
})(jQuery);
