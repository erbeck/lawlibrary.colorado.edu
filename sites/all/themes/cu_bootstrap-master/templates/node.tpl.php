<?php if(!$page): ?>
  <div class="summary clearfix">
    <div class="summary-content clearfix <?php print $classes; ?>">
      <h2<?php print $title_attributes; ?> class="node-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <?php print render($content); ?>
    </div>
  </div>
<?php else: ?>
  <?php print render($content_sidebar_left); ?>
  <?php print render($content_sidebar_right); ?>
  <?php hide($content['comments']); ?>
  <?php hide($content['links']); ?>
  <div class="full-content clearfix <?php print $classes; ?>">
    <?php print render($content); ?>
  </div>
  <?php print render($content['links']); ?>
  <?php if (!empty($content['comments'])): ?>
    <div class="clearfix">
      <?php print render($content['comments']); ?>
    </div>
  <?php endif; ?>
<?php endif; ?>
