<?php
/**
 * @file
 * ffvcoop_commerce_init.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ffvcoop_commerce_init_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ffvcoop_line_items';
  $view->description = 'Display a set of line items in a table.';
  $view->tag = 'commerce';
  $view->base_table = 'commerce_line_item';
  $view->human_name = 'FFVCOOP Line items';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty line item text.';
  $handler->display->display_options['empty']['area']['content'] = 'No line items found.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Commerce Line Item: Line item ID */
  $handler->display->display_options['fields']['line_item_id']['id'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_id']['field'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['label'] = 'ID';
  $handler->display->display_options['fields']['line_item_id']['exclude'] = TRUE;
  /* Field: Commerce Line Item: Quantity */
  $handler->display->display_options['fields']['quantity']['id'] = 'quantity';
  $handler->display->display_options['fields']['quantity']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['quantity']['field'] = 'quantity';
  $handler->display->display_options['fields']['quantity']['label'] = '';
  $handler->display->display_options['fields']['quantity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['quantity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['quantity']['precision'] = '0';
  /* Field: Commerce Line Item: Title */
  $handler->display->display_options['fields']['line_item_title_1']['id'] = 'line_item_title_1';
  $handler->display->display_options['fields']['line_item_title_1']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_title_1']['field'] = 'line_item_title';
  $handler->display->display_options['fields']['line_item_title_1']['label'] = '';
  $handler->display->display_options['fields']['line_item_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['line_item_title_1']['element_label_colon'] = FALSE;
  /* Field: Commerce Line Item: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: Commerce Line Item: Label */
  $handler->display->display_options['fields']['line_item_label']['id'] = 'line_item_label';
  $handler->display->display_options['fields']['line_item_label']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_label']['field'] = 'line_item_label';
  $handler->display->display_options['fields']['line_item_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['line_item_label']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['line_item_label']['alter']['text'] = '([line_item_label])';
  /* Field: Commerce Line item: Unit price */
  $handler->display->display_options['fields']['commerce_unit_price']['id'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['table'] = 'field_data_commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['field'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_unit_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_unit_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_unit_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_unit_price']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Commerce Line item: Total */
  $handler->display->display_options['fields']['commerce_total']['id'] = 'commerce_total';
  $handler->display->display_options['fields']['commerce_total']['table'] = 'field_data_commerce_total';
  $handler->display->display_options['fields']['commerce_total']['field'] = 'commerce_total';
  $handler->display->display_options['fields']['commerce_total']['group_type'] = 'sum';
  $handler->display->display_options['fields']['commerce_total']['label'] = '';
  $handler->display->display_options['fields']['commerce_total']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['commerce_total']['alter']['text'] = '[quantity] [line_item_title_1] [commerce_unit_price]/[commerce_total] <br>';
  $handler->display->display_options['fields']['commerce_total']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_total']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_total']['settings'] = array(
    'calculation' => FALSE,
  );
  $handler->display->display_options['fields']['commerce_total']['group_column'] = 'entity_id';
  /* Contextual filter: Commerce Line Item: Line item ID */
  $handler->display->display_options['arguments']['line_item_id']['id'] = 'line_item_id';
  $handler->display->display_options['arguments']['line_item_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['arguments']['line_item_id']['field'] = 'line_item_id';
  $handler->display->display_options['arguments']['line_item_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['line_item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['line_item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['line_item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['line_item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['line_item_id']['break_phrase'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer commerce_order entities';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_week_date_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 1;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'line_item_id' => 'line_item_id',
    'quantity' => 'quantity',
    'type' => 'type',
    'line_item_title' => 'line_item_title',
    'line_item_label' => 'line_item_label',
    'commerce_unit_price' => 'commerce_unit_price',
    'commerce_total' => 'commerce_total',
    'order_id' => 'order_id',
    'mail' => 'mail',
    'field_customer_phone' => 'field_customer_phone',
    'name' => 'name',
    'commerce_customer_shipping' => 'commerce_customer_shipping',
    'field_week_date_1' => 'field_week_date_1',
    'field_comments' => 'field_comments',
    'view' => 'view',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'line_item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'quantity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'line_item_title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'line_item_label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_unit_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_total' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'order_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_customer_shipping' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_week_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_comments' => array(
      'sortable' => 0,
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
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Commerce Line Item: Order ID */
  $handler->display->display_options['relationships']['order_id']['id'] = 'order_id';
  $handler->display->display_options['relationships']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['relationships']['order_id']['field'] = 'order_id';
  /* Relationship: Commerce Order: Owner */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'commerce_order';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'order_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Line Item: Line item ID */
  $handler->display->display_options['fields']['line_item_id']['id'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_id']['field'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['label'] = 'ID';
  $handler->display->display_options['fields']['line_item_id']['exclude'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_customer_phone']['id'] = 'field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['table'] = 'field_data_field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['field'] = 'field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_customer_phone']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]  [mail] [field_customer_phone] ';
  /* Field: Commerce Order: Shipping information */
  $handler->display->display_options['fields']['commerce_customer_shipping']['id'] = 'commerce_customer_shipping';
  $handler->display->display_options['fields']['commerce_customer_shipping']['table'] = 'field_data_commerce_customer_shipping';
  $handler->display->display_options['fields']['commerce_customer_shipping']['field'] = 'commerce_customer_shipping';
  $handler->display->display_options['fields']['commerce_customer_shipping']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['commerce_customer_shipping']['label'] = 'Delivery information';
  /* Field: Commerce Line Item: Quantity */
  $handler->display->display_options['fields']['quantity']['id'] = 'quantity';
  $handler->display->display_options['fields']['quantity']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['quantity']['field'] = 'quantity';
  $handler->display->display_options['fields']['quantity']['label'] = '';
  $handler->display->display_options['fields']['quantity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['quantity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['quantity']['precision'] = '0';
  /* Field: Commerce Line Item: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: Commerce Line Item: Title */
  $handler->display->display_options['fields']['line_item_title']['id'] = 'line_item_title';
  $handler->display->display_options['fields']['line_item_title']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_title']['field'] = 'line_item_title';
  $handler->display->display_options['fields']['line_item_title']['label'] = '';
  $handler->display->display_options['fields']['line_item_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['line_item_title']['element_label_colon'] = FALSE;
  /* Field: Commerce Line Item: Label */
  $handler->display->display_options['fields']['line_item_label']['id'] = 'line_item_label';
  $handler->display->display_options['fields']['line_item_label']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_label']['field'] = 'line_item_label';
  $handler->display->display_options['fields']['line_item_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['line_item_label']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['line_item_label']['alter']['text'] = '([line_item_label])';
  /* Field: Commerce Line item: Unit price */
  $handler->display->display_options['fields']['commerce_unit_price']['id'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['table'] = 'field_data_commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['field'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_unit_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_unit_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_unit_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_unit_price']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Commerce Line item: Total */
  $handler->display->display_options['fields']['commerce_total']['id'] = 'commerce_total';
  $handler->display->display_options['fields']['commerce_total']['table'] = 'field_data_commerce_total';
  $handler->display->display_options['fields']['commerce_total']['field'] = 'commerce_total';
  $handler->display->display_options['fields']['commerce_total']['label'] = '';
  $handler->display->display_options['fields']['commerce_total']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_total']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_total']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_total']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Commerce Line Item: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  /* Field: Field: Week Date */
  $handler->display->display_options['fields']['field_week_date_1']['id'] = 'field_week_date_1';
  $handler->display->display_options['fields']['field_week_date_1']['table'] = 'field_data_field_week_date';
  $handler->display->display_options['fields']['field_week_date_1']['field'] = 'field_week_date';
  $handler->display->display_options['fields']['field_week_date_1']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['field_week_date_1']['label'] = 'Pickup Date';
  $handler->display->display_options['fields']['field_week_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Products';
  $handler->display->display_options['fields']['view']['view'] = 'ffvcoop_line_items_for_delivery';
  $handler->display->display_options['fields']['view']['arguments'] = '[!order_id] ';
  /* Field: Commerce Order: comments */
  $handler->display->display_options['fields']['field_comments']['id'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments']['field'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['relationship'] = 'order_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Line Item: Line item is of a product line item type */
  $handler->display->display_options['filters']['product_line_item_type']['id'] = 'product_line_item_type';
  $handler->display->display_options['filters']['product_line_item_type']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['product_line_item_type']['field'] = 'product_line_item_type';
  $handler->display->display_options['filters']['product_line_item_type']['value'] = '1';
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'order_id';
  $handler->display->display_options['filters']['status']['value'] = array(
    'pending' => 'pending',
    'cardonfile_charged' => 'cardonfile_charged',
    'completed' => 'completed',
  );
  /* Filter criterion: Field: Week Date (field_week_date) */
  $handler->display->display_options['filters']['field_week_date_value']['id'] = 'field_week_date_value';
  $handler->display->display_options['filters']['field_week_date_value']['table'] = 'field_data_field_week_date';
  $handler->display->display_options['filters']['field_week_date_value']['field'] = 'field_week_date_value';
  $handler->display->display_options['filters']['field_week_date_value']['relationship'] = 'order_id';
  $handler->display->display_options['filters']['field_week_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_week_date_value']['expose']['operator_id'] = 'field_week_date_value_op';
  $handler->display->display_options['filters']['field_week_date_value']['expose']['label'] = 'Pickup Date ';
  $handler->display->display_options['filters']['field_week_date_value']['expose']['operator'] = 'field_week_date_value_op';
  $handler->display->display_options['filters']['field_week_date_value']['expose']['identifier'] = 'field_week_date_value';
  $handler->display->display_options['filters']['field_week_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_week_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Commerce Order: Shipping information (commerce_customer_shipping) */
  $handler->display->display_options['filters']['commerce_customer_shipping_profile_id']['id'] = 'commerce_customer_shipping_profile_id';
  $handler->display->display_options['filters']['commerce_customer_shipping_profile_id']['table'] = 'field_data_commerce_customer_shipping';
  $handler->display->display_options['filters']['commerce_customer_shipping_profile_id']['field'] = 'commerce_customer_shipping_profile_id';
  $handler->display->display_options['filters']['commerce_customer_shipping_profile_id']['relationship'] = 'order_id';
  $handler->display->display_options['filters']['commerce_customer_shipping_profile_id']['operator'] = 'not empty';
  /* Filter criterion: Commerce Line Item: Label */
  $handler->display->display_options['filters']['line_item_label']['id'] = 'line_item_label';
  $handler->display->display_options['filters']['line_item_label']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['line_item_label']['field'] = 'line_item_label';
  $handler->display->display_options['filters']['line_item_label']['operator'] = 'contains';
  $handler->display->display_options['filters']['line_item_label']['value'] = 'Del';
  $handler->display->display_options['path'] = 'manage/delivery';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Delivery Orders';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Download Delivery Report';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'delivery-report.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Commerce Line Item: Order ID */
  $handler->display->display_options['relationships']['order_id']['id'] = 'order_id';
  $handler->display->display_options['relationships']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['relationships']['order_id']['field'] = 'order_id';
  /* Relationship: Commerce Order: Owner */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'commerce_order';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'order_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_customer_phone']['id'] = 'field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['table'] = 'field_data_field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['field'] = 'field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['relationship'] = 'uid';
  /* Field: Commerce Order: Shipping information */
  $handler->display->display_options['fields']['commerce_customer_shipping']['id'] = 'commerce_customer_shipping';
  $handler->display->display_options['fields']['commerce_customer_shipping']['table'] = 'field_data_commerce_customer_shipping';
  $handler->display->display_options['fields']['commerce_customer_shipping']['field'] = 'commerce_customer_shipping';
  $handler->display->display_options['fields']['commerce_customer_shipping']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['commerce_customer_shipping']['label'] = 'Delivery information';
  /* Field: Commerce Line Item: Line item ID */
  $handler->display->display_options['fields']['line_item_id']['id'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_id']['field'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['label'] = 'ID';
  $handler->display->display_options['fields']['line_item_id']['exclude'] = TRUE;
  /* Field: Commerce Line Item: Quantity */
  $handler->display->display_options['fields']['quantity']['id'] = 'quantity';
  $handler->display->display_options['fields']['quantity']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['quantity']['field'] = 'quantity';
  $handler->display->display_options['fields']['quantity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['quantity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['quantity']['precision'] = '0';
  /* Field: Commerce Line Item: Title */
  $handler->display->display_options['fields']['line_item_title_1']['id'] = 'line_item_title_1';
  $handler->display->display_options['fields']['line_item_title_1']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_title_1']['field'] = 'line_item_title';
  $handler->display->display_options['fields']['line_item_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['line_item_title_1']['element_label_colon'] = FALSE;
  /* Field: Commerce Line Item: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: Commerce Line Item: Label */
  $handler->display->display_options['fields']['line_item_label']['id'] = 'line_item_label';
  $handler->display->display_options['fields']['line_item_label']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_label']['field'] = 'line_item_label';
  $handler->display->display_options['fields']['line_item_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['line_item_label']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['line_item_label']['alter']['text'] = '([line_item_label])';
  /* Field: Commerce Line item: Unit price */
  $handler->display->display_options['fields']['commerce_unit_price']['id'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['table'] = 'field_data_commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['field'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['label'] = 'Unit Price';
  $handler->display->display_options['fields']['commerce_unit_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_unit_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_unit_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_unit_price']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Commerce Line item: Total */
  $handler->display->display_options['fields']['commerce_total']['id'] = 'commerce_total';
  $handler->display->display_options['fields']['commerce_total']['table'] = 'field_data_commerce_total';
  $handler->display->display_options['fields']['commerce_total']['field'] = 'commerce_total';
  $handler->display->display_options['fields']['commerce_total']['group_type'] = 'sum';
  $handler->display->display_options['fields']['commerce_total']['label'] = 'Delivery';
  $handler->display->display_options['fields']['commerce_total']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['commerce_total']['alter']['text'] = '[quantity] [line_item_title_1] [commerce_unit_price]/[commerce_total] <br>';
  $handler->display->display_options['fields']['commerce_total']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_total']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_total']['settings'] = array(
    'calculation' => FALSE,
  );
  $handler->display->display_options['fields']['commerce_total']['group_column'] = 'entity_id';
  /* Field: Commerce Line Item: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  /* Field: Field: Week Date */
  $handler->display->display_options['fields']['field_week_date']['id'] = 'field_week_date';
  $handler->display->display_options['fields']['field_week_date']['table'] = 'field_data_field_week_date';
  $handler->display->display_options['fields']['field_week_date']['field'] = 'field_week_date';
  $handler->display->display_options['fields']['field_week_date']['relationship'] = 'order_id';
  $handler->display->display_options['fields']['field_week_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Products';
  $handler->display->display_options['fields']['view']['view'] = 'ffvcoop_line_items_for_delivery';
  $handler->display->display_options['fields']['view']['arguments'] = '[!order_id] ';
  /* Field: Commerce Order: comments */
  $handler->display->display_options['fields']['field_comments']['id'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments']['field'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['relationship'] = 'order_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Line Item: Line item is of a product line item type */
  $handler->display->display_options['filters']['product_line_item_type']['id'] = 'product_line_item_type';
  $handler->display->display_options['filters']['product_line_item_type']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['product_line_item_type']['field'] = 'product_line_item_type';
  $handler->display->display_options['filters']['product_line_item_type']['value'] = '1';
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'order_id';
  $handler->display->display_options['filters']['status']['value'] = array(
    'pending' => 'pending',
    'cardonfile_charged' => 'cardonfile_charged',
    'processing' => 'processing',
    'completed' => 'completed',
  );
  /* Filter criterion: Field: Week Date (field_week_date) */
  $handler->display->display_options['filters']['field_week_date_value']['id'] = 'field_week_date_value';
  $handler->display->display_options['filters']['field_week_date_value']['table'] = 'field_data_field_week_date';
  $handler->display->display_options['filters']['field_week_date_value']['field'] = 'field_week_date_value';
  $handler->display->display_options['filters']['field_week_date_value']['relationship'] = 'order_id';
  $handler->display->display_options['filters']['field_week_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_week_date_value']['expose']['operator_id'] = 'field_week_date_value_op';
  $handler->display->display_options['filters']['field_week_date_value']['expose']['label'] = 'Week Date (field_week_date)';
  $handler->display->display_options['filters']['field_week_date_value']['expose']['operator'] = 'field_week_date_value_op';
  $handler->display->display_options['filters']['field_week_date_value']['expose']['identifier'] = 'field_week_date_value';
  $handler->display->display_options['filters']['field_week_date_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_week_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_week_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Commerce Order: Shipping information (commerce_customer_shipping) */
  $handler->display->display_options['filters']['commerce_customer_shipping_profile_id']['id'] = 'commerce_customer_shipping_profile_id';
  $handler->display->display_options['filters']['commerce_customer_shipping_profile_id']['table'] = 'field_data_commerce_customer_shipping';
  $handler->display->display_options['filters']['commerce_customer_shipping_profile_id']['field'] = 'commerce_customer_shipping_profile_id';
  $handler->display->display_options['filters']['commerce_customer_shipping_profile_id']['relationship'] = 'order_id';
  $handler->display->display_options['filters']['commerce_customer_shipping_profile_id']['operator'] = 'not empty';
  /* Filter criterion: Commerce Line Item: Label */
  $handler->display->display_options['filters']['line_item_label']['id'] = 'line_item_label';
  $handler->display->display_options['filters']['line_item_label']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['line_item_label']['field'] = 'line_item_label';
  $handler->display->display_options['filters']['line_item_label']['operator'] = 'contains';
  $handler->display->display_options['filters']['line_item_label']['value'] = 'Del';
  $handler->display->display_options['path'] = 'manage/delivery/download';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $export['ffvcoop_line_items'] = $view;

  $view = new view();
  $view->name = 'ffvcoop_line_items_for_delivery';
  $view->description = 'Display a set of line items in a table.';
  $view->tag = 'commerce';
  $view->base_table = 'commerce_line_item';
  $view->human_name = 'FFVCOOP Line items for delivery';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'line_item_id' => 'line_item_id',
    'type' => 'type',
    'line_item_title' => 'line_item_title',
    'line_item_label' => 'line_item_title',
    'commerce_unit_price' => 'commerce_unit_price',
    'quantity' => 'quantity',
    'commerce_total' => 'commerce_total',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'line_item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'line_item_title' => array(
      'align' => '',
      'separator' => ' ',
    ),
    'line_item_label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'commerce_unit_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'quantity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'commerce_total' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty line item text.';
  $handler->display->display_options['empty']['area']['content'] = 'No line items found.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Commerce Line Item: Line item ID */
  $handler->display->display_options['fields']['line_item_id']['id'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_id']['field'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['label'] = '';
  $handler->display->display_options['fields']['line_item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['line_item_id']['element_label_colon'] = FALSE;
  /* Field: Commerce Line Item: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: Commerce Line Item: Quantity */
  $handler->display->display_options['fields']['quantity']['id'] = 'quantity';
  $handler->display->display_options['fields']['quantity']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['quantity']['field'] = 'quantity';
  $handler->display->display_options['fields']['quantity']['label'] = '';
  $handler->display->display_options['fields']['quantity']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['quantity']['alter']['text'] = '<span style="padding:0px 5px 0px 0px;">QTY: [quantity] <span>';
  $handler->display->display_options['fields']['quantity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['quantity']['precision'] = '0';
  /* Field: Commerce Line Item: Title */
  $handler->display->display_options['fields']['line_item_title']['id'] = 'line_item_title';
  $handler->display->display_options['fields']['line_item_title']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_title']['field'] = 'line_item_title';
  $handler->display->display_options['fields']['line_item_title']['label'] = '';
  $handler->display->display_options['fields']['line_item_title']['element_label_colon'] = FALSE;
  /* Field: Commerce Line Item: Label */
  $handler->display->display_options['fields']['line_item_label']['id'] = 'line_item_label';
  $handler->display->display_options['fields']['line_item_label']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_label']['field'] = 'line_item_label';
  $handler->display->display_options['fields']['line_item_label']['label'] = '';
  $handler->display->display_options['fields']['line_item_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['line_item_label']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['line_item_label']['alter']['text'] = '([line_item_label])';
  $handler->display->display_options['fields']['line_item_label']['element_label_colon'] = FALSE;
  /* Field: Commerce Line item: Unit price */
  $handler->display->display_options['fields']['commerce_unit_price']['id'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['table'] = 'field_data_commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['field'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_unit_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_unit_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_unit_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_unit_price']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Commerce Line item: Total */
  $handler->display->display_options['fields']['commerce_total']['id'] = 'commerce_total';
  $handler->display->display_options['fields']['commerce_total']['table'] = 'field_data_commerce_total';
  $handler->display->display_options['fields']['commerce_total']['field'] = 'commerce_total';
  $handler->display->display_options['fields']['commerce_total']['label'] = '';
  $handler->display->display_options['fields']['commerce_total']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_total']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_total']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Sort criterion: Commerce Line Item: Line item ID */
  $handler->display->display_options['sorts']['line_item_id']['id'] = 'line_item_id';
  $handler->display->display_options['sorts']['line_item_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['sorts']['line_item_id']['field'] = 'line_item_id';
  /* Contextual filter: Commerce Line Item: Order ID */
  $handler->display->display_options['arguments']['order_id']['id'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['arguments']['order_id']['field'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['order_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['order_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['order_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['order_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Commerce Line Item: Line item is of a product line item type */
  $handler->display->display_options['filters']['product_line_item_type']['id'] = 'product_line_item_type';
  $handler->display->display_options['filters']['product_line_item_type']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['product_line_item_type']['field'] = 'product_line_item_type';
  $handler->display->display_options['filters']['product_line_item_type']['value'] = '1';
  /* Filter criterion: Commerce Line Item: Label */
  $handler->display->display_options['filters']['line_item_label']['id'] = 'line_item_label';
  $handler->display->display_options['filters']['line_item_label']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['line_item_label']['field'] = 'line_item_label';
  $handler->display->display_options['filters']['line_item_label']['operator'] = 'not';
  $handler->display->display_options['filters']['line_item_label']['value'] = 'Del';
  $export['ffvcoop_line_items_for_delivery'] = $view;

  $view = new view();
  $view->name = 'ffvcoop_orders';
  $view->description = 'Display a list of orders for the store admin.';
  $view->tag = 'commerce';
  $view->base_table = 'commerce_order';
  $view->human_name = 'FFVCOOP Orders';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Orders';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view any commerce_order entity';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'order_number' => 'order_number',
    'changed' => 'changed',
    'commerce_customer_address' => 'commerce_customer_address',
    'name' => 'name',
    'commerce_order_total' => 'commerce_order_total',
    'status' => 'status',
    'operations' => 'operations',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'order_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_customer_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_order_total' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* Header: Global: View order form */
  $handler->display->display_options['header']['view_order_form']['id'] = 'view_order_form';
  $handler->display->display_options['header']['view_order_form']['table'] = 'views';
  $handler->display->display_options['header']['view_order_form']['field'] = 'view_order_form';
  /* No results behavior: Commerce Order: Empty text */
  $handler->display->display_options['empty']['empty_text']['id'] = 'empty_text';
  $handler->display->display_options['empty']['empty_text']['table'] = 'commerce_order';
  $handler->display->display_options['empty']['empty_text']['field'] = 'empty_text';
  $handler->display->display_options['empty']['empty_text']['add_path'] = 'admin/commerce/orders/add';
  /* Relationship: Commerce Order: Owner */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'commerce_order';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  /* Field: Commerce Order: Order number */
  $handler->display->display_options['fields']['order_number']['id'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_number']['field'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['link_to_order'] = 'admin';
  /* Field: Commerce Order: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  /* Field: Commerce Customer profile: Address */
  $handler->display->display_options['fields']['commerce_customer_address']['id'] = 'commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address']['table'] = 'field_data_commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address']['field'] = 'commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['commerce_customer_address']['label'] = 'Name';
  $handler->display->display_options['fields']['commerce_customer_address']['empty'] = '-';
  $handler->display->display_options['fields']['commerce_customer_address']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['commerce_customer_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['commerce_customer_address']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'name-oneline' => 'name-oneline',
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'User';
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total']['id'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['label'] = 'Total';
  $handler->display->display_options['fields']['commerce_order_total']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Commerce Order: Order status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  /* Field: Commerce Order: Operations links */
  $handler->display->display_options['fields']['operations']['id'] = 'operations';
  $handler->display->display_options['fields']['operations']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['operations']['field'] = 'operations';
  $handler->display->display_options['fields']['operations']['label'] = 'Operations';
  /* Field: Field: Week Date */
  $handler->display->display_options['fields']['field_week_date']['id'] = 'field_week_date';
  $handler->display->display_options['fields']['field_week_date']['table'] = 'field_data_field_week_date';
  $handler->display->display_options['fields']['field_week_date']['field'] = 'field_week_date';
  $handler->display->display_options['fields']['field_week_date']['label'] = 'Pickup Date';
  $handler->display->display_options['fields']['field_week_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_week_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Filter criterion: Commerce Order: Order state */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['operator'] = 'not in';
  $handler->display->display_options['filters']['state']['value'] = array(
    'cart' => 'cart',
    'checkout' => 'checkout',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Order state';
  $handler->display->display_options['filters']['state']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';

  /* Display: Admin page */
  $handler = $view->new_display('page', 'Admin page', 'admin_page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Order: Order number */
  $handler->display->display_options['fields']['order_number']['id'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_number']['field'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['link_to_order'] = 'admin';
  /* Field: Commerce Order: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  /* Field: Commerce Customer profile: Address */
  $handler->display->display_options['fields']['commerce_customer_address']['id'] = 'commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address']['table'] = 'field_data_commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address']['field'] = 'commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['commerce_customer_address']['label'] = 'Name';
  $handler->display->display_options['fields']['commerce_customer_address']['empty'] = '-';
  $handler->display->display_options['fields']['commerce_customer_address']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['commerce_customer_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['commerce_customer_address']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'name-oneline' => 'name-oneline',
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'User';
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total']['id'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['label'] = 'Total';
  $handler->display->display_options['fields']['commerce_order_total']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Commerce Order: Order status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  /* Field: Commerce Order: Operations links */
  $handler->display->display_options['fields']['operations']['id'] = 'operations';
  $handler->display->display_options['fields']['operations']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['operations']['field'] = 'operations';
  $handler->display->display_options['fields']['operations']['label'] = 'Operations';
  $handler->display->display_options['path'] = 'manage/commerce/orders';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Orders';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Orders';
  $handler->display->display_options['tab_options']['description'] = 'Manage orders in the store.';
  $handler->display->display_options['tab_options']['weight'] = '';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: Shopping carts */
  $handler = $view->new_display('page', 'Shopping carts', 'shopping_carts');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Shopping carts';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'text';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'There are currently no shopping cart orders.';
  $handler->display->display_options['empty']['text']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order state */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'cart' => 'cart',
    'checkout' => 'checkout',
  );
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Order state';
  $handler->display->display_options['filters']['state']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['path'] = 'manage/commerce/orders/carts';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Shopping carts';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Orders page revised */
  $handler = $view->new_display('page', 'Orders page revised', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Orders (revised)';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'commerce_customer_address_name_line' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'mail' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'status' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_week_date_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 1;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Select a date and other filter and click on Apply to see results. You must select a Date.';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'operations' => 'operations',
    'order_number' => 'order_number',
    'status' => 'status',
    'changed' => 'changed',
    'created' => 'created',
    'uid' => 'uid',
    'field_customer_phone' => 'field_customer_phone',
    'mail' => 'mail',
    'field_customer_first_name' => 'field_customer_first_name',
    'field_customer_last_name' => 'field_customer_last_name',
    'commerce_customer_address' => 'commerce_customer_address',
    'commerce_line_items' => 'commerce_line_items',
    'commerce_order_total' => 'commerce_order_total',
    'field_week_date' => 'field_week_date',
  );
  $handler->display->display_options['style_options']['default'] = 'field_customer_last_name';
  $handler->display->display_options['style_options']['info'] = array(
    'operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'order_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer_first_name' => array(
      'sortable' => 0,
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
    'commerce_customer_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_line_items' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_order_total' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_week_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Commerce Order: Owner */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'commerce_order';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Commerce Order: Referenced customer profile */
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['id'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['relationships']['commerce_customer_billing_profile_id']['field'] = 'commerce_customer_billing_profile_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_user_reference_node']['id'] = 'reverse_field_user_reference_node';
  $handler->display->display_options['relationships']['reverse_field_user_reference_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_user_reference_node']['field'] = 'reverse_field_user_reference_node';
  $handler->display->display_options['relationships']['reverse_field_user_reference_node']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Order: Operations links */
  $handler->display->display_options['fields']['operations']['id'] = 'operations';
  $handler->display->display_options['fields']['operations']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['operations']['field'] = 'operations';
  $handler->display->display_options['fields']['operations']['label'] = 'Operations';
  $handler->display->display_options['fields']['operations']['add_destination'] = 1;
  /* Field: Commerce Order: Order number */
  $handler->display->display_options['fields']['order_number']['id'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_number']['field'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_number']['link_to_order'] = 'admin';
  /* Field: Commerce Order: Order status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  /* Field: Commerce Order: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Commerce Order: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created ';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = ' D m/d/y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Commerce Order: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_customer_phone']['id'] = 'field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['table'] = 'field_data_field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['field'] = 'field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_customer_phone']['exclude'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_customer_first_name']['id'] = 'field_customer_first_name';
  $handler->display->display_options['fields']['field_customer_first_name']['table'] = 'field_data_field_customer_first_name';
  $handler->display->display_options['fields']['field_customer_first_name']['field'] = 'field_customer_first_name';
  $handler->display->display_options['fields']['field_customer_first_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_customer_first_name']['exclude'] = TRUE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_customer_last_name']['id'] = 'field_customer_last_name';
  $handler->display->display_options['fields']['field_customer_last_name']['table'] = 'field_data_field_customer_last_name';
  $handler->display->display_options['fields']['field_customer_last_name']['field'] = 'field_customer_last_name';
  $handler->display->display_options['fields']['field_customer_last_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_customer_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_customer_last_name']['alter']['text'] = '<a href="/user/[uid]/edit" rel="lightframe">[field_customer_first_name] [field_customer_last_name]</a> [[field_customer_phone]]';
  /* Field: Commerce Customer profile: Address */
  $handler->display->display_options['fields']['commerce_customer_address']['id'] = 'commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address']['table'] = 'field_data_commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address']['field'] = 'commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['commerce_customer_address']['label'] = 'Name';
  $handler->display->display_options['fields']['commerce_customer_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_customer_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['commerce_customer_address']['alter']['text'] = '<a href="/user/[uid]/edit" rel="lightframe">[commerce_customer_address-name_line]</a> [[field_customer_phone]]';
  $handler->display->display_options['fields']['commerce_customer_address']['empty'] = '-';
  $handler->display->display_options['fields']['commerce_customer_address']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['commerce_customer_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['commerce_customer_address']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'name-oneline' => 'name-oneline',
    ),
  );
  /* Field: Commerce Order: Line items */
  $handler->display->display_options['fields']['commerce_line_items']['id'] = 'commerce_line_items';
  $handler->display->display_options['fields']['commerce_line_items']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['fields']['commerce_line_items']['field'] = 'commerce_line_items';
  $handler->display->display_options['fields']['commerce_line_items']['label'] = 'Line Items';
  $handler->display->display_options['fields']['commerce_line_items']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_line_items']['settings'] = array(
    'view' => 'ffvcoop_line_items|default',
  );
  $handler->display->display_options['fields']['commerce_line_items']['delta_offset'] = '0';
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total']['id'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['label'] = 'Total';
  $handler->display->display_options['fields']['commerce_order_total']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Field: Week Date */
  $handler->display->display_options['fields']['field_week_date']['id'] = 'field_week_date';
  $handler->display->display_options['fields']['field_week_date']['table'] = 'field_data_field_week_date';
  $handler->display->display_options['fields']['field_week_date']['field'] = 'field_week_date';
  $handler->display->display_options['fields']['field_week_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_week_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Commerce Order: comments */
  $handler->display->display_options['fields']['field_comments']['id'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments']['field'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['type'] = 'text_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_user_reference_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_user_reference_node';
  $handler->display->display_options['fields']['body']['label'] = 'Notes';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<a href="/node/[nid]/edit" rel="lightframe">edit</a> [body]';
  $handler->display->display_options['fields']['body']['empty'] = '<a href="/node/[nid]/edit" rel="lightframe">add</a>';
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order state */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['operator'] = 'not in';
  $handler->display->display_options['filters']['state']['value'] = array(
    'cart' => 'cart',
    'checkout' => 'checkout',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Order state';
  $handler->display->display_options['filters']['state']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['relationship'] = 'uid';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: Last Name (field_customer_last_name) */
  $handler->display->display_options['filters']['field_customer_last_name_value']['id'] = 'field_customer_last_name_value';
  $handler->display->display_options['filters']['field_customer_last_name_value']['table'] = 'field_data_field_customer_last_name';
  $handler->display->display_options['filters']['field_customer_last_name_value']['field'] = 'field_customer_last_name_value';
  $handler->display->display_options['filters']['field_customer_last_name_value']['relationship'] = 'uid';
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
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'canceled' => 'canceled',
    'pending' => 'pending',
    'completed' => 'completed',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Order status';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['status']['expose']['reduce'] = TRUE;
  /* Filter criterion: Field: Week Date (field_week_date) */
  $handler->display->display_options['filters']['field_week_date_value']['id'] = 'field_week_date_value';
  $handler->display->display_options['filters']['field_week_date_value']['table'] = 'field_data_field_week_date';
  $handler->display->display_options['filters']['field_week_date_value']['field'] = 'field_week_date_value';
  $handler->display->display_options['filters']['field_week_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_week_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_week_date_value']['expose']['operator_id'] = 'field_week_date_value_op';
  $handler->display->display_options['filters']['field_week_date_value']['expose']['label'] = 'Pickup Date';
  $handler->display->display_options['filters']['field_week_date_value']['expose']['operator'] = 'field_week_date_value_op';
  $handler->display->display_options['filters']['field_week_date_value']['expose']['identifier'] = 'field_week_date_value';
  $handler->display->display_options['filters']['field_week_date_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_week_date_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_week_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_week_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['path'] = 'manage/commerce/orders/list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Customer Orders';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Orders';
  $handler->display->display_options['tab_options']['description'] = 'Manage orders in the store.';
  $handler->display->display_options['tab_options']['weight'] = '';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'xls';
  $handler->display->display_options['style_options']['filename'] = 'ffvcoop-weekly-orders.xls';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Order: Order number */
  $handler->display->display_options['fields']['order_number']['id'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_number']['field'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['link_to_order'] = 'admin';
  /* Field: Commerce Order: Order status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  /* Field: Commerce Order: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  /* Field: Commerce Order: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Commerce Order: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_customer_phone']['id'] = 'field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['table'] = 'field_data_field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['field'] = 'field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['relationship'] = 'uid';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  /* Field: Commerce Customer profile: Address */
  $handler->display->display_options['fields']['commerce_customer_address']['id'] = 'commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address']['table'] = 'field_data_commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address']['field'] = 'commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['commerce_customer_address']['label'] = 'Name';
  $handler->display->display_options['fields']['commerce_customer_address']['empty'] = '-';
  $handler->display->display_options['fields']['commerce_customer_address']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['commerce_customer_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['commerce_customer_address']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'name-oneline' => 'name-oneline',
    ),
  );
  /* Field: Commerce Order: Line items */
  $handler->display->display_options['fields']['commerce_line_items']['id'] = 'commerce_line_items';
  $handler->display->display_options['fields']['commerce_line_items']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['fields']['commerce_line_items']['field'] = 'commerce_line_items';
  $handler->display->display_options['fields']['commerce_line_items']['settings'] = array(
    'view' => 'ffvcoop_line_items|default',
  );
  $handler->display->display_options['fields']['commerce_line_items']['delta_offset'] = '0';
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total']['id'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['label'] = 'Total';
  $handler->display->display_options['fields']['commerce_order_total']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Field: Week Date */
  $handler->display->display_options['fields']['field_week_date']['id'] = 'field_week_date';
  $handler->display->display_options['fields']['field_week_date']['table'] = 'field_data_field_week_date';
  $handler->display->display_options['fields']['field_week_date']['field'] = 'field_week_date';
  $handler->display->display_options['fields']['field_week_date']['label'] = 'Pickup Date';
  $handler->display->display_options['fields']['field_week_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order state */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['operator'] = 'not in';
  $handler->display->display_options['filters']['state']['value'] = array(
    'cart' => 'cart',
    'checkout' => 'checkout',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Order state';
  $handler->display->display_options['filters']['state']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  /* Filter criterion: Commerce Customer profile: Address - Full name */
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['id'] = 'commerce_customer_address_name_line';
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['table'] = 'field_data_commerce_customer_address';
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['field'] = 'commerce_customer_address_name_line';
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['operator'] = 'contains';
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['exposed'] = TRUE;
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['expose']['operator_id'] = 'commerce_customer_address_name_line_op';
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['expose']['label'] = 'Full name';
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['expose']['operator'] = 'commerce_customer_address_name_line_op';
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['expose']['identifier'] = 'commerce_customer_address_name_line';
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['relationship'] = 'uid';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'canceled' => 'canceled',
    'pending' => 'pending',
    'cardonfile_charged' => 'cardonfile_charged',
    'order_picked_up' => 'order_picked_up',
    'completed' => 'completed',
  );
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Order status';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Field: Week Date (field_week_date) */
  $handler->display->display_options['filters']['field_week_date_value']['id'] = 'field_week_date_value';
  $handler->display->display_options['filters']['field_week_date_value']['table'] = 'field_data_field_week_date';
  $handler->display->display_options['filters']['field_week_date_value']['field'] = 'field_week_date_value';
  $handler->display->display_options['filters']['field_week_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_week_date_value']['expose']['operator_id'] = 'field_week_date_value_op';
  $handler->display->display_options['filters']['field_week_date_value']['expose']['label'] = 'Week Date';
  $handler->display->display_options['filters']['field_week_date_value']['expose']['operator'] = 'field_week_date_value_op';
  $handler->display->display_options['filters']['field_week_date_value']['expose']['identifier'] = 'field_week_date_value';
  $handler->display->display_options['filters']['field_week_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_week_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_week_date_value']['year_range'] = '-2:+1';
  $handler->display->display_options['path'] = 'manage/reports/weekly-orders';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'admin_page' => 0,
    'shopping_carts' => 0,
    'page_1' => 0,
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Order: Order number */
  $handler->display->display_options['fields']['order_number']['id'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_number']['field'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['link_to_order'] = 'admin';
  /* Field: Commerce Order: Order status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  /* Field: Commerce Order: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'm/d/Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Commerce Order: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  /* Field: Commerce Order: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_customer_phone']['id'] = 'field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['table'] = 'field_data_field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['field'] = 'field_customer_phone';
  $handler->display->display_options['fields']['field_customer_phone']['relationship'] = 'uid';
  /* Field: Commerce Order: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['render_as_link'] = 0;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_customer_first_name']['id'] = 'field_customer_first_name';
  $handler->display->display_options['fields']['field_customer_first_name']['table'] = 'field_data_field_customer_first_name';
  $handler->display->display_options['fields']['field_customer_first_name']['field'] = 'field_customer_first_name';
  $handler->display->display_options['fields']['field_customer_first_name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_customer_first_name']['exclude'] = TRUE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_customer_last_name_1']['id'] = 'field_customer_last_name_1';
  $handler->display->display_options['fields']['field_customer_last_name_1']['table'] = 'field_data_field_customer_last_name';
  $handler->display->display_options['fields']['field_customer_last_name_1']['field'] = 'field_customer_last_name';
  $handler->display->display_options['fields']['field_customer_last_name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_customer_last_name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_customer_last_name_1']['alter']['text'] = '[field_customer_first_name]  [field_customer_last_name_1]';
  /* Field: Commerce Customer profile: Address */
  $handler->display->display_options['fields']['commerce_customer_address']['id'] = 'commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address']['table'] = 'field_data_commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address']['field'] = 'commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address']['relationship'] = 'commerce_customer_billing_profile_id';
  $handler->display->display_options['fields']['commerce_customer_address']['label'] = 'Name';
  $handler->display->display_options['fields']['commerce_customer_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_customer_address']['empty'] = '-';
  $handler->display->display_options['fields']['commerce_customer_address']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['commerce_customer_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['commerce_customer_address']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'name-oneline' => 'name-oneline',
    ),
  );
  /* Field: Commerce Order: Line items */
  $handler->display->display_options['fields']['commerce_line_items']['id'] = 'commerce_line_items';
  $handler->display->display_options['fields']['commerce_line_items']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['fields']['commerce_line_items']['field'] = 'commerce_line_items';
  $handler->display->display_options['fields']['commerce_line_items']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['commerce_line_items']['alter']['preserve_tags'] = '<br>';
  $handler->display->display_options['fields']['commerce_line_items']['settings'] = array(
    'view' => 'ffvcoop_line_items|default',
  );
  $handler->display->display_options['fields']['commerce_line_items']['delta_offset'] = '0';
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total']['id'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['label'] = 'Total';
  $handler->display->display_options['fields']['commerce_order_total']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Field: Week Date */
  $handler->display->display_options['fields']['field_week_date']['id'] = 'field_week_date';
  $handler->display->display_options['fields']['field_week_date']['table'] = 'field_data_field_week_date';
  $handler->display->display_options['fields']['field_week_date']['field'] = 'field_week_date';
  $handler->display->display_options['fields']['field_week_date']['label'] = 'Pickup Date';
  $handler->display->display_options['fields']['field_week_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Commerce Order: comments */
  $handler->display->display_options['fields']['field_comments']['id'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments']['field'] = 'field_comments';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Last Name (field_customer_last_name) */
  $handler->display->display_options['sorts']['field_customer_last_name_value']['id'] = 'field_customer_last_name_value';
  $handler->display->display_options['sorts']['field_customer_last_name_value']['table'] = 'field_data_field_customer_last_name';
  $handler->display->display_options['sorts']['field_customer_last_name_value']['field'] = 'field_customer_last_name_value';
  $handler->display->display_options['sorts']['field_customer_last_name_value']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order state */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['operator'] = 'not in';
  $handler->display->display_options['filters']['state']['value'] = array(
    'cart' => 'cart',
    'checkout' => 'checkout',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Order state';
  $handler->display->display_options['filters']['state']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  /* Filter criterion: Field: Week Date (field_week_date) */
  $handler->display->display_options['filters']['field_week_date_value']['id'] = 'field_week_date_value';
  $handler->display->display_options['filters']['field_week_date_value']['table'] = 'field_data_field_week_date';
  $handler->display->display_options['filters']['field_week_date_value']['field'] = 'field_week_date_value';
  $handler->display->display_options['filters']['field_week_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_week_date_value']['expose']['operator_id'] = 'field_week_date_value_op';
  $handler->display->display_options['filters']['field_week_date_value']['expose']['label'] = 'Pickup Date';
  $handler->display->display_options['filters']['field_week_date_value']['expose']['operator'] = 'field_week_date_value_op';
  $handler->display->display_options['filters']['field_week_date_value']['expose']['identifier'] = 'field_week_date_value';
  $handler->display->display_options['filters']['field_week_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_week_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_week_date_value']['year_range'] = '-2:+1';
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'recurring_pending' => 'recurring_pending',
    'pending' => 'pending',
    'completed' => 'completed',
  );
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Order status';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'manage/reports/weekly-orders-xls';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'admin_page' => 0,
    'shopping_carts' => 0,
  );
  $export['ffvcoop_orders'] = $view;

  $view = new view();
  $view->name = 'manage_users';
  $view->description = '';
  $view->tag = 'ffvcoop';
  $view->base_table = 'users';
  $view->human_name = 'FFVCOOP Manage Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Users';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'edit_node' => 'edit_node',
    'name' => 'name',
    'field_customer_first_name' => 'field_customer_first_name',
    'field_customer_last_name' => 'field_customer_last_name',
    'created' => 'created',
    'field_order_count' => 'field_order_count',
    'field_last_order_date' => 'field_last_order_date',
    'field_annual_fee' => 'field_annual_fee',
  );
  $handler->display->display_options['style_options']['default'] = 'field_customer_last_name';
  $handler->display->display_options['style_options']['info'] = array(
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer_first_name' => array(
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
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_order_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_annual_fee' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1>Manage Users</h1>
Use this screen to manage the list of customers who have created a login and password in the system. You can edit a User\'s fee paid date and cancel their account by clicking the edit link next to their information.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Login ID';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_customer_first_name']['id'] = 'field_customer_first_name';
  $handler->display->display_options['fields']['field_customer_first_name']['table'] = 'field_data_field_customer_first_name';
  $handler->display->display_options['fields']['field_customer_first_name']['field'] = 'field_customer_first_name';
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_customer_last_name']['id'] = 'field_customer_last_name';
  $handler->display->display_options['fields']['field_customer_last_name']['table'] = 'field_data_field_customer_last_name';
  $handler->display->display_options['fields']['field_customer_last_name']['field'] = 'field_customer_last_name';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Order Count */
  $handler->display->display_options['fields']['field_order_count']['id'] = 'field_order_count';
  $handler->display->display_options['fields']['field_order_count']['table'] = 'field_data_field_order_count';
  $handler->display->display_options['fields']['field_order_count']['field'] = 'field_order_count';
  $handler->display->display_options['fields']['field_order_count']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Last Order Date */
  $handler->display->display_options['fields']['field_last_order_date']['id'] = 'field_last_order_date';
  $handler->display->display_options['fields']['field_last_order_date']['table'] = 'field_data_field_last_order_date';
  $handler->display->display_options['fields']['field_last_order_date']['field'] = 'field_last_order_date';
  $handler->display->display_options['fields']['field_last_order_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Annual Fee */
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
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Login ID';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Field: Last Name (field_customer_last_name) */
  $handler->display->display_options['filters']['field_customer_last_name_value']['id'] = 'field_customer_last_name_value';
  $handler->display->display_options['filters']['field_customer_last_name_value']['table'] = 'field_data_field_customer_last_name';
  $handler->display->display_options['filters']['field_customer_last_name_value']['field'] = 'field_customer_last_name_value';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
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
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Login ID';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'manage/manage-users';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage Users (new)';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['manage_users'] = $view;

  $view = new view();
  $view->name = 'product_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'FVCOOP Product list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Product list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Commerce Product: Product ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['product_id']['link_to_product'] = 0;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Product: Product Image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: SKU */
  $handler->display->display_options['fields']['sku']['id'] = 'sku';
  $handler->display->display_options['fields']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['sku']['field'] = 'sku';
  $handler->display->display_options['fields']['sku']['link_to_product'] = 0;
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 0;
  /* Field: Commerce Product: Description */
  $handler->display->display_options['fields']['field_basket_body']['id'] = 'field_basket_body';
  $handler->display->display_options['fields']['field_basket_body']['table'] = 'field_data_field_basket_body';
  $handler->display->display_options['fields']['field_basket_body']['field'] = 'field_basket_body';
  $handler->display->display_options['fields']['field_basket_body']['label'] = '';
  $handler->display->display_options['fields']['field_basket_body']['element_label_colon'] = FALSE;
  /* Filter criterion: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Please let us know how many of each type of basket you would like to order. We are a pre-order business and orders need to be placed by Tuesday 7:00pm.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = 'Let us know if yo would like to be a drop off location, and you will receive a free basket. All you need is to have 5 or more baskets plus delivery. Great way to meet neighbors and new friends.';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['path'] = 'product-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Product list';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['product_list'] = $view;

  return $export;
}
