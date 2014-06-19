<?php
/**
 * @file
 * Field group configuration for Rooms Package module.
 */

/**
 * Implements hook_field_group_info().
 */
function rooms_package_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rooms_package_specific|commerce_product|rooms_package|form';
  $field_group->group_name = 'group_rooms_package_specific';
  $field_group->entity_type = 'commerce_product';
  $field_group->bundle = 'rooms_package';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_rooms_package';
  $field_group->data = array(
    'label' => 'Choose specific units',
    'weight' => '39',
    'children' => array(
      0 => 'rooms_package_units',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-rooms-package-specific field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_rooms_package_specific|commerce_product|rooms_package|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rooms_package|commerce_product|rooms_package|form';
  $field_group->group_name = 'group_rooms_package';
  $field_group->entity_type = 'commerce_product';
  $field_group->bundle = 'rooms_package';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Package units',
    'weight' => '42',
    'children' => array(
      0 => 'rooms_package_all_units',
      1 => 'rooms_package_unit_types',
      2 => 'group_rooms_package_specific',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => 'Select the unit available for this package. You can select individual units, all the units of certain type or all the units in the system.',
        'classes' => 'group-rooms-package field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_rooms_package|commerce_product|rooms_package|form'] = $field_group;

  return $export;
}
