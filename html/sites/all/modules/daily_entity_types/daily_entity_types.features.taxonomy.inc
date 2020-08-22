<?php

/**
 * @file
 * daily_entity_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function daily_entity_types_taxonomy_default_vocabularies() {
  return array(
    'show_type' => array(
      'name' => 'Show Type',
      'machine_name' => 'show_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'venue' => array(
      'name' => 'Venue',
      'machine_name' => 'venue',
      'description' => 'Stadium, Arena, etc',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'wrestling_company' => array(
      'name' => 'Wrestling Company',
      'machine_name' => 'wrestling_company',
      'description' => 'Wrestling Company',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -4,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
