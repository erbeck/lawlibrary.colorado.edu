<?php
/**
 * @file
 *
 * Template file for generating the CSS file used for the menu-items
 */

/**
 * Variables:
 * $mlid
 * $path
 */
 $sizepad = $size+10;
?>
ul.menu li a.menu-<?php print $mlid ?> span,
ul.links li.menu-<?php print $mlid ?> a span{
  background-image: url(<?php print $path ?>);
  padding-<?php print "$pos:$sizepad"?>px;
  background-repeat: no-repeat;
  background-position: <?php print $pos?>;
  min-height: <?php print $size; ?>px;
  display:block;
  line-height: <?php print $size; ?>px;
  margin-left:0 !important;
  margin-right:0 !important;
}
ul.menu li a.menu-<?php print $mlid ?>,
ul.links li.menu-<?php print $mlid ?> a {
  padding-left:0;
}
