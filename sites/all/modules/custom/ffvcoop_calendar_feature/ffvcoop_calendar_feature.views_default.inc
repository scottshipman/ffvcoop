<?php
/**
 * @file
 * ffvcoop_calendar_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ffvcoop_calendar_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'calendar_date_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_pickup_date';
  $view->human_name = 'Calendar Date List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There is no calendar for this Year. You may create one using the form to the right.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Pickup Date: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_pickup_date';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: Pickup Date: Week Date */
  $handler->display->display_options['fields']['field_week_date']['id'] = 'field_week_date';
  $handler->display->display_options['fields']['field_week_date']['table'] = 'field_data_field_week_date';
  $handler->display->display_options['fields']['field_week_date']['field'] = 'field_week_date';
  $handler->display->display_options['fields']['field_week_date']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Pickup Date: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_pickup_date';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  /* Contextual filter: Pickup Date: Week Date (field_week_date) */
  $handler->display->display_options['arguments']['field_week_date_value']['id'] = 'field_week_date_value';
  $handler->display->display_options['arguments']['field_week_date_value']['table'] = 'field_data_field_week_date';
  $handler->display->display_options['arguments']['field_week_date_value']['field'] = 'field_week_date_value';
  $handler->display->display_options['arguments']['field_week_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_week_date_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_week_date_value']['default_argument_options']['code'] = 'return date("Y");';
  $handler->display->display_options['arguments']['field_week_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_week_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_week_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_week_date_value']['year_range'] = '-0:+3';
  $handler->display->display_options['arguments']['field_week_date_value']['granularity'] = 'year';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['calendar_date_list'] = $view;

  return $export;
}