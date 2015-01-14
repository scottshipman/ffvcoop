<?php
/**
 * @file
 * ffvcoop_commerce_init.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ffvcoop_commerce_init_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ffvcoop_commerce_init_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
