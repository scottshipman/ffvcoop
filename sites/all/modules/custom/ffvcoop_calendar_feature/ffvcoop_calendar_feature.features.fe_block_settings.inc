<?php
/**
 * @file
 * ffvcoop_calendar_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ffvcoop_calendar_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['ffvcoop_calendar-calendar_dates_by_year'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'calendar_dates_by_year',
    'module' => 'ffvcoop_calendar',
    'node_types' => array(),
    'pages' => 'configuration/calendar*',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -23,
      ),
      'ffvcoop' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'ffvcoop',
        'weight' => -23,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-calendar_date_list-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'calendar_date_list-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'configuration/calendar',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'ffvcoop' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ffvcoop',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-calendar_date_list-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'calendar_date_list-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'manage/*
configure/*
admin/*',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -19,
      ),
      'ffvcoop' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'ffvcoop',
        'weight' => -19,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
