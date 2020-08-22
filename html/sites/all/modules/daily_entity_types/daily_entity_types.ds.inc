<?php

/**
 * @file
 * daily_entity_types.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function daily_entity_types_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'daily_match|daily_match|default';
  $ds_fieldsetting->entity_type = 'daily_match';
  $ds_fieldsetting->bundle = 'daily_match';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['daily_match|daily_match|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function daily_entity_types_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'daily_match|daily_match|default';
  $ds_layout->entity_type = 'daily_match';
  $ds_layout->bundle = 'daily_match';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_point_to_earn',
        2 => 'field_daily_teams',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_point_to_earn' => 'ds_content',
      'field_daily_teams' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['daily_match|daily_match|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'daily_team|daily_team|teaser';
  $ds_layout->entity_type = 'daily_team';
  $ds_layout->bundle = 'daily_team';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_daily_wrestlers',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_daily_wrestlers' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['daily_team|daily_team|teaser'] = $ds_layout;

  return $export;
}
