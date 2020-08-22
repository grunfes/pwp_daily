<?php

/**
 * @file
 * daily_entity_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function daily_entity_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function daily_entity_types_eck_bundle_info() {
  $items = array(
    'daily_match_daily_match' => array(
      'machine_name' => 'daily_match_daily_match',
      'entity_type' => 'daily_match',
      'name' => 'daily_match',
      'label' => 'Daily Match',
      'config' => array(),
    ),
    'daily_pick_daily_pick' => array(
      'machine_name' => 'daily_pick_daily_pick',
      'entity_type' => 'daily_pick',
      'name' => 'daily_pick',
      'label' => 'Daily Pick',
      'config' => array(),
    ),
    'daily_results_daily_results' => array(
      'machine_name' => 'daily_results_daily_results',
      'entity_type' => 'daily_results',
      'name' => 'daily_results',
      'label' => 'Daily Results',
      'config' => array(),
    ),
    'daily_show_daily_show' => array(
      'machine_name' => 'daily_show_daily_show',
      'entity_type' => 'daily_show',
      'name' => 'daily_show',
      'label' => 'Daily Show',
      'config' => array(
        'managed_properties' => array(
          'title' => 'title',
        ),
      ),
    ),
    'daily_team_daily_team' => array(
      'machine_name' => 'daily_team_daily_team',
      'entity_type' => 'daily_team',
      'name' => 'daily_team',
      'label' => 'Daily Team',
      'config' => array(
        'managed_properties' => array(
          'title' => 0,
        ),
      ),
    ),
    'daily_wrestler_daily_wrestler' => array(
      'machine_name' => 'daily_wrestler_daily_wrestler',
      'entity_type' => 'daily_wrestler',
      'name' => 'daily_wrestler',
      'label' => 'Daily Wrestler',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function daily_entity_types_eck_entity_type_info() {
  $items = array(
    'daily_match' => array(
      'name' => 'daily_match',
      'label' => 'Daily Match',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
    'daily_pick' => array(
      'name' => 'daily_pick',
      'label' => 'Daily Pick',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
    'daily_results' => array(
      'name' => 'daily_results',
      'label' => 'Daily Results',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
    'daily_show' => array(
      'name' => 'daily_show',
      'label' => 'Daily Show',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
    'daily_team' => array(
      'name' => 'daily_team',
      'label' => 'Daily Team',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
    'daily_wrestler' => array(
      'name' => 'daily_wrestler',
      'label' => 'Daily Wrestler',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
  );
  return $items;
}
