# USGS Data and Tools Module
## Developer: Marvin Oey

This module `extends` the USGS Base Node.  All it does is add the Data and Tools term to the USGS Tags vocabulary under the
Products term.

    function usgs_dnt_install() {
      // Add the term to the usgs_tags vocab
      // Only do this if there really is a usgs_tags vocab
      // @todo although it is rare, there may be the situation that the term already
      // exists so we may want to put checks in later.
      $voc = taxonomy_vocabulary_machine_name_load('usgs_tags');
      if(!empty($voc)) {
        $products = taxonomy_get_term_by_name('products', $voc->machine_name);
        $parent = array_shift($products);
    
        $term = new stdClass();
        $term->vid = $voc->vid;
        $term->parent = array($parent->tid);
        $term->name = 'Data and Tools';
        $term->description = '';
        $term->format = 'filtered_html';
        $term->weight = 0;
    
        taxonomy_term_save((object) $term);
      }
    }