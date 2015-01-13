<?php
/**
 * This is the stripped-down D7 template for TUIDEV sites
 */

/**
 * Database
 */
$databases['default']['default'] = array(
 'driver' => 'mysql',
 'database' => 'ffvcoop',
 'username' => 'ffvcoop',
 'password' => 'ffvcoop',
 'host' => 'nas.tuidev.vm',
 'prefix' => '',
);

$update_free_access = FALSE;
$drupal_hash_salt = '';

/**
 * Caching
 */
$conf['cache'] = FALSE;
$conf['preprocess_css'] = 0;
$conf['preprocess_js'] = 0;

/**
 * PHP Settings
 */
ini_set('session.gc_probability', 1);
ini_set('session.gc_divisor', 100);
ini_set('session.gc_maxlifetime', 200000);
ini_set('session.cookie_lifetime', 2000000);

/**
 * SSL
 */
//$conf['https'] = true;

/**
 * Stage File Proxy, if you need it
 */
#$conf['stage_file_proxy_origin'] = ''; // no trailing slash
#$conf['stage_file_proxy_use_imagecache_root'] = TRUE;
#$conf['stage_file_proxy_hotlink'] = FALSE;
#$conf['stage_file_proxy_origin_dir'] = 'sites/default/files';
#$conf['stage_file_proxy_sslversion'] = 3;

/**
 * Tealium Config
 */
//$conf['tealium_account'] = "tui";
//$conf['tealium_environment'] = "dev";
//$conf['tui_tealium_environment'] = "dev";

/**
 * TUI Support
 */
//$conf['tui_support_environment'] = 'DEV';  // Development (local or remote)

/**
 * Apache Solr Config
 */
#$conf['apachesolr_environments']['solr']['url'] = '';
#$conf['apachesolr_environments']['solr']['name'] = '';

# QA, as an example
#$conf['apachesolr_environments']['solr']['url'] = 'http://na-awe-webdev-001.tuimarine.com:8080/solr4/[name]';
#$conf['apachesolr_environments']['solr']['name'] = 'solr_qa';

/**
 * Softrip
 */
#$conf['tui_cybersource_test_mode'] = '1';
#$conf['softrip_domain']   = '';
#$conf['softrip_brand']    = '';
#$conf['softrip_user']     = 'admin';
#$conf['softrip_secret']   = 'ssskaoeaklghlatyl';
#$conf['softrip_app']      = '1111111111';
#$conf['softrip_login']    = 'webservices';
#$conf['softrip_password'] = 'BJDQTpqHpZWt8OwVGCfA';
