<?php
/**
 * @file
 * ffvcoop_configuration.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ffvcoop_configuration_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu_privacy-policy:node/7451
  $menu_links['menu-footer-menu_privacy-policy:node/7451'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/7451',
    'router_path' => 'node/%',
    'link_title' => 'Privacy policy',
    'options' => array(
      'identifier' => 'menu-footer-menu_privacy-policy:node/7451',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu_refund-policy:node/7450
  $menu_links['menu-footer-menu_refund-policy:node/7450'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/7450',
    'router_path' => 'node/%',
    'link_title' => 'Refund Policy',
    'options' => array(
      'identifier' => 'menu-footer-menu_refund-policy:node/7450',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu_terms-of-service:node/7449
  $menu_links['menu-footer-menu_terms-of-service:node/7449'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/7449',
    'router_path' => 'node/%',
    'link_title' => 'Terms of Service',
    'options' => array(
      'identifier' => 'menu-footer-menu_terms-of-service:node/7449',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Privacy policy');
  t('Refund Policy');
  t('Terms of Service');


  return $menu_links;
}
