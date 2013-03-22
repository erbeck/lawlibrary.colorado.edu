<?php hide($content['field_tags']); ?>
<?php if(!$page): ?>
  <div class="summary clearfix">
    <?php 
      if(!empty($content['field_article_thumbnail'])) {
        print render($content['field_article_thumbnail']); 
      } 
    ?>
    <div class="summary-content clearfix <?php print $classes; ?>">
      <h2<?php print $title_attributes; ?> class="node-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <!--<p class="date"><?php print format_date($created, 'custom', 'F j, Y'); ?></p>-->
      <?php print render($content); ?>
    </div>
  </div>
<?php else: ?>
  <!--<p class="date"><?php print format_date($created, 'custom', 'F j, Y'); ?></p>-->  
  <?php print render($content); ?>
  <?php if (!empty($content['field_tags']['#items'])): ?>
    <p><strong>Tags:</strong> <?php print render($content['field_tags']); ?></p>
  <?php endif; ?>
<?php endif; ?>