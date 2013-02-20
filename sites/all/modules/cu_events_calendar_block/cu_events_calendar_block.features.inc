<?php
/**
 * @file
 * cu_events_calendar_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cu_events_calendar_block_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
