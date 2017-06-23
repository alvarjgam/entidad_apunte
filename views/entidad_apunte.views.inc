<?php

/**
 * @file
 * Using custom table in views.
 */

/**
 * Implements hook_views_data().
 * @return array
 */
function entidad_apunte_views_data() {
  $data = array();
  $data['entidad_apunte']['table']['group'] = t('entidad apunte table');
  $data['entidad_apunte']['table']['base'] = array(
    'field' => 'id',  //Primary key
    'title' => 'entidad_apunte custom table',
    'help' => 'entidad_apunte custom database table'
  );
  $data['entidad_apunte']['id'] = array(
    'title' => t('Id'),
    'help' => t('Id field.'),

    // Field information.
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    // Will be used for sorting purpose.
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    // Will be used for filteration.
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    // Will be used to pass the column value as an argument.
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  $data['entidad_apunte']['entity_name'] = array(
    'title' => t('Entity name'),
    'help' => t('Entity name field'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  $data['entidad_apunte']['field_num_equip_apunt'] = array(
    'title' => t('Equipo'),
    'help' => t('Equipo field'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  
  $data['entidad_apunte']['field_fech_apunte'] = array(
    'title' => t('Fecha de apunte'),
    'help' => t('Fecha del apunte field'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  $data['entidad_apunte']['field_ejercicio'] = array(
    'title' => t('Año del apunte'),
    'help' => t('Año del apunte field'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  
  $data['entidad_apunte']['field_num_apunte'] = array(
    'title' => t('Numero apunte'),
    'help' => t('Numero apunte field'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  
    $data['entidad_apunte']['field_fech_intro'] = array(
    'title' => t('Fecha de intro en AICIAWIN'),
    'help' => t('Fecha de intro en AICIAWIN field'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  
    $data['entidad_apunte']['field_num_proyecto'] = array(
    'title' => t('Numero Proyecto'),
    'help' => t('Numero proyecto field'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  
    $data['entidad_apunte']['field_cuenta'] = array(
    'title' => t('Cuenta'),
    'help' => t('Cuenta field'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  
    $data['entidad_apunte']['field_descrip_apunte'] = array(
    'title' => t('Descripción'),
    'help' => t('descripcion field'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  
    $data['entidad_apunte']['field_debe'] = array(
    'title' => t('Debe'),
    'help' => t('Debe field'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  
    $data['entidad_apunte']['field_haber'] = array(
    'title' => t('Haber'),
    'help' => t('haber field'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  
    $data['entidad_apunte']['field_prorrata'] = array(
    'title' => t('Prorrata'),
    'help' => t('Prorrata field'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  
  return $data;
}
