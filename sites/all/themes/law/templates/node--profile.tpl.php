<?php if(!$page): ?>
  <strong><?php print l($title, "node/$node->nid", array('html' => TRUE)) ?></strong>
  <?php print render($content['field_profile_title']); ?><br />
  <?php print render($content['field_profile_thumbnail']); ?>
  <?php print render($content['body']); ?>
  <div class="profile-more-link more-link">
    <p><a href="<?php print base_path(); ?>closeup/<?php print $content['field_profile_type'][0]['#markup']; ?>">View all <?php print $content['field_profile_type'][0]['#markup']; ?></a></p>
  </div>
<?php else: ?>
  <?php print render($content['field_profile_title']); ?><br />
  <?php print render($content); ?>
<?php endif; ?>
