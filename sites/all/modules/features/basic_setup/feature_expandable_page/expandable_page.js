(function ($) {
  Drupal.behaviors.test = {
    attach: function (context, settings) {
      //expandable page node
      $('.node-expandable-page .field-name-field-expandable-page-text').once(function () {
        $(this).hide();
        $(this).siblings('.field-name-field-expandable-page-link-label').css('cursor', 'pointer');
        $(this).siblings('.field-name-field-expandable-page-link-label').click(function () {
          $(this).siblings('.field-name-field-expandable-page-text').slideToggle('slow');
        });
      });
    }
  }
})(jQuery);