<?php

/**
 * @file
 * daily_entity_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function daily_entity_types_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_matches|daily_show|daily_show|form';
  $field_group->group_name = 'group_matches';
  $field_group->entity_type = 'daily_show';
  $field_group->bundle = 'daily_show';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_multipage';
  $field_group->data = array(
    'label' => 'Matches',
    'weight' => '10',
    'children' => array(
      0 => 'field_daily_matches',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-matches field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_matches|daily_show|daily_show|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multipage|daily_show|daily_show|form';
  $field_group->group_name = 'group_multipage';
  $field_group->entity_type = 'daily_show';
  $field_group->bundle = 'daily_show';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Daily Show Multipage',
    'weight' => '0',
    'children' => array(
      0 => 'group_show_info',
      1 => 'group_matches',
    ),
    'format_type' => 'multipage-group',
    'format_settings' => array(
      'label' => 'Daily Show Multipage',
      'instance_settings' => array(
        'ajaxify' => '1',
        'nonjs_multistep' => '0',
        'scroll_top' => '0',
        'button_label' => 0,
        'button_label_next' => '',
        'button_label_prev' => '',
        'classes' => 'group-multipage field-group-multipage-group',
        'page_header' => '0',
        'page_counter' => '0',
        'move_button' => '0',
        'move_additional' => '0',
      ),
    ),
  );
  $field_groups['group_multipage|daily_show|daily_show|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_info|daily_show|daily_show|form';
  $field_group->group_name = 'group_show_info';
  $field_group->entity_type = 'daily_show';
  $field_group->bundle = 'daily_show';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_multipage';
  $field_group->data = array(
    'label' => 'Show Info',
    'weight' => '9',
    'children' => array(
      0 => 'field_company',
      1 => 'field_daily_game_date',
      2 => 'field_perfect_ppv_bonus',
      3 => 'field_show_type',
      4 => 'field_venue',
      5 => 'title',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-show-info',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_show_info|daily_show|daily_show|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Daily Show Multipage');
  t('Matches');
  t('Show Info');

  return $field_groups;
}
