<?php
/**
 * @file
 * cseu_features_structure.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function cseu_features_structure_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-cseu-internals-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-cseu-internals-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
      'authenticated user' => 2,
      'Site Administrator' => 4,
    ),
    'themes' => array(
      'antonelli' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'antonelli',
        'weight' => -8,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gratis' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gratis',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Members',
    'visibility' => 0,
  );

  $export['menu-menu-restricted-lists'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-restricted-lists',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
      'Site Administrator' => 4,
    ),
    'themes' => array(
      'antonelli' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'antonelli',
        'weight' => -7,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gratis' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gratis',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}