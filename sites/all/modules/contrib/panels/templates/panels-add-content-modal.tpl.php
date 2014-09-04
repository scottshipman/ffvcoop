<?php
/**
 * @file
 * Template to control the add content modal.
 */
?>
<div class="panels-add-content-modal">
  <div class="panels-section-column panels-section-column-categories">
    <div class="inside">
      <div class="panels-categories-box">
      <?php foreach ($categories_array as $category): ?>
        <?php print $category; ?>
      <?php endforeach; ?>
      </div>
      <?php print $root_content; ?>
    </div>
  </div>

  <?php print $messages; ?>

  <?php if (!empty($header)): ?>
    <div class="panels-categories-description">
      <?php print $header; ?>
    </div>
  <?php endif; ?>

  <div class="panels-section-columns">
    <?php foreach ($columns as $column_id => $column): ?>
      <div class="panels-section-column panels-section-column-<?php print $column_id; ?> ">
        <div class="inside">
          <?php print $column; ?>
        </div>
      </div>
    <?php endforeach; ?>
  </div>
  <?php print $category; ?>
</div>
