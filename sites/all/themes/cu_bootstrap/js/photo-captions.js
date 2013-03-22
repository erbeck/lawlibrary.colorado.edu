(function ($) {
  $(document).ready(function(){
    $(".field-name-body img").each(function(){
      var title = $(this).attr("title");
      var photoclass = $(this).attr("class");
      if(title) {
        $(this).wrap('<div class="photo-caption ' + photoclass + '" />').after(title);
      }
    });
  });
}(jQuery));

