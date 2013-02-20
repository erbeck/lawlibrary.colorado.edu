<?php
/**
 * @file views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<?php if (!empty($title)): ?>
  <h2><?php print $title; ?></h2>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div class="<?php print $classes_array[$id]; ?> single-page-section clearfix" id="section-<?php print $id; ?>">
    <?php print $row; ?>
    <a href="#page" class="single-page-nav-link back-to-top">Back to Top</a>
  </div>
<?php endforeach; ?>
<?php drupal_add_js(drupal_get_path('theme', 'cu_bootstrap') .'/js/jquery.scrollTo-1.4.2-min.js'); ?>
<?php drupal_add_js(drupal_get_path('theme', 'cu_bootstrap') .'/js/single-page-scroll.js', array('scope'=>'footer')); ?>
<?php 