<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>

<div id="page">
  <header class="header" id="header" role="banner">



    <?php if ($site_name || $site_slogan): ?>
      <div class="header__name-and-slogan" id="name-and-slogan">
          <?php if ($site_name): ?>
          <h1 class="header__site-name" id="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print $site_name . t('Home'); ?>" class="header__site-link" rel="home">
              <?php if ($logo): ?><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /> <?php endif; ?>
                <span><?php //print $site_name; ?></span></a>
          </h1>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <div class="header__site-slogan" id="site-slogan"><span class="opacity"><?php print $site_slogan; ?></span></div>
        <?php endif; ?>
      </div>
    <?php endif; ?>

    <?php if ($secondary_menu): ?>
      <nav class="header__secondary-menu" id="secondary-menu" role="navigation">
        <?php print theme('links__system_secondary_menu', array(
          'links' => $secondary_menu,
          'attributes' => array(
            'class' => array('links', 'inline', 'clearfix'),
          ),
          'heading' => array(
            'text' => $secondary_menu_heading,
            'level' => 'h2',
            'class' => array('element-invisible'),
          ),
        )); ?>
      </nav>
    <?php endif; ?>
          <div id="cta">
            <div id="email-header" class="order-now"><a href="product-list">Order Now</a></div>
              <span id="phone-nav" class="opacity">Phone (727) 488-0858</span>
          </div>

        <?php print render($page['header']); ?>

      <div id="navigation">

          <?php if ($main_menu): ?>
              <nav id="main-menu" role="navigation" tabindex="-1">
                  <?php
                  // This code snippet is hard to modify. We recommend turning off the
                  // "Main menu" on your sub-theme's settings form, deleting this PHP
                  // code block, and, instead, using the "Menu block" module.
                  // @see https://drupal.org/project/menu_block
                  print theme('links__system_main_menu', array(
                      'links' => $main_menu,
                      'attributes' => array(
                          'class' => array('links', 'inline', 'clearfix'),
                      ),
                      'heading' => array(
                          'text' => t('Main menu'),
                          'level' => 'h2',
                          'class' => array('element-invisible'),
                      ),
                  )); ?>
                 <!-- <a href="http://www.facebook.com/ffvcoop" target="_blank"><img alt="Follow Us On Facebook" src="/sites/default/files/socialnetworking_facebook_icon_116x24.gif" title="Follow Us On Facebook" /></a> -->
              </nav>
          <?php endif; ?>
      </div>
  </header>

  <div id="main">
  <div id="highlighted">
  <?php print render($page['highlighted']); ?>
  </div>
    <div id="content" class="column" role="main">
    
      <?php print $breadcrumb; ?>
      <a id="main-content"></a>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div>

    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">
        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>
      </aside>
    <?php endif; ?>

  </div>

  <?php print render($page['footer']); ?>

</div>

<?php print render($page['bottom']); ?>


