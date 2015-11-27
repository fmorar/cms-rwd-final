<?php
/**
 * @file
 * Template for a 2 column and 5 region panel layout.
 *
 * This template provides a page product.
 */
?>
<div class="panel-display panel-page-product">
  <?php if ($content['wide']): ?>
    <div class="panel-container panel-wide">
      <?php print $content['wide']; ?>
    </div>
  <?php endif ?>
  <div class="center-wrapper">
    <div class="panel-container panel-left-column">
      <?php print $content['left']; ?>
    </div>
    <div class="panel-container panel-right-column">
      <?php print $content['right']; ?>
    </div>
  </div>
  <?php if ($content['wide_second']): ?>
    <div class="panel-container panel-wide">
      <?php print $content['wide_second']; ?>
    </div>
  <?php endif ?>
  <?php if ($content['wide_third']): ?>
    <div class="panel-container panel-wide">
      <?php print $content['wide_third']; ?>
    </div>
  <?php endif ?>
  <?php if ($content['wide_fourth']): ?>
    <div class="panel-container panel-wide">
      <div class="content-width">
      <?php print $content['wide_fourth']; ?>
      </div>
    </div>
  <?php endif ?>
</div>
