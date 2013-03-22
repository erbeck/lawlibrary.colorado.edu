<div class="bean-facts">
  <?php $term = drupal_strtolower($content['field_facts_section'][0]['#markup']); ?>
  <?php print views_embed_view('facts' , 'block_1', $term); ?>
  <div class="more-link">
    <?php print l(t('View all'), 'facts/' . $term); ?>
  </div>
</div>
