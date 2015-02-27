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

    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
    <?php endif; ?>

    <?php if ($site_name || $site_slogan): ?>
      <div class="header__name-and-slogan" id="name-and-slogan">
        <?php if ($site_name): ?>
          <h1 class="header__site-name" id="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print $site_name . t('Home'); ?>" class="header__site-link" rel="home"><span><?php print $site_name; ?></span></a>
          </h1>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <div class="header__site-slogan" id="site-slogan"><?php print $site_slogan; ?></div>
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
      <div style=""float:right;">
    <div id="user-link" style="float:right;"><?php echo $user_link ?></div>
      <div style="clear:both;"></div>
	<div id="email-header"><a href="/product-list">Order Now</a></div>
      </div>
    <?php print render($page['header']); ?>

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

    <div id="navigation">

        <?php if (module_exists('nice_menus')): ?>
            <nav id="main-menu" role="navigation">
                <?php
                print theme('nice_menus_main_menu', array(
                    'direction' => 'down',
                    'depth' => -1,
                )); ?>
            </nav>
        <?php elseif ($main_menu): ?>
            <nav id="main-menu" role="navigation">
                <?php
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
            </nav>
        <?php endif; ?>
        <span id="social" style="position:relative; float:right;">
            <a href="http://www.facebook.com/ffvcoop" target="_blank"><img alt="Follow Us On Facebook" src="/sites/default/files/socialnetworking_facebook_icon_116x24.gif" title="Follow Us On Facebook" /></a>
        </span>

      <?php print render($page['navigation']); ?>

    </div>
      <div class="header__address" id ="header_address">
      2250 SR 580, Suite 2, Clearwater, FL  33763
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


