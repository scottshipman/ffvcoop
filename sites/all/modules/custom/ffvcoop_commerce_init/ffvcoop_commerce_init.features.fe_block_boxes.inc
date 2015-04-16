<?php
/**
 * @file
 * ffvcoop_commerce_init.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ffvcoop_commerce_init_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Authorize.net Verfieid Merchant';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'authorize_verified';
  $fe_block_boxes->body = '<!-- (c) 2005, 2015. Authorize.Net is a registered trademark of CyberSource Corporation --> <div class="AuthorizeNetSeal"> <script type="text/javascript" language="javascript">var ANS_customer_id="fab960d3-e5c4-43e2-9e79-c9b5d76b60eb";</script> <script type="text/javascript" language="javascript" src="//verify.authorize.net/anetseal/seal.js" ></script> <a href="http://www.authorize.net/" id="AuthorizeNetText" target="_blank">Credit Card Processing</a> </div>';

  $export['authorize_verified'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Create a new Account Msg';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'creaqte_acct_msg';
  $fe_block_boxes->body = '<div style="text-align: left;">
<p><span style="font-family: verdana,geneva,sans-serif;"><span style="font-size: 14px;">If you are a new to the site, or are a returning customer, but have not yet Registered a <span style="color: rgb(128, 0, 0);"><strong>new</strong></span>&nbsp;user login and password with us, </span></span><br />
<span style="font-family: verdana,geneva,sans-serif;"><span style="font-size: 14px;">please do so by clicking "<a href="/user/new-user">create new account</a>".&nbsp;</span></span></p>

<p><span style="font-family: verdana,geneva,sans-serif;"><span style="font-size: 14px;">If you know your login and password, this is the page to login using those credentials.</span></span></p>
</div>
';

  $export['creaqte_acct_msg'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'March Hello Good Buy Coupon Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'hgbmar_coupon_block';
  $fe_block_boxes->body = '<div style="padding: 10px 16px 16px; border-radius: 8px; background-color: rgb(194, 224, 255);">
<h3 class="rtecenter"><span style="color: rgb(214, 50, 32);">How do I use the Hello Good Buy Coupon?</span></h3>

<div>If you are a first time customer and you have the coupon from the latest Issue of Hello Good Buy, then please enter the code printed on the coupon&nbsp;during checkout.&nbsp;</div>

<div>
<address><font face="verdana, geneva, sans-serif"><span style="font-size: 12px; line-height: 14.3999996185303px;">* Note: This offer is for $3 off </span></font><span style="font-family: verdana, geneva, sans-serif; font-size: 12px; font-style: italic; line-height: 14.399999618530273px; background-color: rgb(194, 224, 255);">a Large Fruit and Veggie Basket on&nbsp;</span><font face="verdana, geneva, sans-serif"><span style="font-size: 12px; line-height: 14.3999996185303px;">your first order, for new customers only. Please bring the coupon to the store when you pick up your order. Offer expires March 31, 2015.</span></font></address>
</div>
</div>
';

  $export['hgbmar_coupon_block'] = $fe_block_boxes;

  return $export;
}
