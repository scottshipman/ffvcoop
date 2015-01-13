<?php
/**
 * @file
 * ffvcoop_commerce_init.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ffvcoop_commerce_init_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'products_importer';
  $feeds_importer->config = array(
    'name' => 'Products Importer',
    'description' => 'import products from xls file',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsCommerceProductMultiProcessor',
      'config' => array(
        'product_type' => 'product',
        'author' => 0,
        'tax_rate' => '',
        'mappings' => array(
          0 => array(
            'source' => 'Product ID',
            'target' => 'guid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'image',
            'target' => 'field_product_image',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'SKU',
            'target' => 'sku',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'description',
            'target' => 'field_basket_body',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Status',
            'target' => 'status',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Type',
            'target' => 'product_type',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'price',
            'target' => 'commerce_price:amount',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'product',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['products_importer'] = $feeds_importer;

  return $export;
}
