<?php
/**
 * @file
 * asc_prod.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function asc_prod_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'syslog_facility';
  $strongarm->value = '176';
  $export['syslog_facility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'syslog_format';
  $strongarm->value = '!base_url|!timestamp|!type|!ip|!request_uri|!referer|!uid|!link|!message';
  $export['syslog_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'syslog_identity';
  $strongarm->value = 'druplog';
  $export['syslog_identity'] = $strongarm;

  return $export;
}
