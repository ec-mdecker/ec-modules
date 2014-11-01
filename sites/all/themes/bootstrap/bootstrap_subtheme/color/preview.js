// Handle the color changes and update the preview window.
(function ($) {
  Drupal.color = {
    logoChanged: false,
    callback: function (context, settings, form, farb, height, width) {
      // Background
      $('#preview', form).css('background-color', $('#palette input[name="palette[base]"]', form).val());
    }
  };
})(jQuery);

