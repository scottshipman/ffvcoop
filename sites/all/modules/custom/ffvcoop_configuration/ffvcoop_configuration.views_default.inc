<?php
/**
 * @file
 * ffvcoop_configuration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ffvcoop_configuration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'customer_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Customer List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Customer List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_customer_last_name' => 'field_customer_last_name',
    'field_customer_active' => 'field_customer_active',
    'field_customer_fee_paid' => 'field_customer_fee_paid',
    'field_customer_email' => 'field_customer_email',
    'field_customer_phone' => 'field_customer_phone',
    'body' => 'body',
    'field_customer_delivery_address' => 'field_customer_delivery_address',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer_active' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer_fee_paid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer_phone' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer_delivery_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_order_customer_customer_order']['id'] = 'reverse_field_order_customer_customer_order';
  $handler->display->display_options['relationships']['reverse_field_order_customer_customer_order']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_order_customer_customer_order']['field'] = 'reverse_field_order_customer_customer_order';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'First Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_customer_last_name']['id'] = 'field_customer_last_name';
  $handler->display->display_options['fields']['field_customer_last_name']['table'] = 'field_data_field_customer_last_name';
  $handler->display->display_options['fields']['field_customer_last_name']['field'] = 'field_customer_last_name';
  $handler->display->display_options['fields']['field_customer_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Active */
  $handler->display->display_options['fields']['field_customer_active']['id'] = 'field_customer_active';
  $handler->display->display_options['fields']['field_customer_active']['table'] = 'field_data_field_customer_active';
  $handler->display->display_options['fields']['field_customer_active']['field'] = 'field_customer_active';
  $handler->display->display_options['fields']['field_customer_active']['element_label_colon'] = FALSE;
  /* Field: Content: Fee Paid */
  $handler->display->display_options['fields']['field_customer_fee_paid']['id'] = 'field_customer_fee_paid';
  $handler->display->display_options['fields']['field_customer_fee_paid']['table'] = 'field_data_field_customer_fee_paid';
  $handler->display->display_options['fields']['field_customer_fee_paid']['field'] = 'field_customer_fee_paid';
  $handler->display->display_options['fields']['field_customer_fee_paid']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_customer_email']['id'] = 'field_customer_email';
  $handler->display->display_options['fields']['field_customer_email']['table'] = 'field_data_field_customer_email';
  $handler->display->display_options['fields']['field_customer_email']['field'] = 'field_customer_email';
  $handler->display->display_options['fields']['field_customer_email']['element_label_colon'] = FALSE;
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_customer_phone']['id'] = 'field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['table'] = 'field_data_field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['field'] = 'field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Notes';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Delivery Address */
  $handler->display->display_options['fields']['field_customer_delivery_address']['id'] = 'field_customer_delivery_address';
  $handler->display->display_options['fields']['field_customer_delivery_address']['table'] = 'field_data_field_customer_delivery_address';
  $handler->display->display_options['fields']['field_customer_delivery_address']['field'] = 'field_customer_delivery_address';
  $handler->display->display_options['fields']['field_customer_delivery_address']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Last Order Date (old system)';
  $handler->display->display_options['fields']['view']['view'] = 'last_order_date_view_field';
  $handler->display->display_options['fields']['view']['display'] = 'block';
  $handler->display->display_options['fields']['view']['arguments'] = '[nid]';
  /* Field: Field: Last Order Date */
  $handler->display->display_options['fields']['field_last_order_date']['id'] = 'field_last_order_date';
  $handler->display->display_options['fields']['field_last_order_date']['table'] = 'field_data_field_last_order_date';
  $handler->display->display_options['fields']['field_last_order_date']['field'] = 'field_last_order_date';
  $handler->display->display_options['fields']['field_last_order_date']['label'] = 'Last Order Date (New System)';
  $handler->display->display_options['fields']['field_last_order_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Field: Last Name (field_customer_last_name:format) */
  $handler->display->display_options['sorts']['field_customer_last_name_format']['id'] = 'field_customer_last_name_format';
  $handler->display->display_options['sorts']['field_customer_last_name_format']['table'] = 'field_data_field_customer_last_name';
  $handler->display->display_options['sorts']['field_customer_last_name_format']['field'] = 'field_customer_last_name_format';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'customer' => 'customer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Last Name (field_customer_last_name) */
  $handler->display->display_options['filters']['field_customer_last_name_value']['id'] = 'field_customer_last_name_value';
  $handler->display->display_options['filters']['field_customer_last_name_value']['table'] = 'field_data_field_customer_last_name';
  $handler->display->display_options['filters']['field_customer_last_name_value']['field'] = 'field_customer_last_name_value';
  $handler->display->display_options['filters']['field_customer_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_customer_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_customer_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_last_name_value']['expose']['operator_id'] = 'field_customer_last_name_value_op';
  $handler->display->display_options['filters']['field_customer_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_customer_last_name_value']['expose']['operator'] = 'field_customer_last_name_value_op';
  $handler->display->display_options['filters']['field_customer_last_name_value']['expose']['identifier'] = 'field_customer_last_name_value';
  $handler->display->display_options['filters']['field_customer_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Email (field_customer_email) */
  $handler->display->display_options['filters']['field_customer_email_email']['id'] = 'field_customer_email_email';
  $handler->display->display_options['filters']['field_customer_email_email']['table'] = 'field_data_field_customer_email';
  $handler->display->display_options['filters']['field_customer_email_email']['field'] = 'field_customer_email_email';
  $handler->display->display_options['filters']['field_customer_email_email']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_customer_email_email']['group'] = 1;
  $handler->display->display_options['filters']['field_customer_email_email']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_email_email']['expose']['operator_id'] = 'field_customer_email_email_op';
  $handler->display->display_options['filters']['field_customer_email_email']['expose']['label'] = 'Email';
  $handler->display->display_options['filters']['field_customer_email_email']['expose']['operator'] = 'field_customer_email_email_op';
  $handler->display->display_options['filters']['field_customer_email_email']['expose']['identifier'] = 'field_customer_email_email';
  $handler->display->display_options['filters']['field_customer_email_email']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['body_value']['group'] = 1;
  $handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['label'] = 'Notes';
  $handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['identifier'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Delivery Address (field_customer_delivery_address) */
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['id'] = 'field_customer_delivery_address_value';
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['table'] = 'field_data_field_customer_delivery_address';
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['field'] = 'field_customer_delivery_address_value';
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['group'] = 1;
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['expose']['operator_id'] = 'field_customer_delivery_address_value_op';
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['expose']['label'] = 'Delivery Address';
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['expose']['operator'] = 'field_customer_delivery_address_value_op';
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['expose']['identifier'] = 'field_customer_delivery_address_value';
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Date: Date (eck_customer_order) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'eck_customer_order';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['relationship'] = 'reverse_field_order_customer_customer_order';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Last Order Date';
  $handler->display->display_options['filters']['date_filter']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_order_date.field_order_date_value' => 'field_data_field_order_date.field_order_date_value',
  );
  /* Filter criterion: Content: Active (field_customer_active) */
  $handler->display->display_options['filters']['field_customer_active_value']['id'] = 'field_customer_active_value';
  $handler->display->display_options['filters']['field_customer_active_value']['table'] = 'field_data_field_customer_active';
  $handler->display->display_options['filters']['field_customer_active_value']['field'] = 'field_customer_active_value';
  $handler->display->display_options['filters']['field_customer_active_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_active_value']['expose']['operator_id'] = 'field_customer_active_value_op';
  $handler->display->display_options['filters']['field_customer_active_value']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['field_customer_active_value']['expose']['operator'] = 'field_customer_active_value_op';
  $handler->display->display_options['filters']['field_customer_active_value']['expose']['identifier'] = 'field_customer_active_value';
  $handler->display->display_options['filters']['field_customer_active_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Fee Paid (field_customer_fee_paid) */
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['id'] = 'field_customer_fee_paid_value';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['table'] = 'field_data_field_customer_fee_paid';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['field'] = 'field_customer_fee_paid_value';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['expose']['operator_id'] = 'field_customer_fee_paid_value_op';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['expose']['label'] = 'Fee Paid';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['expose']['operator'] = 'field_customer_fee_paid_value_op';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['expose']['identifier'] = 'field_customer_fee_paid_value';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'customer-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Customer List';
  $handler->display->display_options['menu']['weight'] = '7';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'xls';
  $handler->display->display_options['path'] = 'customer-list-download';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['customer_list'] = $view;

  $view = new view();
  $view->name = 'last_order_date_view_field';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_customer_order';
  $view->human_name = 'Last Order Date View Field';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Last Order Date View Field';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: customer order: order date */
  $handler->display->display_options['fields']['field_order_date']['id'] = 'field_order_date';
  $handler->display->display_options['fields']['field_order_date']['table'] = 'field_data_field_order_date';
  $handler->display->display_options['fields']['field_order_date']['field'] = 'field_order_date';
  $handler->display->display_options['fields']['field_order_date']['label'] = '';
  $handler->display->display_options['fields']['field_order_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: customer order: order date (field_order_date) */
  $handler->display->display_options['sorts']['field_order_date_value']['id'] = 'field_order_date_value';
  $handler->display->display_options['sorts']['field_order_date_value']['table'] = 'field_data_field_order_date';
  $handler->display->display_options['sorts']['field_order_date_value']['field'] = 'field_order_date_value';
  $handler->display->display_options['sorts']['field_order_date_value']['order'] = 'DESC';
  /* Contextual filter: customer order: customer (field_order_customer) */
  $handler->display->display_options['arguments']['field_order_customer_target_id']['id'] = 'field_order_customer_target_id';
  $handler->display->display_options['arguments']['field_order_customer_target_id']['table'] = 'field_data_field_order_customer';
  $handler->display->display_options['arguments']['field_order_customer_target_id']['field'] = 'field_order_customer_target_id';
  $handler->display->display_options['arguments']['field_order_customer_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_order_customer_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_order_customer_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_order_customer_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Customer order: customer_order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_customer_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'customer_order' => 'customer_order',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['last_order_date_view_field'] = $view;

  $view = new view();
  $view->name = 'pickup_time';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_customer_order';
  $view->human_name = 'pickup time';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'pickup time';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'changed' => 'changed',
    'field_picked_up' => 'field_picked_up',
    'field_order_customer' => 'field_order_customer',
    'field_customer_last_name' => 'field_customer_last_name',
    'field_order_date' => 'field_order_date',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_picked_up' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_customer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_order_customer_target_id']['id'] = 'field_order_customer_target_id';
  $handler->display->display_options['relationships']['field_order_customer_target_id']['table'] = 'field_data_field_order_customer';
  $handler->display->display_options['relationships']['field_order_customer_target_id']['field'] = 'field_order_customer_target_id';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Customer order: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_customer_order';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: Customer order: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_customer_order';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Picked Up Time';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['timezone'] = 'America/New_York';
  /* Field: customer order: Picked Up */
  $handler->display->display_options['fields']['field_picked_up']['id'] = 'field_picked_up';
  $handler->display->display_options['fields']['field_picked_up']['table'] = 'field_data_field_picked_up';
  $handler->display->display_options['fields']['field_picked_up']['field'] = 'field_picked_up';
  /* Field: customer order: customer */
  $handler->display->display_options['fields']['field_order_customer']['id'] = 'field_order_customer';
  $handler->display->display_options['fields']['field_order_customer']['table'] = 'field_data_field_order_customer';
  $handler->display->display_options['fields']['field_order_customer']['field'] = 'field_order_customer';
  $handler->display->display_options['fields']['field_order_customer']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_customer_last_name']['id'] = 'field_customer_last_name';
  $handler->display->display_options['fields']['field_customer_last_name']['table'] = 'field_data_field_customer_last_name';
  $handler->display->display_options['fields']['field_customer_last_name']['field'] = 'field_customer_last_name';
  $handler->display->display_options['fields']['field_customer_last_name']['relationship'] = 'field_order_customer_target_id';
  /* Field: customer order: order date */
  $handler->display->display_options['fields']['field_order_date']['id'] = 'field_order_date';
  $handler->display->display_options['fields']['field_order_date']['table'] = 'field_data_field_order_date';
  $handler->display->display_options['fields']['field_order_date']['field'] = 'field_order_date';
  $handler->display->display_options['fields']['field_order_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Customer order: Changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'eck_customer_order';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  /* Filter criterion: Customer order: customer_order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_customer_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'customer_order' => 'customer_order',
  );
  /* Filter criterion: customer order: order date (field_order_date) */
  $handler->display->display_options['filters']['field_order_date_value']['id'] = 'field_order_date_value';
  $handler->display->display_options['filters']['field_order_date_value']['table'] = 'field_data_field_order_date';
  $handler->display->display_options['filters']['field_order_date_value']['field'] = 'field_order_date_value';
  $handler->display->display_options['filters']['field_order_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_order_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_order_date_value']['expose']['operator_id'] = 'field_order_date_value_op';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['label'] = 'Select the order date';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['operator'] = 'field_order_date_value_op';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['identifier'] = 'field_order_date_value';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_order_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_order_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_order_date_value']['year_range'] = '-1:+1';
  /* Filter criterion: customer order: Picked Up (field_picked_up) */
  $handler->display->display_options['filters']['field_picked_up_value']['id'] = 'field_picked_up_value';
  $handler->display->display_options['filters']['field_picked_up_value']['table'] = 'field_data_field_picked_up';
  $handler->display->display_options['filters']['field_picked_up_value']['field'] = 'field_picked_up_value';
  $handler->display->display_options['filters']['field_picked_up_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'reports/pickup-time';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'xls';
  $handler->display->display_options['path'] = 'reports/pickup-time-xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['pickup_time'] = $view;

  $view = new view();
  $view->name = 'products_baskets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Products - Baskets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Products - Baskets';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_basket_image']['id'] = 'field_basket_image';
  $handler->display->display_options['fields']['field_basket_image']['table'] = 'field_data_field_basket_image';
  $handler->display->display_options['fields']['field_basket_image']['field'] = 'field_basket_image';
  $handler->display->display_options['fields']['field_basket_image']['label'] = '';
  $handler->display->display_options['fields']['field_basket_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_basket_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_basket_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_basket_price']['id'] = 'field_basket_price';
  $handler->display->display_options['fields']['field_basket_price']['table'] = 'field_data_field_basket_price';
  $handler->display->display_options['fields']['field_basket_price']['field'] = 'field_basket_price';
  $handler->display->display_options['fields']['field_basket_price']['label'] = '';
  $handler->display->display_options['fields']['field_basket_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_basket_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_basket_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basket' => 'basket',
  );

  /* Display: Products List Block */
  $handler = $view->new_display('block', 'Products List Block', 'block');
  $handler->display->display_options['block_description'] = 'Products List Block';
  $export['products_baskets'] = $view;

  $view = new view();
  $view->name = 'weekly_customer_orders';
  $view->description = 'reports for order line items';
  $view->tag = 'Order';
  $view->base_table = 'eck_customer_order';
  $view->human_name = 'Line Item Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Weekly Customer Orders';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_order_instance_target_id']['id'] = 'field_order_instance_target_id';
  $handler->display->display_options['relationships']['field_order_instance_target_id']['table'] = 'field_data_field_order_instance';
  $handler->display->display_options['relationships']['field_order_instance_target_id']['field'] = 'field_order_instance_target_id';
  /* Field: customer order: Order Instance */
  $handler->display->display_options['fields']['field_order_instance']['id'] = 'field_order_instance';
  $handler->display->display_options['fields']['field_order_instance']['table'] = 'field_data_field_order_instance';
  $handler->display->display_options['fields']['field_order_instance']['field'] = 'field_order_instance';
  $handler->display->display_options['fields']['field_order_instance']['label'] = 'Order ID';
  $handler->display->display_options['fields']['field_order_instance']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order_instance']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_instance']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_order_instance']['settings'] = array(
    'link' => 0,
  );
  /* Field: customer order: Quantity */
  $handler->display->display_options['fields']['field_lineitem_quantity']['id'] = 'field_lineitem_quantity';
  $handler->display->display_options['fields']['field_lineitem_quantity']['table'] = 'field_data_field_lineitem_quantity';
  $handler->display->display_options['fields']['field_lineitem_quantity']['field'] = 'field_lineitem_quantity';
  $handler->display->display_options['fields']['field_lineitem_quantity']['label'] = '';
  $handler->display->display_options['fields']['field_lineitem_quantity']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lineitem_quantity']['alter']['text'] = '[[field_lineitem_quantity]]';
  $handler->display->display_options['fields']['field_lineitem_quantity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lineitem_quantity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lineitem_quantity']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_lineitem_quantity']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: customer order: Product */
  $handler->display->display_options['fields']['field_lineitem_product']['id'] = 'field_lineitem_product';
  $handler->display->display_options['fields']['field_lineitem_product']['table'] = 'field_data_field_lineitem_product';
  $handler->display->display_options['fields']['field_lineitem_product']['field'] = 'field_lineitem_product';
  $handler->display->display_options['fields']['field_lineitem_product']['label'] = '';
  $handler->display->display_options['fields']['field_lineitem_product']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lineitem_product']['settings'] = array(
    'link' => 0,
  );
  /* Field: customer order: Line Item Price */
  $handler->display->display_options['fields']['field_line_item_price']['id'] = 'field_line_item_price';
  $handler->display->display_options['fields']['field_line_item_price']['table'] = 'field_data_field_line_item_price';
  $handler->display->display_options['fields']['field_line_item_price']['field'] = 'field_line_item_price';
  $handler->display->display_options['fields']['field_line_item_price']['label'] = '';
  $handler->display->display_options['fields']['field_line_item_price']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_line_item_price']['alter']['text'] = '($[field_line_item_price])';
  $handler->display->display_options['fields']['field_line_item_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_line_item_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_line_item_price']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_line_item_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: customer order: Line Item Price */
  $handler->display->display_options['fields']['field_line_item_price_1']['id'] = 'field_line_item_price_1';
  $handler->display->display_options['fields']['field_line_item_price_1']['table'] = 'field_data_field_line_item_price';
  $handler->display->display_options['fields']['field_line_item_price_1']['field'] = 'field_line_item_price';
  $handler->display->display_options['fields']['field_line_item_price_1']['label'] = '';
  $handler->display->display_options['fields']['field_line_item_price_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_line_item_price_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_line_item_price_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_line_item_price_1']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: customer order: Quantity */
  $handler->display->display_options['fields']['field_lineitem_quantity_1']['id'] = 'field_lineitem_quantity_1';
  $handler->display->display_options['fields']['field_lineitem_quantity_1']['table'] = 'field_data_field_lineitem_quantity';
  $handler->display->display_options['fields']['field_lineitem_quantity_1']['field'] = 'field_lineitem_quantity';
  $handler->display->display_options['fields']['field_lineitem_quantity_1']['label'] = '';
  $handler->display->display_options['fields']['field_lineitem_quantity_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lineitem_quantity_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lineitem_quantity_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lineitem_quantity_1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['expression']['alter']['text'] = '[expression] *';
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['separator'] = '';
  $handler->display->display_options['fields']['expression']['prefix'] = '$';
  $handler->display->display_options['fields']['expression']['suffix'] = '.00';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_line_item_price_1] * [field_lineitem_quantity_1]';
  /* Contextual filter: customer order: order date (field_order_date) */
  $handler->display->display_options['arguments']['field_order_date_value']['id'] = 'field_order_date_value';
  $handler->display->display_options['arguments']['field_order_date_value']['table'] = 'field_data_field_order_date';
  $handler->display->display_options['arguments']['field_order_date_value']['field'] = 'field_order_date_value';
  $handler->display->display_options['arguments']['field_order_date_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_order_date_value']['summary']['format'] = 'default_summary';
  /* Filter criterion: Customer order: customer_order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_customer_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'order_line_item' => 'order_line_item',
  );
  /* Filter criterion: customer order: order date (field_order_date) */
  $handler->display->display_options['filters']['field_order_date_value']['id'] = 'field_order_date_value';
  $handler->display->display_options['filters']['field_order_date_value']['table'] = 'field_data_field_order_date';
  $handler->display->display_options['filters']['field_order_date_value']['field'] = 'field_order_date_value';
  $handler->display->display_options['filters']['field_order_date_value']['relationship'] = 'field_order_instance_target_id';
  $handler->display->display_options['filters']['field_order_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_order_date_value']['expose']['operator_id'] = 'field_order_date_value_op';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['label'] = 'order date (field_order_date)';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_order_date_value']['expose']['operator'] = 'field_order_date_value_op';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['identifier'] = 'field_order_date_value';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_order_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Line Item Field View */
  $handler = $view->new_display('block', 'Line Item Field View', 'line_item_field');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Line Item Field View';
  $handler->display->display_options['display_description'] = 'Used in te Weekly Customer report to aggregate Line items';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_order_instance' => 'field_order_instance',
    'field_lineitem_quantity' => 'field_lineitem_quantity',
    'field_lineitem_product' => 'field_lineitem_product',
    'field_line_item_price' => 'field_line_item_price',
    'field_line_item_price_1' => 'field_line_item_price_1',
    'field_lineitem_quantity_1' => 'field_lineitem_quantity_1',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_order_instance' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lineitem_quantity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lineitem_product' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_line_item_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_line_item_price_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lineitem_quantity_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: customer order: Order Instance */
  $handler->display->display_options['fields']['field_order_instance']['id'] = 'field_order_instance';
  $handler->display->display_options['fields']['field_order_instance']['table'] = 'field_data_field_order_instance';
  $handler->display->display_options['fields']['field_order_instance']['field'] = 'field_order_instance';
  $handler->display->display_options['fields']['field_order_instance']['label'] = 'Order ID';
  $handler->display->display_options['fields']['field_order_instance']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order_instance']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_instance']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_order_instance']['settings'] = array(
    'link' => 0,
  );
  /* Field: customer order: Quantity */
  $handler->display->display_options['fields']['field_lineitem_quantity']['id'] = 'field_lineitem_quantity';
  $handler->display->display_options['fields']['field_lineitem_quantity']['table'] = 'field_data_field_lineitem_quantity';
  $handler->display->display_options['fields']['field_lineitem_quantity']['field'] = 'field_lineitem_quantity';
  $handler->display->display_options['fields']['field_lineitem_quantity']['label'] = '';
  $handler->display->display_options['fields']['field_lineitem_quantity']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lineitem_quantity']['alter']['text'] = '[[field_lineitem_quantity]]';
  $handler->display->display_options['fields']['field_lineitem_quantity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lineitem_quantity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lineitem_quantity']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_lineitem_quantity']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: customer order: Product */
  $handler->display->display_options['fields']['field_lineitem_product']['id'] = 'field_lineitem_product';
  $handler->display->display_options['fields']['field_lineitem_product']['table'] = 'field_data_field_lineitem_product';
  $handler->display->display_options['fields']['field_lineitem_product']['field'] = 'field_lineitem_product';
  $handler->display->display_options['fields']['field_lineitem_product']['label'] = '';
  $handler->display->display_options['fields']['field_lineitem_product']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lineitem_product']['settings'] = array(
    'link' => 0,
  );
  /* Field: customer order: Line Item Price */
  $handler->display->display_options['fields']['field_line_item_price']['id'] = 'field_line_item_price';
  $handler->display->display_options['fields']['field_line_item_price']['table'] = 'field_data_field_line_item_price';
  $handler->display->display_options['fields']['field_line_item_price']['field'] = 'field_line_item_price';
  $handler->display->display_options['fields']['field_line_item_price']['label'] = '';
  $handler->display->display_options['fields']['field_line_item_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_line_item_price']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_line_item_price']['alter']['text'] = '($[field_line_item_price])';
  $handler->display->display_options['fields']['field_line_item_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_line_item_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_line_item_price']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_line_item_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: customer order: Line Item Price */
  $handler->display->display_options['fields']['field_line_item_price_1']['id'] = 'field_line_item_price_1';
  $handler->display->display_options['fields']['field_line_item_price_1']['table'] = 'field_data_field_line_item_price';
  $handler->display->display_options['fields']['field_line_item_price_1']['field'] = 'field_line_item_price';
  $handler->display->display_options['fields']['field_line_item_price_1']['label'] = '';
  $handler->display->display_options['fields']['field_line_item_price_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_line_item_price_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_line_item_price_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_line_item_price_1']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: customer order: Quantity */
  $handler->display->display_options['fields']['field_lineitem_quantity_1']['id'] = 'field_lineitem_quantity_1';
  $handler->display->display_options['fields']['field_lineitem_quantity_1']['table'] = 'field_data_field_lineitem_quantity';
  $handler->display->display_options['fields']['field_lineitem_quantity_1']['field'] = 'field_lineitem_quantity';
  $handler->display->display_options['fields']['field_lineitem_quantity_1']['label'] = '';
  $handler->display->display_options['fields']['field_lineitem_quantity_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lineitem_quantity_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lineitem_quantity_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lineitem_quantity_1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expression']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['expression']['alter']['text'] = '[expression] *';
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['separator'] = '';
  $handler->display->display_options['fields']['expression']['prefix'] = '$';
  $handler->display->display_options['fields']['expression']['suffix'] = '.00';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_line_item_price_1] * [field_lineitem_quantity_1]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: customer order: Order Instance (field_order_instance) */
  $handler->display->display_options['arguments']['field_order_instance_target_id']['id'] = 'field_order_instance_target_id';
  $handler->display->display_options['arguments']['field_order_instance_target_id']['table'] = 'field_data_field_order_instance';
  $handler->display->display_options['arguments']['field_order_instance_target_id']['field'] = 'field_order_instance_target_id';
  $handler->display->display_options['arguments']['field_order_instance_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_order_instance_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_order_instance_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_order_instance_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Customer order: customer_order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_customer_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'order_line_item' => 'order_line_item',
  );

  /* Display: Line Item Summary */
  $handler = $view->new_display('block', 'Line Item Summary', 'line_item_summary');
  $handler->display->display_options['display_description'] = 'Used as summary for weekly customer orders';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_lineitem_product' => 'field_lineitem_product',
    'field_line_item_price' => 'field_line_item_price',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_order_instance_target_id']['id'] = 'field_order_instance_target_id';
  $handler->display->display_options['relationships']['field_order_instance_target_id']['table'] = 'field_data_field_order_instance';
  $handler->display->display_options['relationships']['field_order_instance_target_id']['field'] = 'field_order_instance_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: customer order: Product */
  $handler->display->display_options['fields']['field_lineitem_product']['id'] = 'field_lineitem_product';
  $handler->display->display_options['fields']['field_lineitem_product']['table'] = 'field_data_field_lineitem_product';
  $handler->display->display_options['fields']['field_lineitem_product']['field'] = 'field_lineitem_product';
  $handler->display->display_options['fields']['field_lineitem_product']['label'] = '';
  $handler->display->display_options['fields']['field_lineitem_product']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lineitem_product']['alter']['text'] = '&nbsp; &nbsp; &nbsp; [field_lineitem_product] &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; ';
  $handler->display->display_options['fields']['field_lineitem_product']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lineitem_product']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_lineitem_product']['separator'] = '';
  /* Field: customer order: Line Item Price */
  $handler->display->display_options['fields']['field_line_item_price_1']['id'] = 'field_line_item_price_1';
  $handler->display->display_options['fields']['field_line_item_price_1']['table'] = 'field_data_field_line_item_price';
  $handler->display->display_options['fields']['field_line_item_price_1']['field'] = 'field_line_item_price';
  $handler->display->display_options['fields']['field_line_item_price_1']['relationship'] = 'field_order_instance_target_id';
  $handler->display->display_options['fields']['field_line_item_price_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_line_item_price_1']['label'] = 'Sum';
  $handler->display->display_options['fields']['field_line_item_price_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_line_item_price_1']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_line_item_price_1']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_line_item_price_1']['group_columns'] = array(
    'value' => 'value',
  );
  /* Field: customer order: Quantity */
  $handler->display->display_options['fields']['field_lineitem_quantity']['id'] = 'field_lineitem_quantity';
  $handler->display->display_options['fields']['field_lineitem_quantity']['table'] = 'field_data_field_lineitem_quantity';
  $handler->display->display_options['fields']['field_lineitem_quantity']['field'] = 'field_lineitem_quantity';
  $handler->display->display_options['fields']['field_lineitem_quantity']['relationship'] = 'field_order_instance_target_id';
  $handler->display->display_options['fields']['field_lineitem_quantity']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_lineitem_quantity']['separator'] = ', ';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Customer order: customer_order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_customer_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'order_line_item' => 'order_line_item',
  );
  /* Filter criterion: customer order: order date (field_order_date) */
  $handler->display->display_options['filters']['field_order_date_value']['id'] = 'field_order_date_value';
  $handler->display->display_options['filters']['field_order_date_value']['table'] = 'field_data_field_order_date';
  $handler->display->display_options['filters']['field_order_date_value']['field'] = 'field_order_date_value';
  $handler->display->display_options['filters']['field_order_date_value']['relationship'] = 'field_order_instance_target_id';
  $handler->display->display_options['filters']['field_order_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_order_date_value']['expose']['operator_id'] = 'field_order_date_value_op';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['label'] = 'Order Date';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_order_date_value']['expose']['operator'] = 'field_order_date_value_op';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['identifier'] = 'field_order_date_value';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_order_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_order_date_value']['year_range'] = '-1:+1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Select a date range and click on Apply to see results';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_line_item_price' => 'field_line_item_price',
    'field_order_instance' => 'field_order_instance',
    'field_lineitem_product' => 'field_lineitem_product',
    'field_lineitem_quantity' => 'field_lineitem_quantity',
    'expression' => 'expression',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: customer order: Quantity */
  $handler->display->display_options['fields']['field_lineitem_quantity']['id'] = 'field_lineitem_quantity';
  $handler->display->display_options['fields']['field_lineitem_quantity']['table'] = 'field_data_field_lineitem_quantity';
  $handler->display->display_options['fields']['field_lineitem_quantity']['field'] = 'field_lineitem_quantity';
  $handler->display->display_options['fields']['field_lineitem_quantity']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_lineitem_quantity']['label'] = '';
  $handler->display->display_options['fields']['field_lineitem_quantity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lineitem_quantity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lineitem_quantity']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_lineitem_quantity']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: customer order: Product */
  $handler->display->display_options['fields']['field_lineitem_product']['id'] = 'field_lineitem_product';
  $handler->display->display_options['fields']['field_lineitem_product']['table'] = 'field_data_field_lineitem_product';
  $handler->display->display_options['fields']['field_lineitem_product']['field'] = 'field_lineitem_product';
  $handler->display->display_options['fields']['field_lineitem_product']['label'] = '';
  $handler->display->display_options['fields']['field_lineitem_product']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lineitem_product']['settings'] = array(
    'link' => 0,
  );
  /* Field: customer order: Line Item Price */
  $handler->display->display_options['fields']['field_line_item_price']['id'] = 'field_line_item_price';
  $handler->display->display_options['fields']['field_line_item_price']['table'] = 'field_data_field_line_item_price';
  $handler->display->display_options['fields']['field_line_item_price']['field'] = 'field_line_item_price';
  $handler->display->display_options['fields']['field_line_item_price']['label'] = 'Price';
  $handler->display->display_options['fields']['field_line_item_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_line_item_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_line_item_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Total';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['prefix'] = '$';
  $handler->display->display_options['fields']['expression']['suffix'] = '.00';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_lineitem_quantity] * [field_line_item_price]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Customer order: customer_order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_customer_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'order_line_item' => 'order_line_item',
  );
  /* Filter criterion: customer order: order date (field_order_date) */
  $handler->display->display_options['filters']['field_order_date_value']['id'] = 'field_order_date_value';
  $handler->display->display_options['filters']['field_order_date_value']['table'] = 'field_data_field_order_date';
  $handler->display->display_options['filters']['field_order_date_value']['field'] = 'field_order_date_value';
  $handler->display->display_options['filters']['field_order_date_value']['relationship'] = 'field_order_instance_target_id';
  $handler->display->display_options['filters']['field_order_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_order_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_order_date_value']['expose']['operator_id'] = 'field_order_date_value_op';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['label'] = 'Order Date';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_order_date_value']['expose']['operator'] = 'field_order_date_value_op';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['identifier'] = 'field_order_date_value';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_order_date_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_order_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_order_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: customer order: Picked Up (field_picked_up) */
  $handler->display->display_options['filters']['field_picked_up_value']['id'] = 'field_picked_up_value';
  $handler->display->display_options['filters']['field_picked_up_value']['table'] = 'field_data_field_picked_up';
  $handler->display->display_options['filters']['field_picked_up_value']['field'] = 'field_picked_up_value';
  $handler->display->display_options['filters']['field_picked_up_value']['relationship'] = 'field_order_instance_target_id';
  $handler->display->display_options['filters']['field_picked_up_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_picked_up_value']['expose']['operator_id'] = 'field_picked_up_value_op';
  $handler->display->display_options['filters']['field_picked_up_value']['expose']['label'] = 'Picked Up';
  $handler->display->display_options['filters']['field_picked_up_value']['expose']['operator'] = 'field_picked_up_value_op';
  $handler->display->display_options['filters']['field_picked_up_value']['expose']['identifier'] = 'field_picked_up_value';
  $handler->display->display_options['filters']['field_picked_up_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'weekly-order-summary';
  $handler->display->display_options['menu']['title'] = 'Order Summary';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['weekly_customer_orders'] = $view;

  $view = new view();
  $view->name = 'weekly_email';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Weekly Email';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bulk Email Process';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_customer_last_name' => 'field_customer_last_name',
    'field_customer_email' => 'field_customer_email',
    'views_send' => 'views_send',
    'field_customer_fee_paid' => 'field_customer_fee_paid',
    'view' => 'view',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_send' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer_fee_paid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Active Customers';
  $handler->display->display_options['style_options']['summary'] = 'Active Customers';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'First Name';
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_customer_last_name']['id'] = 'field_customer_last_name';
  $handler->display->display_options['fields']['field_customer_last_name']['table'] = 'field_data_field_customer_last_name';
  $handler->display->display_options['fields']['field_customer_last_name']['field'] = 'field_customer_last_name';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_customer_email']['id'] = 'field_customer_email';
  $handler->display->display_options['fields']['field_customer_email']['table'] = 'field_data_field_customer_email';
  $handler->display->display_options['fields']['field_customer_email']['field'] = 'field_customer_email';
  $handler->display->display_options['fields']['field_customer_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_customer_email']['type'] = 'email_plain';
  /* Field: Global: Send e-mail */
  $handler->display->display_options['fields']['views_send']['id'] = 'views_send';
  $handler->display->display_options['fields']['views_send']['table'] = 'views';
  $handler->display->display_options['fields']['views_send']['field'] = 'views_send';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'customer' => 'customer',
  );
  /* Filter criterion: Content: Active (field_customer_active) */
  $handler->display->display_options['filters']['field_customer_active_value']['id'] = 'field_customer_active_value';
  $handler->display->display_options['filters']['field_customer_active_value']['table'] = 'field_data_field_customer_active';
  $handler->display->display_options['filters']['field_customer_active_value']['field'] = 'field_customer_active_value';
  $handler->display->display_options['filters']['field_customer_active_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Fee Paid (field_customer_fee_paid) */
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['id'] = 'field_customer_fee_paid_value';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['table'] = 'field_data_field_customer_fee_paid';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['field'] = 'field_customer_fee_paid_value';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['expose']['operator_id'] = 'field_customer_fee_paid_value_op';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['expose']['label'] = 'Fee Paid';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['expose']['operator'] = 'field_customer_fee_paid_value_op';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['expose']['identifier'] = 'field_customer_fee_paid_value';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: Last Name (field_customer_last_name) */
  $handler->display->display_options['filters']['field_customer_last_name_value']['id'] = 'field_customer_last_name_value';
  $handler->display->display_options['filters']['field_customer_last_name_value']['table'] = 'field_data_field_customer_last_name';
  $handler->display->display_options['filters']['field_customer_last_name_value']['field'] = 'field_customer_last_name_value';
  $handler->display->display_options['filters']['field_customer_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_customer_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_last_name_value']['expose']['operator_id'] = 'field_customer_last_name_value_op';
  $handler->display->display_options['filters']['field_customer_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_customer_last_name_value']['expose']['operator'] = 'field_customer_last_name_value_op';
  $handler->display->display_options['filters']['field_customer_last_name_value']['expose']['identifier'] = 'field_customer_last_name_value';
  $handler->display->display_options['filters']['field_customer_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Email (field_customer_email) */
  $handler->display->display_options['filters']['field_customer_email_email']['id'] = 'field_customer_email_email';
  $handler->display->display_options['filters']['field_customer_email_email']['table'] = 'field_data_field_customer_email';
  $handler->display->display_options['filters']['field_customer_email_email']['field'] = 'field_customer_email_email';
  $handler->display->display_options['filters']['field_customer_email_email']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_customer_email_email']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_email_email']['expose']['operator_id'] = 'field_customer_email_email_op';
  $handler->display->display_options['filters']['field_customer_email_email']['expose']['label'] = 'Email';
  $handler->display->display_options['filters']['field_customer_email_email']['expose']['operator'] = 'field_customer_email_email_op';
  $handler->display->display_options['filters']['field_customer_email_email']['expose']['identifier'] = 'field_customer_email_email';
  $handler->display->display_options['filters']['field_customer_email_email']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'First Name';
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_customer_last_name']['id'] = 'field_customer_last_name';
  $handler->display->display_options['fields']['field_customer_last_name']['table'] = 'field_data_field_customer_last_name';
  $handler->display->display_options['fields']['field_customer_last_name']['field'] = 'field_customer_last_name';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_customer_email']['id'] = 'field_customer_email';
  $handler->display->display_options['fields']['field_customer_email']['table'] = 'field_data_field_customer_email';
  $handler->display->display_options['fields']['field_customer_email']['field'] = 'field_customer_email';
  $handler->display->display_options['fields']['field_customer_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_customer_email']['type'] = 'email_plain';
  /* Field: Global: Send e-mail */
  $handler->display->display_options['fields']['views_send']['id'] = 'views_send';
  $handler->display->display_options['fields']['views_send']['table'] = 'views';
  $handler->display->display_options['fields']['views_send']['field'] = 'views_send';
  /* Field: Field: Last Order Date */
  $handler->display->display_options['fields']['field_last_order_date']['id'] = 'field_last_order_date';
  $handler->display->display_options['fields']['field_last_order_date']['table'] = 'field_data_field_last_order_date';
  $handler->display->display_options['fields']['field_last_order_date']['field'] = 'field_last_order_date';
  $handler->display->display_options['fields']['field_last_order_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Annual Fee Date */
  $handler->display->display_options['fields']['field_annual_fee']['id'] = 'field_annual_fee';
  $handler->display->display_options['fields']['field_annual_fee']['table'] = 'field_data_field_annual_fee';
  $handler->display->display_options['fields']['field_annual_fee']['field'] = 'field_annual_fee';
  $handler->display->display_options['fields']['field_annual_fee']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Email (field_customer_email) */
  $handler->display->display_options['sorts']['field_customer_email_email']['id'] = 'field_customer_email_email';
  $handler->display->display_options['sorts']['field_customer_email_email']['table'] = 'field_data_field_customer_email';
  $handler->display->display_options['sorts']['field_customer_email_email']['field'] = 'field_customer_email_email';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'customer' => 'customer',
  );
  /* Filter criterion: Content: Active (field_customer_active) */
  $handler->display->display_options['filters']['field_customer_active_value']['id'] = 'field_customer_active_value';
  $handler->display->display_options['filters']['field_customer_active_value']['table'] = 'field_data_field_customer_active';
  $handler->display->display_options['filters']['field_customer_active_value']['field'] = 'field_customer_active_value';
  $handler->display->display_options['filters']['field_customer_active_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Field: Last Name (field_customer_last_name) */
  $handler->display->display_options['filters']['field_customer_last_name_value']['id'] = 'field_customer_last_name_value';
  $handler->display->display_options['filters']['field_customer_last_name_value']['table'] = 'field_data_field_customer_last_name';
  $handler->display->display_options['filters']['field_customer_last_name_value']['field'] = 'field_customer_last_name_value';
  $handler->display->display_options['filters']['field_customer_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_customer_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_last_name_value']['expose']['operator_id'] = 'field_customer_last_name_value_op';
  $handler->display->display_options['filters']['field_customer_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_customer_last_name_value']['expose']['operator'] = 'field_customer_last_name_value_op';
  $handler->display->display_options['filters']['field_customer_last_name_value']['expose']['identifier'] = 'field_customer_last_name_value';
  $handler->display->display_options['filters']['field_customer_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Email (field_customer_email) */
  $handler->display->display_options['filters']['field_customer_email_email']['id'] = 'field_customer_email_email';
  $handler->display->display_options['filters']['field_customer_email_email']['table'] = 'field_data_field_customer_email';
  $handler->display->display_options['filters']['field_customer_email_email']['field'] = 'field_customer_email_email';
  $handler->display->display_options['filters']['field_customer_email_email']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_customer_email_email']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_email_email']['expose']['operator_id'] = 'field_customer_email_email_op';
  $handler->display->display_options['filters']['field_customer_email_email']['expose']['label'] = 'Email';
  $handler->display->display_options['filters']['field_customer_email_email']['expose']['operator'] = 'field_customer_email_email_op';
  $handler->display->display_options['filters']['field_customer_email_email']['expose']['identifier'] = 'field_customer_email_email';
  $handler->display->display_options['filters']['field_customer_email_email']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: Last Order Date (field_last_order_date) */
  $handler->display->display_options['filters']['field_last_order_date_value']['id'] = 'field_last_order_date_value';
  $handler->display->display_options['filters']['field_last_order_date_value']['table'] = 'field_data_field_last_order_date';
  $handler->display->display_options['filters']['field_last_order_date_value']['field'] = 'field_last_order_date_value';
  $handler->display->display_options['filters']['field_last_order_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_last_order_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_order_date_value']['expose']['operator_id'] = 'field_last_order_date_value_op';
  $handler->display->display_options['filters']['field_last_order_date_value']['expose']['label'] = 'Last Order Date';
  $handler->display->display_options['filters']['field_last_order_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_last_order_date_value']['expose']['operator'] = 'field_last_order_date_value_op';
  $handler->display->display_options['filters']['field_last_order_date_value']['expose']['identifier'] = 'field_last_order_date_value';
  $handler->display->display_options['filters']['field_last_order_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_last_order_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_last_order_date_value']['year_range'] = '-2:+1';
  /* Filter criterion: Field: Annual Fee Date (field_annual_fee) */
  $handler->display->display_options['filters']['field_annual_fee_value']['id'] = 'field_annual_fee_value';
  $handler->display->display_options['filters']['field_annual_fee_value']['table'] = 'field_data_field_annual_fee';
  $handler->display->display_options['filters']['field_annual_fee_value']['field'] = 'field_annual_fee_value';
  $handler->display->display_options['filters']['field_annual_fee_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_annual_fee_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_annual_fee_value']['expose']['operator_id'] = 'field_annual_fee_value_op';
  $handler->display->display_options['filters']['field_annual_fee_value']['expose']['label'] = 'Annual Fee Date';
  $handler->display->display_options['filters']['field_annual_fee_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_annual_fee_value']['expose']['operator'] = 'field_annual_fee_value_op';
  $handler->display->display_options['filters']['field_annual_fee_value']['expose']['identifier'] = 'field_annual_fee_value';
  $handler->display->display_options['filters']['field_annual_fee_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_annual_fee_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_annual_fee_value']['year_range'] = '-2:+1';
  $export['weekly_email'] = $view;

  $view = new view();
  $view->name = 'weekly_orders_all_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_customer_order';
  $view->human_name = 'Weekly Orders (All)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Weekly Customer Orders';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = 'weekly-order-row';
  $handler->display->display_options['style_options']['columns'] = array(
    'edit_link' => 'edit_link',
    'id' => 'id',
    'field_order_customer' => 'field_order_customer',
    'field_customer_last_name' => 'field_customer_last_name',
    'field_customer_phone' => 'field_customer_phone',
    'field_customer_email' => 'field_customer_email',
    'field_order_is_new' => 'field_order_is_new',
    'field_order_date' => 'field_order_date',
    'field_picked_up' => 'field_picked_up',
    'view' => 'view',
    'field_order_price' => 'field_order_price',
    'nid' => 'nid',
    'field_customer_fee_paid' => 'field_customer_fee_paid',
    'body' => 'body',
    'field_customer_delivery_address' => 'field_customer_delivery_address',
    'field_order_notes' => 'field_order_notes',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'edit_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_customer' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer_phone' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_is_new' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_picked_up' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer_fee_paid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer_delivery_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_notes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no Orders for this date range and filter criteria. ';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_order_customer_target_id']['id'] = 'field_order_customer_target_id';
  $handler->display->display_options['relationships']['field_order_customer_target_id']['table'] = 'field_data_field_order_customer';
  $handler->display->display_options['relationships']['field_order_customer_target_id']['field'] = 'field_order_customer_target_id';
  $handler->display->display_options['relationships']['field_order_customer_target_id']['label'] = 'Customer referenced from field_order_customer';
  /* Field: Customer order: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_customer_order';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_link']['text'] = 'Edit Order';
  /* Field: Customer order: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_customer_order';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: customer order: customer */
  $handler->display->display_options['fields']['field_order_customer']['id'] = 'field_order_customer';
  $handler->display->display_options['fields']['field_order_customer']['table'] = 'field_data_field_order_customer';
  $handler->display->display_options['fields']['field_order_customer']['field'] = 'field_order_customer';
  $handler->display->display_options['fields']['field_order_customer']['label'] = 'First Name';
  $handler->display->display_options['fields']['field_order_customer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_customer']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_customer_last_name']['id'] = 'field_customer_last_name';
  $handler->display->display_options['fields']['field_customer_last_name']['table'] = 'field_data_field_customer_last_name';
  $handler->display->display_options['fields']['field_customer_last_name']['field'] = 'field_customer_last_name';
  $handler->display->display_options['fields']['field_customer_last_name']['relationship'] = 'field_order_customer_target_id';
  $handler->display->display_options['fields']['field_customer_last_name']['element_label_colon'] = FALSE;
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_customer_phone']['id'] = 'field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['table'] = 'field_data_field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['field'] = 'field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['relationship'] = 'field_order_customer_target_id';
  $handler->display->display_options['fields']['field_customer_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_customer_email']['id'] = 'field_customer_email';
  $handler->display->display_options['fields']['field_customer_email']['table'] = 'field_data_field_customer_email';
  $handler->display->display_options['fields']['field_customer_email']['field'] = 'field_customer_email';
  $handler->display->display_options['fields']['field_customer_email']['relationship'] = 'field_order_customer_target_id';
  $handler->display->display_options['fields']['field_customer_email']['element_label_colon'] = FALSE;
  /* Field: customer order: Is New */
  $handler->display->display_options['fields']['field_order_is_new']['id'] = 'field_order_is_new';
  $handler->display->display_options['fields']['field_order_is_new']['table'] = 'field_data_field_order_is_new';
  $handler->display->display_options['fields']['field_order_is_new']['field'] = 'field_order_is_new';
  $handler->display->display_options['fields']['field_order_is_new']['element_label_colon'] = FALSE;
  /* Field: customer order: order date */
  $handler->display->display_options['fields']['field_order_date']['id'] = 'field_order_date';
  $handler->display->display_options['fields']['field_order_date']['table'] = 'field_data_field_order_date';
  $handler->display->display_options['fields']['field_order_date']['field'] = 'field_order_date';
  $handler->display->display_options['fields']['field_order_date']['label'] = 'Order Date';
  $handler->display->display_options['fields']['field_order_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: customer order: Picked Up */
  $handler->display->display_options['fields']['field_picked_up']['id'] = 'field_picked_up';
  $handler->display->display_options['fields']['field_picked_up']['table'] = 'field_data_field_picked_up';
  $handler->display->display_options['fields']['field_picked_up']['field'] = 'field_picked_up';
  $handler->display->display_options['fields']['field_picked_up']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_picked_up']['alter']['text'] = '<a href="admin/structure/entity-type/customer_order/customer_order/[id]/edit" target="_blank">[field_picked_up]</a>';
  $handler->display->display_options['fields']['field_picked_up']['alter']['path'] = 'admin/structure/entity-type/customer_order/customer_order/[id]/edit';
  $handler->display->display_options['fields']['field_picked_up']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Line Item - [Qty] Basket - Subtotal';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'weekly_customer_orders';
  $handler->display->display_options['fields']['view']['display'] = 'line_item_field';
  $handler->display->display_options['fields']['view']['arguments'] = '[!id]';
  /* Field: customer order: Price */
  $handler->display->display_options['fields']['field_order_price']['id'] = 'field_order_price';
  $handler->display->display_options['fields']['field_order_price']['table'] = 'field_data_field_order_price';
  $handler->display->display_options['fields']['field_order_price']['field'] = 'field_order_price';
  $handler->display->display_options['fields']['field_order_price']['label'] = 'Total';
  $handler->display->display_options['fields']['field_order_price']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_order_price']['alter']['text'] = '$[field_order_price]';
  $handler->display->display_options['fields']['field_order_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_order_customer_target_id';
  $handler->display->display_options['fields']['nid']['label'] = 'Customer Nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Fee Paid */
  $handler->display->display_options['fields']['field_customer_fee_paid']['id'] = 'field_customer_fee_paid';
  $handler->display->display_options['fields']['field_customer_fee_paid']['table'] = 'field_data_field_customer_fee_paid';
  $handler->display->display_options['fields']['field_customer_fee_paid']['field'] = 'field_customer_fee_paid';
  $handler->display->display_options['fields']['field_customer_fee_paid']['relationship'] = 'field_order_customer_target_id';
  $handler->display->display_options['fields']['field_customer_fee_paid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_customer_fee_paid']['alter']['text'] = '<a href="node/[nid]/edit" target="_blank">[field_customer_fee_paid]</a>';
  $handler->display->display_options['fields']['field_customer_fee_paid']['alter']['path'] = 'node/[nid]/edit';
  $handler->display->display_options['fields']['field_customer_fee_paid']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_order_customer_target_id';
  $handler->display->display_options['fields']['body']['label'] = 'Notes';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<a href="/node/[nid]/edit" target="_blank">edit</a> [body] ';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['empty'] = '<a href="/node/[nid]/edit?destination=weekly-customer-orders" target="_blank">Add Note</a>';
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Delivery Address */
  $handler->display->display_options['fields']['field_customer_delivery_address']['id'] = 'field_customer_delivery_address';
  $handler->display->display_options['fields']['field_customer_delivery_address']['table'] = 'field_data_field_customer_delivery_address';
  $handler->display->display_options['fields']['field_customer_delivery_address']['field'] = 'field_customer_delivery_address';
  $handler->display->display_options['fields']['field_customer_delivery_address']['relationship'] = 'field_order_customer_target_id';
  $handler->display->display_options['fields']['field_customer_delivery_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_customer_delivery_address']['alter']['text'] = '<a href="node/[nid]/edit" target="_blank">edit:</a> [field_customer_delivery_address]';
  $handler->display->display_options['fields']['field_customer_delivery_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_customer_delivery_address']['empty'] = '<a href="node/[nid]/edit" target="_blank"> Add Delivery</a>';
  /* Field: Field: Order Notes */
  $handler->display->display_options['fields']['field_order_notes']['id'] = 'field_order_notes';
  $handler->display->display_options['fields']['field_order_notes']['table'] = 'field_data_field_order_notes';
  $handler->display->display_options['fields']['field_order_notes']['field'] = 'field_order_notes';
  $handler->display->display_options['fields']['field_order_notes']['label'] = 'Special Instructions';
  $handler->display->display_options['fields']['field_order_notes']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_order_notes']['alter']['text'] = '<span style="font-size:9px; line-height:95%">[field_order_notes-value]</span>';
  $handler->display->display_options['fields']['field_order_notes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order_notes']['type'] = 'text_plain';
  /* Sort criterion: Field: Last Name (field_customer_last_name) */
  $handler->display->display_options['sorts']['field_customer_last_name_value']['id'] = 'field_customer_last_name_value';
  $handler->display->display_options['sorts']['field_customer_last_name_value']['table'] = 'field_data_field_customer_last_name';
  $handler->display->display_options['sorts']['field_customer_last_name_value']['field'] = 'field_customer_last_name_value';
  $handler->display->display_options['sorts']['field_customer_last_name_value']['relationship'] = 'field_order_customer_target_id';
  /* Filter criterion: Customer order: customer_order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_customer_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'customer_order' => 'customer_order',
  );
  /* Filter criterion: customer order: order date (field_order_date) */
  $handler->display->display_options['filters']['field_order_date_value']['id'] = 'field_order_date_value';
  $handler->display->display_options['filters']['field_order_date_value']['table'] = 'field_data_field_order_date';
  $handler->display->display_options['filters']['field_order_date_value']['field'] = 'field_order_date_value';
  $handler->display->display_options['filters']['field_order_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_order_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_order_date_value']['expose']['operator_id'] = 'field_order_date_value_op';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['label'] = 'Order Date';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['description'] = 'Select the Date range for this weeks Orders.';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['operator'] = 'field_order_date_value_op';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['identifier'] = 'field_order_date_value';
  $handler->display->display_options['filters']['field_order_date_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_order_date_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_order_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_order_date_value']['group_info']['label'] = 'order date (field_order_date)';
  $handler->display->display_options['filters']['field_order_date_value']['group_info']['identifier'] = 'field_order_date_value';
  $handler->display->display_options['filters']['field_order_date_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_order_date_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_order_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_order_date_value']['year_range'] = '-1:+1';
  /* Filter criterion: customer order: Picked Up (field_picked_up) */
  $handler->display->display_options['filters']['field_picked_up_value']['id'] = 'field_picked_up_value';
  $handler->display->display_options['filters']['field_picked_up_value']['table'] = 'field_data_field_picked_up';
  $handler->display->display_options['filters']['field_picked_up_value']['field'] = 'field_picked_up_value';
  $handler->display->display_options['filters']['field_picked_up_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_picked_up_value']['expose']['operator_id'] = 'field_picked_up_value_op';
  $handler->display->display_options['filters']['field_picked_up_value']['expose']['label'] = 'Picked Up';
  $handler->display->display_options['filters']['field_picked_up_value']['expose']['operator'] = 'field_picked_up_value_op';
  $handler->display->display_options['filters']['field_picked_up_value']['expose']['identifier'] = 'field_picked_up_value';
  $handler->display->display_options['filters']['field_picked_up_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: customer order: Is New (field_order_is_new) */
  $handler->display->display_options['filters']['field_order_is_new_value']['id'] = 'field_order_is_new_value';
  $handler->display->display_options['filters']['field_order_is_new_value']['table'] = 'field_data_field_order_is_new';
  $handler->display->display_options['filters']['field_order_is_new_value']['field'] = 'field_order_is_new_value';
  $handler->display->display_options['filters']['field_order_is_new_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_order_is_new_value']['expose']['operator_id'] = 'field_order_is_new_value_op';
  $handler->display->display_options['filters']['field_order_is_new_value']['expose']['label'] = 'Is New';
  $handler->display->display_options['filters']['field_order_is_new_value']['expose']['operator'] = 'field_order_is_new_value_op';
  $handler->display->display_options['filters']['field_order_is_new_value']['expose']['identifier'] = 'field_order_is_new_value';
  $handler->display->display_options['filters']['field_order_is_new_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Fee Paid (field_customer_fee_paid) */
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['id'] = 'field_customer_fee_paid_value';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['table'] = 'field_data_field_customer_fee_paid';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['field'] = 'field_customer_fee_paid_value';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['relationship'] = 'field_order_customer_target_id';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['expose']['operator_id'] = 'field_customer_fee_paid_value_op';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['expose']['label'] = 'Fee Paid';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['expose']['operator'] = 'field_customer_fee_paid_value_op';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['expose']['identifier'] = 'field_customer_fee_paid_value';
  $handler->display->display_options['filters']['field_customer_fee_paid_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Email (field_customer_email) */
  $handler->display->display_options['filters']['field_customer_email_email']['id'] = 'field_customer_email_email';
  $handler->display->display_options['filters']['field_customer_email_email']['table'] = 'field_data_field_customer_email';
  $handler->display->display_options['filters']['field_customer_email_email']['field'] = 'field_customer_email_email';
  $handler->display->display_options['filters']['field_customer_email_email']['relationship'] = 'field_order_customer_target_id';
  $handler->display->display_options['filters']['field_customer_email_email']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_customer_email_email']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_email_email']['expose']['operator_id'] = 'field_customer_email_email_op';
  $handler->display->display_options['filters']['field_customer_email_email']['expose']['label'] = 'Email';
  $handler->display->display_options['filters']['field_customer_email_email']['expose']['operator'] = 'field_customer_email_email_op';
  $handler->display->display_options['filters']['field_customer_email_email']['expose']['identifier'] = 'field_customer_email_email';
  $handler->display->display_options['filters']['field_customer_email_email']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: Last Name (field_customer_last_name) */
  $handler->display->display_options['filters']['field_customer_last_name_value']['id'] = 'field_customer_last_name_value';
  $handler->display->display_options['filters']['field_customer_last_name_value']['table'] = 'field_data_field_customer_last_name';
  $handler->display->display_options['filters']['field_customer_last_name_value']['field'] = 'field_customer_last_name_value';
  $handler->display->display_options['filters']['field_customer_last_name_value']['relationship'] = 'field_order_customer_target_id';
  $handler->display->display_options['filters']['field_customer_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_customer_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_last_name_value']['expose']['operator_id'] = 'field_customer_last_name_value_op';
  $handler->display->display_options['filters']['field_customer_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_customer_last_name_value']['expose']['operator'] = 'field_customer_last_name_value_op';
  $handler->display->display_options['filters']['field_customer_last_name_value']['expose']['identifier'] = 'field_customer_last_name_value';
  $handler->display->display_options['filters']['field_customer_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Delivery Address (field_customer_delivery_address) */
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['id'] = 'field_customer_delivery_address_value';
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['table'] = 'field_data_field_customer_delivery_address';
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['field'] = 'field_customer_delivery_address_value';
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['relationship'] = 'field_order_customer_target_id';
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['expose']['operator_id'] = 'field_customer_delivery_address_value_op';
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['expose']['label'] = 'Delivery Address';
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['expose']['operator'] = 'field_customer_delivery_address_value_op';
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['expose']['identifier'] = 'field_customer_delivery_address_value';
  $handler->display->display_options['filters']['field_customer_delivery_address_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Link to Order Summary';
  $handler->display->display_options['path'] = 'weekly-customer-orders';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Weekly Orders';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: XLS Export Feed */
  $handler = $view->new_display('feed', 'XLS Export Feed', 'xls_export');
  $handler->display->display_options['display_description'] = 'Used to provide a downloadable xls file of the report';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'xls';
  $handler->display->display_options['style_options']['filename'] = 'ffvcoop-report-%view.xls';
  $handler->display->display_options['path'] = 'reports/customer-weekly-report-xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['weekly_orders_all_'] = $view;

  return $export;
}
