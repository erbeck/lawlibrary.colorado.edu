<?php
$categories = $content['field_event_category'];
$children = array_intersect_key($categories, element_children($categories));
foreach($children as $child) {
  $eventcategories[] = $child['#markup'];
}
$categories = join('%2c', $eventcategories);

$q = 'type=' . $content['field_event_type'][0]['#markup'] . '&number=' . $content['field_event_number'][0]['#markup'] . '&category=' . $categories . '&expire=' . $content['field_event_expire'][0]['#markup'] . '&ics=' . $content['field_event_subcategories'][0]['#markup'];
$t = $content['field_event_template'][0]['#markup'];

//print $q; 

?>






<?php $cal_id = 'adxevents' . $bean->bid; ?>



<div id="<?php print $cal_id; ?>">Loading Events...</div>
<script type="text/javascript">if (typeof jQuery != 'undefined') {
jQuery(document).ready(function () {
var adx="Events are temporarily unavailable. Please check back later.";
jQuery.ajax({ dataType: 'script', url: 'http://events.colorado.edu/EventListSyndicator.aspx?<?php print $q; ?>&adpid=<?php print $t; ?>&nem=No+events+are+available+that+match+your+request&sortorder=ASC&ver=2.0&target=<?php print $cal_id; ?>'
});setTimeout(function() {if(typeof response=='undefined'){jQuery('#<?php print $cal_id; ?>').html(adx);}}, 5000);
});}else { document.getElementById('<?php print $cal_id; ?>').innerHTML = 'Events are temporarily unavailable because the jQuery library cannot be located.'; }</script>

<?php if (!empty($content['field_event_link'])): ?>
  <p><?php print render($content['field_event_link']); ?></p>
<?php endif; ?>