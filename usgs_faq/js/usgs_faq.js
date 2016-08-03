/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


(function ($) {
    Drupal.behaviors.usgsFAQ = {
        attach: function (context, settings) {
            $('#edit-field-question-und-0-value').bind('change', function () {
                var newValue = $(this).val().substring(0, 254);
                $('#edit-title').val(newValue);
                return false;
            });
        }
    };
})(jQuery);
