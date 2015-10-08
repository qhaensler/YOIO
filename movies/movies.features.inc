<?php
/**
 * @file
 * movies.features.inc
 */

/**
 * Implements hook_node_info().
 */
function movies_node_info() {
  $items = array(
    'movies' => array(
      'name' => t('Films'),
      'base' => 'node_content',
      'description' => t('Les films proposé par la médiathèque !'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
