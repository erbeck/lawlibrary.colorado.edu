(function ($) {
  $("a.single-page-nav-link").click(function(){
    var s = $(this).attr("href");
    //alert(s);
    $.scrollTo(s, 1000);
    return false;
    });
}(jQuery));

