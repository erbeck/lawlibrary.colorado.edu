<?php
/**
 * @file
 * solrmetadataconfigs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function solrmetadataconfigs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_islandora_solr_metadata_configurations_default_fields().
 */
function solrmetadataconfigs_islandora_solr_metadata_configurations_default_fields() {
 return array(
  'AudioMODS' => array(
    'fields' => array(
      'mods_titleInfo_title_ms' => array(
        'solr_field' => 'mods_titleInfo_title_ms',
        'display_label' => 'Title',
        'hyperlink' => 0,
        'weight' => 1,
      ),
      'mods_titleInfo_subTitle_ms' => array(
        'solr_field' => 'mods_titleInfo_subTitle_ms',
        'display_label' => 'Subtitle',
        'hyperlink' => 0,
        'weight' => 2,
      ),
      'mods_name_personal_namePart_ms' => array(
        'solr_field' => 'mods_name_personal_namePart_ms',
        'display_label' => 'Personal Name(s)',
        'hyperlink' => 0,
        'weight' => 3,
      ),
      'mods_name_corporate_namePart_ms' => array(
        'solr_field' => 'mods_name_corporate_namePart_ms',
        'display_label' => 'Corporate Name(s)',
        'hyperlink' => 0,
        'weight' => 4,
      ),
      'mods_typeOfResource_ms' => array(
        'solr_field' => 'mods_typeOfResource_ms',
        'display_label' => 'Resource Type',
        'hyperlink' => 0,
        'weight' => 5,
      ),
      'mods_tableOfContents_ms' => array(
        'solr_field' => 'mods_tableOfContents_ms',
        'display_label' => 'Table of Contents',
        'hyperlink' => 0,
        'weight' => 6,
      ),
      'mods_genre_ms' => array(
        'solr_field' => 'mods_genre_ms',
        'display_label' => 'Genre',
        'hyperlink' => 0,
        'weight' => 7,
      ),
      'mods_originInfo_dateIssued_dt' => array(
        'solr_field' => 'mods_originInfo_dateIssued_dt',
        'display_label' => 'Date Issued',
        'hyperlink' => 0,
        'weight' => 8,
      ),
      'mods_originInfo_publisher_ms' => array(
        'solr_field' => 'mods_originInfo_publisher_ms',
        'display_label' => 'Publisher',
        'hyperlink' => 0,
        'weight' => 9,
      ),
      'mods_originInfo_place_placeTerm_code_ms' => array(
        'solr_field' => 'mods_originInfo_place_placeTerm_code_ms',
        'display_label' => 'Country',
        'hyperlink' => 0,
        'weight' => 10,
      ),
      'mods_originInfo_place_placeTerm_text_ms' => array(
        'solr_field' => 'mods_originInfo_place_placeTerm_text_ms',
        'display_label' => 'Place',
        'hyperlink' => 0,
        'weight' => 11,
      ),
      'mods_language_languageTerm_code_ms' => array(
        'solr_field' => 'mods_language_languageTerm_code_ms',
        'display_label' => 'Language',
        'hyperlink' => 0,
        'weight' => 12,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Description',
        'hyperlink' => 0,
        'weight' => 13,
      ),
      'mods_identifier_ms' => array(
        'solr_field' => 'mods_identifier_ms',
        'display_label' => 'Identifier',
        'hyperlink' => 0,
        'weight' => 14,
      ),
      'mods_physicalDescription_form_ms' => array(
        'solr_field' => 'mods_physicalDescription_form_ms',
        'display_label' => 'Form',
        'hyperlink' => 0,
        'weight' => 15,
      ),
      'mods_physicalDescription_extent_ms' => array(
        'solr_field' => 'mods_physicalDescription_extent_ms',
        'display_label' => 'Extent',
        'hyperlink' => 0,
        'weight' => 16,
      ),
      'mods_note_ms' => array(
        'solr_field' => 'mods_note_ms',
        'display_label' => 'Note',
        'hyperlink' => 0,
        'weight' => 17,
      ),
      'mods_subject_topic_ms' => array(
        'solr_field' => 'mods_subject_topic_ms',
        'display_label' => 'Topical Subject(s)',
        'hyperlink' => 0,
        'weight' => 18,
      ),
      'mods_subject_geographic_ms' => array(
        'solr_field' => 'mods_subject_geographic_ms',
        'display_label' => 'Geographical Subject(s)',
        'hyperlink' => 0,
        'weight' => 19,
      ),
      'mods_subject_temporal_ms' => array(
        'solr_field' => 'mods_subject_temporal_ms',
        'display_label' => 'Temporal Subject(s)',
        'hyperlink' => 0,
        'weight' => 20,
      ),
    ),
    'cmodels' => array(
      'islandora:sp-audioCModel' => array(
        'cmodel' => 'islandora:sp-audioCModel',
      ),
    ),
    'description' => array(
      'description_field' => NULL,
      'description_label' => NULL,
    ),
    'name' => 'Audio MODS',
  ),
  'BasicImageMODS' => array(
    'fields' => array(
      'mods_titleInfo_title_ms' => array(
        'solr_field' => 'mods_titleInfo_title_ms',
        'display_label' => 'Title',
        'hyperlink' => 0,
        'weight' => 1,
      ),
      'mods_titleInfo_subTitle_ms' => array(
        'solr_field' => 'mods_titleInfo_subTitle_ms',
        'display_label' => 'Subtitle',
        'hyperlink' => 0,
        'weight' => 2,
      ),
      'mods_name_personal_namePart_ms' => array(
        'solr_field' => 'mods_name_personal_namePart_ms',
        'display_label' => 'Personal Name(s)',
        'hyperlink' => 0,
        'weight' => 3,
      ),
      'mods_name_corporate_namePart_ms' => array(
        'solr_field' => 'mods_name_corporate_namePart_ms',
        'display_label' => 'Corporate Name(s)',
        'hyperlink' => 0,
        'weight' => 4,
      ),
      'mods_typeOfResource_ms' => array(
        'solr_field' => 'mods_typeOfResource_ms',
        'display_label' => 'Type of Resource',
        'hyperlink' => 0,
        'weight' => 5,
      ),
      'mods_genre_ms' => array(
        'solr_field' => 'mods_genre_ms',
        'display_label' => 'Genre',
        'hyperlink' => 0,
        'weight' => 6,
      ),
      'mods_originInfo_dateIssued_dt' => array(
        'solr_field' => 'mods_originInfo_dateIssued_dt',
        'display_label' => 'Date Issued',
        'hyperlink' => 0,
        'weight' => 7,
      ),
      'mods_originInfo_publisher_ms' => array(
        'solr_field' => 'mods_originInfo_publisher_ms',
        'display_label' => 'Publisher',
        'hyperlink' => 0,
        'weight' => 8,
      ),
      'mods_originInfo_place_placeTerm_code_ms' => array(
        'solr_field' => 'mods_originInfo_place_placeTerm_code_ms',
        'display_label' => 'Country',
        'hyperlink' => 0,
        'weight' => 9,
      ),
      'mods_originInfo_place_placeTerm_text_ms' => array(
        'solr_field' => 'mods_originInfo_place_placeTerm_text_ms',
        'display_label' => 'Place',
        'hyperlink' => 0,
        'weight' => 10,
      ),
      'mods_language_languageTerm_code_ms' => array(
        'solr_field' => 'mods_language_languageTerm_code_ms',
        'display_label' => 'Language',
        'hyperlink' => 0,
        'weight' => 11,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Description',
        'hyperlink' => 0,
        'weight' => 12,
      ),
      'mods_identifier_local_ms' => array(
        'solr_field' => 'mods_identifier_local_ms',
        'display_label' => 'Identifier (local)',
        'hyperlink' => 0,
        'weight' => 13,
      ),
      'mods_physicalDescription_form_ms' => array(
        'solr_field' => 'mods_physicalDescription_form_ms',
        'display_label' => 'Form',
        'hyperlink' => 0,
        'weight' => 14,
      ),
      'mods_physicalDescription_extent_ms' => array(
        'solr_field' => 'mods_physicalDescription_extent_ms',
        'display_label' => 'Extent',
        'hyperlink' => 0,
        'weight' => 15,
      ),
      'mods_note_ms' => array(
        'solr_field' => 'mods_note_ms',
        'display_label' => 'Note',
        'hyperlink' => 0,
        'weight' => 16,
      ),
      'mods_subject_topic_ms' => array(
        'solr_field' => 'mods_subject_topic_ms',
        'display_label' => 'Topical Subject(s)',
        'hyperlink' => 0,
        'weight' => 17,
      ),
      'mods_subject_geographic_ms' => array(
        'solr_field' => 'mods_subject_geographic_ms',
        'display_label' => 'Geographical Subject(s)',
        'hyperlink' => 0,
        'weight' => 18,
      ),
      'mods_subject_temporal_ms' => array(
        'solr_field' => 'mods_subject_temporal_ms',
        'display_label' => 'Temporal Subject(s)',
        'hyperlink' => 0,
        'weight' => 19,
      ),
    ),
    'cmodels' => array(
      'islandora:sp_basic_image' => array(
        'cmodel' => 'islandora:sp_basic_image',
      ),
    ),
    'description' => array(
      'description_field' => NULL,
      'description_label' => NULL,
    ),
    'name' => 'Basic Image MODS',
  ),
  'BookMODS' => array(
    'fields' => array(
      'mods_titleInfo_title_ms' => array(
        'solr_field' => 'mods_titleInfo_title_ms',
        'display_label' => 'Title',
        'hyperlink' => 0,
        'weight' => 1,
      ),
      'mods_titleInfo_subTitle_ms' => array(
        'solr_field' => 'mods_titleInfo_subTitle_ms',
        'display_label' => 'Subtitle',
        'hyperlink' => 0,
        'weight' => 2,
      ),
      'mods_originInfo_edition_ms' => array(
        'solr_field' => 'mods_originInfo_edition_ms',
        'display_label' => 'Edition',
        'hyperlink' => 0,
        'weight' => 3,
      ),
      'mods_name_personal_namePart_ms' => array(
        'solr_field' => 'mods_name_personal_namePart_ms',
        'display_label' => 'Personal Name(s)',
        'hyperlink' => 0,
        'weight' => 4,
      ),
      'mods_name_corporate_namePart_ms' => array(
        'solr_field' => 'mods_name_corporate_namePart_ms',
        'display_label' => 'Corporate Name(s)',
        'hyperlink' => 0,
        'weight' => 5,
      ),
      'mods_genre_ms' => array(
        'solr_field' => 'mods_genre_ms',
        'display_label' => 'Genre',
        'hyperlink' => 0,
        'weight' => 6,
      ),
      'mods_tableOfContents_ms' => array(
        'solr_field' => 'mods_tableOfContents_ms',
        'display_label' => 'Table of Contents',
        'hyperlink' => 0,
        'weight' => 7,
      ),
      'mods_originInfo_dateIssued_dt' => array(
        'solr_field' => 'mods_originInfo_dateIssued_dt',
        'display_label' => 'Date Issued',
        'hyperlink' => 0,
        'weight' => 8,
      ),
      'mods_originInfo_publisher_ms' => array(
        'solr_field' => 'mods_originInfo_publisher_ms',
        'display_label' => 'Publisher',
        'hyperlink' => 0,
        'weight' => 9,
      ),
      'mods_originInfo_place_placeTerm_code_ms' => array(
        'solr_field' => 'mods_originInfo_place_placeTerm_code_ms',
        'display_label' => 'Country',
        'hyperlink' => 0,
        'weight' => 10,
      ),
      'mods_originInfo_place_placeTerm_text_ms' => array(
        'solr_field' => 'mods_originInfo_place_placeTerm_text_ms',
        'display_label' => 'Place',
        'hyperlink' => 0,
        'weight' => 11,
      ),
      'mods_originInfo_copyrightDate_dt' => array(
        'solr_field' => 'mods_originInfo_copyrightDate_dt',
        'display_label' => 'Copyright Date',
        'hyperlink' => 0,
        'weight' => 12,
      ),
      'mods_note_statement of responsibility_ms' => array(
        'solr_field' => 'mods_note_statement of responsibility_ms',
        'display_label' => 'Statement of Responsibility',
        'hyperlink' => 0,
        'weight' => 13,
      ),
      'mods_language_languageTerm_code_ms' => array(
        'solr_field' => 'mods_language_languageTerm_code_ms',
        'display_label' => 'Language',
        'hyperlink' => 0,
        'weight' => 14,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Abstract',
        'hyperlink' => 0,
        'weight' => 15,
      ),
      'mods_physicalDescription_form_ms' => array(
        'solr_field' => 'mods_physicalDescription_form_ms',
        'display_label' => 'Form',
        'hyperlink' => 0,
        'weight' => 16,
      ),
      'mods_physicalDescription_extent_ms' => array(
        'solr_field' => 'mods_physicalDescription_extent_ms',
        'display_label' => 'Extent',
        'hyperlink' => 0,
        'weight' => 17,
      ),
      'mods_note_ms' => array(
        'solr_field' => 'mods_note_ms',
        'display_label' => 'Note',
        'hyperlink' => 0,
        'weight' => 18,
      ),
      'mods_subject_topic_ms' => array(
        'solr_field' => 'mods_subject_topic_ms',
        'display_label' => 'Topical Subject(s)',
        'hyperlink' => 0,
        'weight' => 19,
      ),
      'mods_subject_geographic_ms' => array(
        'solr_field' => 'mods_subject_geographic_ms',
        'display_label' => 'Geographical Subject(s)',
        'hyperlink' => 0,
        'weight' => 20,
      ),
      'mods_subject_temporal_ms' => array(
        'solr_field' => 'mods_subject_temporal_ms',
        'display_label' => 'Temporal Subject(s)',
        'hyperlink' => 0,
        'weight' => 21,
      ),
      'mods_identifier_isbn_ms' => array(
        'solr_field' => 'mods_identifier_isbn_ms',
        'display_label' => 'ISBN',
        'hyperlink' => 0,
        'weight' => 22,
      ),
      'mods_classification_ms' => array(
        'solr_field' => 'mods_classification_ms',
        'display_label' => 'Classification',
        'hyperlink' => 0,
        'weight' => 23,
      ),
    ),
    'cmodels' => array(
      'islandora:bookCModel' => array(
        'cmodel' => 'islandora:bookCModel',
      ),
    ),
    'description' => array(
      'description_field' => NULL,
      'description_label' => NULL,
    ),
    'name' => 'Book MODS',
  ),
  'CitationMODS' => array(
    'fields' => array(
      'mods_titleInfo_title_ms' => array(
        'solr_field' => 'mods_titleInfo_title_ms',
        'display_label' => 'Title',
        'hyperlink' => 0,
        'weight' => 1,
      ),
      'mods_titleInfo_subTitle_ms' => array(
        'solr_field' => 'mods_titleInfo_subTitle_ms',
        'display_label' => 'Subtitle',
        'hyperlink' => 0,
        'weight' => 2,
      ),
      'mods_note_type of work_ms' => array(
        'solr_field' => 'mods_note_type of work_ms',
        'display_label' => 'Type of Work',
        'hyperlink' => 0,
        'weight' => 3,
      ),
      'mods_genre_ms' => array(
        'solr_field' => 'mods_genre_ms',
        'display_label' => 'Publication Type',
        'hyperlink' => 0,
        'weight' => 4,
      ),
      'mods_note_publication status_ms' => array(
        'solr_field' => 'mods_note_publication status_ms',
        'display_label' => 'Publication Status',
        'hyperlink' => 0,
        'weight' => 5,
      ),
      'mods_name_personal_namePart_ms' => array(
        'solr_field' => 'mods_name_personal_namePart_ms',
        'display_label' => 'Author(s)',
        'hyperlink' => 0,
        'weight' => 6,
      ),
      'mods_name_corporate_namePart_ms' => array(
        'solr_field' => 'mods_name_corporate_namePart_ms',
        'display_label' => 'Group Author(s)',
        'hyperlink' => 0,
        'weight' => 7,
      ),
      'mods_part_date_dt' => array(
        'solr_field' => 'mods_part_date_dt',
        'display_label' => 'Date',
        'hyperlink' => 0,
        'weight' => 8,
      ),
      'mods_relatedItem_host_titleInfo_title_ms' => array(
        'solr_field' => 'mods_relatedItem_host_titleInfo_title_ms',
        'display_label' => 'Journal/Book/Host Title',
        'hyperlink' => 0,
        'weight' => 9,
      ),
      'mods_part_detail_volume_number_ms' => array(
        'solr_field' => 'mods_part_detail_volume_number_ms',
        'display_label' => 'Volume',
        'hyperlink' => 0,
        'weight' => 10,
      ),
      'mods_part_detail_issue_number_ms' => array(
        'solr_field' => 'mods_part_detail_issue_number_ms',
        'display_label' => 'Issue',
        'hyperlink' => 0,
        'weight' => 11,
      ),
      'mods_part_extent_start_ms' => array(
        'solr_field' => 'mods_part_extent_start_ms',
        'display_label' => 'Start Page',
        'hyperlink' => 0,
        'weight' => 12,
      ),
      'mods_part_extent_end_ms' => array(
        'solr_field' => 'mods_part_extent_end_ms',
        'display_label' => 'End Page',
        'hyperlink' => 0,
        'weight' => 13,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Abstract',
        'hyperlink' => 0,
        'weight' => 14,
      ),
      'mods_subject_topic_ms' => array(
        'solr_field' => 'mods_subject_topic_ms',
        'display_label' => 'Subject(s)',
        'hyperlink' => 0,
        'weight' => 15,
      ),
      'mods_language_languageTerm_ms' => array(
        'solr_field' => 'mods_language_languageTerm_ms',
        'display_label' => 'Language(s)',
        'hyperlink' => 0,
        'weight' => 16,
      ),
      'mods_originInfo_publisher_ms' => array(
        'solr_field' => 'mods_originInfo_publisher_ms',
        'display_label' => 'Publisher',
        'hyperlink' => 0,
        'weight' => 17,
      ),
      'mods_originInfo_place_placeTerm_text_ms' => array(
        'solr_field' => 'mods_originInfo_place_placeTerm_text_ms',
        'display_label' => 'Place of Publication',
        'hyperlink' => 0,
        'weight' => 18,
      ),
      'mods_accessCondition_useAndReproduction_ms' => array(
        'solr_field' => 'mods_accessCondition_useAndReproduction_ms',
        'display_label' => 'Copyright Information',
        'hyperlink' => 0,
        'weight' => 19,
      ),
      'mods_originInfo_dateIssued_dt' => array(
        'solr_field' => 'mods_originInfo_dateIssued_dt',
        'display_label' => 'Date Issued',
        'hyperlink' => 0,
        'weight' => 20,
      ),
      'mods_location_url_ms' => array(
        'solr_field' => 'mods_location_url_ms',
        'display_label' => 'URL',
        'hyperlink' => 0,
        'weight' => 21,
      ),
      'mods_identifier_doi_ms' => array(
        'solr_field' => 'mods_identifier_doi_ms',
        'display_label' => 'DOI',
        'hyperlink' => 0,
        'weight' => 22,
      ),
      'mods_identifier_uri_ms' => array(
        'solr_field' => 'mods_identifier_uri_ms',
        'display_label' => 'URI',
        'hyperlink' => 0,
        'weight' => 23,
      ),
      'mods_identifier_isbn_ms' => array(
        'solr_field' => 'mods_identifier_isbn_ms',
        'display_label' => 'ISBN',
        'hyperlink' => 0,
        'weight' => 24,
      ),
      'mods_identifier_issn_ms' => array(
        'solr_field' => 'mods_identifier_issn_ms',
        'display_label' => 'ISSN',
        'hyperlink' => 0,
        'weight' => 25,
      ),
      'mods_identifier_pmc_ms' => array(
        'solr_field' => 'mods_identifier_pmc_ms',
        'display_label' => 'PMCID',
        'hyperlink' => 0,
        'weight' => 26,
      ),
    ),
    'cmodels' => array(
      'ir:citationCModel' => array(
        'cmodel' => 'ir:citationCModel',
      ),
    ),
    'description' => array(
      'description_field' => NULL,
      'description_label' => NULL,
    ),
    'name' => 'Citation MODS',
  ),
  'CompoundMODS' => array(
    'fields' => array(
      'mods_titleInfo_title_ms' => array(
        'solr_field' => 'mods_titleInfo_title_ms',
        'display_label' => 'Title',
        'hyperlink' => 0,
        'weight' => -15,
      ),
      'mods_titleInfo_subTitle_ms' => array(
        'solr_field' => 'mods_titleInfo_subTitle_ms',
        'display_label' => 'Subtitle',
        'hyperlink' => 0,
        'weight' => -14,
      ),
      'mods_titleInfo_alternative_title_ms' => array(
        'solr_field' => 'mods_titleInfo_alternative_title_ms',
        'display_label' => 'Alternate Title',
        'hyperlink' => 0,
        'weight' => -13,
      ),
      'mods_name_personal_namePart_ms' => array(
        'solr_field' => 'mods_name_personal_namePart_ms',
        'display_label' => 'People',
        'hyperlink' => 0,
        'weight' => -12,
      ),
      'mods_identifier_hdl_ms' => array(
        'solr_field' => 'mods_identifier_hdl_ms',
        'display_label' => 'Handle',
        'hyperlink' => 0,
        'weight' => -11,
      ),
      'mods_identifier_issn_ms' => array(
        'solr_field' => 'mods_identifier_issn_ms',
        'display_label' => 'ISSN',
        'hyperlink' => 0,
        'weight' => -10,
      ),
      'mods_identifier_lccn_ms' => array(
        'solr_field' => 'mods_identifier_lccn_ms',
        'display_label' => 'LCCN',
        'hyperlink' => 0,
        'weight' => -9,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Abstract',
        'hyperlink' => 0,
        'weight' => -8,
      ),
      'mods_originInfo_publisher_ms' => array(
        'solr_field' => 'mods_originInfo_publisher_ms',
        'display_label' => 'Publisher',
        'hyperlink' => 0,
        'weight' => -7,
      ),
      'mods_originInfo_place_placeTerm_text_ms' => array(
        'solr_field' => 'mods_originInfo_place_placeTerm_text_ms',
        'display_label' => 'Place of Publication',
        'hyperlink' => 0,
        'weight' => -6,
      ),
      'mods_originInfo_dateIssued_dt' => array(
        'solr_field' => 'mods_originInfo_dateIssued_dt',
        'display_label' => 'Date Issued',
        'hyperlink' => 0,
        'weight' => -5,
      ),
      'mods_originInfo_frequency_ms' => array(
        'solr_field' => 'mods_originInfo_frequency_ms',
        'display_label' => 'Frequency',
        'hyperlink' => 0,
        'weight' => -4,
      ),
      'mods_subject_topic_ms' => array(
        'solr_field' => 'mods_subject_topic_ms',
        'display_label' => 'Topical Subject(s)',
        'hyperlink' => 0,
        'weight' => -3,
      ),
      'mods_subject_geographic_ms' => array(
        'solr_field' => 'mods_subject_geographic_ms',
        'display_label' => 'Geographical Subject(s)',
        'hyperlink' => 0,
        'weight' => -2,
      ),
      'mods_subject_temporal_ms' => array(
        'solr_field' => 'mods_subject_temporal_ms',
        'display_label' => 'Temporal Subject(s)',
        'hyperlink' => 0,
        'weight' => -1,
      ),
    ),
    'cmodels' => array(
      'islandora:compoundCModel' => array(
        'cmodel' => 'islandora:compoundCModel',
      ),
    ),
    'description' => array(
      'description_field' => NULL,
      'description_label' => NULL,
    ),
    'name' => 'Compound MODS',
  ),
  'LargeImageMODS' => array(
    'fields' => array(
      'mods_titleInfo_title_ms' => array(
        'solr_field' => 'mods_titleInfo_title_ms',
        'display_label' => 'Title',
        'hyperlink' => 0,
        'weight' => -19,
      ),
      'mods_titleInfo_subTitle_ms' => array(
        'solr_field' => 'mods_titleInfo_subTitle_ms',
        'display_label' => 'Subtitle',
        'hyperlink' => 0,
        'weight' => -18,
      ),
      'mods_name_personal_namePart_ms' => array(
        'solr_field' => 'mods_name_personal_namePart_ms',
        'display_label' => 'Personal Name(s)',
        'hyperlink' => 0,
        'weight' => -17,
      ),
      'mods_name_corporate_namePart_ms' => array(
        'solr_field' => 'mods_name_corporate_namePart_ms',
        'display_label' => 'Corporate Name(s)',
        'hyperlink' => 0,
        'weight' => -16,
      ),
      'mods_typeOfResource_ms' => array(
        'solr_field' => 'mods_typeOfResource_ms',
        'display_label' => 'Type of Resource',
        'hyperlink' => 0,
        'weight' => -15,
      ),
      'mods_genre_ms' => array(
        'solr_field' => 'mods_genre_ms',
        'display_label' => 'Genre',
        'hyperlink' => 0,
        'weight' => -14,
      ),
      'mods_originInfo_dateCreated_dt' => array(
        'solr_field' => 'mods_originInfo_dateCreated_dt',
        'display_label' => 'Date Created',
        'hyperlink' => 0,
        'weight' => -13,
      ),
      'mods_originInfo_publisher_ms' => array(
        'solr_field' => 'mods_originInfo_publisher_ms',
        'display_label' => 'Publisher',
        'hyperlink' => 0,
        'weight' => -12,
      ),
      'mods_originInfo_place_placeTerm_code_ms' => array(
        'solr_field' => 'mods_originInfo_place_placeTerm_code_ms',
        'display_label' => 'Country',
        'hyperlink' => 0,
        'weight' => -11,
      ),
      'mods_originInfo_place_placeTerm_text_ms' => array(
        'solr_field' => 'mods_originInfo_place_placeTerm_text_ms',
        'display_label' => 'Place',
        'hyperlink' => 0,
        'weight' => -10,
      ),
      'mods_language_languageTerm_code_ms' => array(
        'solr_field' => 'mods_language_languageTerm_code_ms',
        'display_label' => 'Language',
        'hyperlink' => 0,
        'weight' => -9,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Description',
        'hyperlink' => 0,
        'weight' => -8,
      ),
      'mods_identifier_local_ms' => array(
        'solr_field' => 'mods_identifier_local_ms',
        'display_label' => 'Identifier (local)',
        'hyperlink' => 0,
        'weight' => -7,
      ),
      'mods_physicalDescription_form_ms' => array(
        'solr_field' => 'mods_physicalDescription_form_ms',
        'display_label' => 'Form',
        'hyperlink' => 0,
        'weight' => -6,
      ),
      'mods_physicalDescription_extent_ms' => array(
        'solr_field' => 'mods_physicalDescription_extent_ms',
        'display_label' => 'Extent',
        'hyperlink' => 0,
        'weight' => -5,
      ),
      'mods_note_ms' => array(
        'solr_field' => 'mods_note_ms',
        'display_label' => 'Note',
        'hyperlink' => 0,
        'weight' => -4,
      ),
      'mods_subject_topic_ms' => array(
        'solr_field' => 'mods_subject_topic_ms',
        'display_label' => 'Topical Subject(s)',
        'hyperlink' => 0,
        'weight' => -3,
      ),
      'mods_subject_geographic_ms' => array(
        'solr_field' => 'mods_subject_geographic_ms',
        'display_label' => 'Geographical Subject(s)',
        'hyperlink' => 0,
        'weight' => -2,
      ),
      'mods_subject_temporal_ms' => array(
        'solr_field' => 'mods_subject_temporal_ms',
        'display_label' => 'Temporal Subject(s)',
        'hyperlink' => 0,
        'weight' => -1,
      ),
    ),
    'cmodels' => array(
      'islandora:sp_large_image_cmodel' => array(
        'cmodel' => 'islandora:sp_large_image_cmodel',
      ),
    ),
    'description' => array(
      'description_field' => NULL,
      'description_label' => NULL,
    ),
    'name' => 'Large Image MODS',
  ),
  'NewspaperMODS' => array(
    'fields' => array(
      'mods_subject_temporal_ms' => array(
        'solr_field' => 'mods_subject_temporal_ms',
        'display_label' => 'Dates',
        'hyperlink' => 0,
        'weight' => -16,
      ),
      'mods_titleInfo_title_ms' => array(
        'solr_field' => 'mods_titleInfo_title_ms',
        'display_label' => 'Title',
        'hyperlink' => 0,
        'weight' => -15,
      ),
      'mods_titleInfo_subTitle_ms' => array(
        'solr_field' => 'mods_titleInfo_subTitle_ms',
        'display_label' => 'Subtitle',
        'hyperlink' => 0,
        'weight' => -14,
      ),
      'mods_titleInfo_alternative_title_ms' => array(
        'solr_field' => 'mods_titleInfo_alternative_title_ms',
        'display_label' => 'Alternate Title',
        'hyperlink' => 0,
        'weight' => -13,
      ),
      'mods_name_personal_namePart_ms' => array(
        'solr_field' => 'mods_name_personal_namePart_ms',
        'display_label' => 'People',
        'hyperlink' => 0,
        'weight' => -12,
      ),
      'mods_note_prospectus_ms' => array(
        'solr_field' => 'mods_note_prospectus_ms',
        'display_label' => 'Newspaper Prospectus',
        'hyperlink' => 0,
        'weight' => -11,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Abstract',
        'hyperlink' => 0,
        'weight' => -10,
      ),
      'mods_originInfo_publisher_ms' => array(
        'solr_field' => 'mods_originInfo_publisher_ms',
        'display_label' => 'Publisher',
        'hyperlink' => 0,
        'weight' => -9,
      ),
      'mods_originInfo_place_placeTerm_text_ms' => array(
        'solr_field' => 'mods_originInfo_place_placeTerm_text_ms',
        'display_label' => 'Place of Publication',
        'hyperlink' => 0,
        'weight' => -8,
      ),
      'mods_originInfo_dateIssued_dt' => array(
        'solr_field' => 'mods_originInfo_dateIssued_dt',
        'display_label' => 'Date Issued',
        'hyperlink' => 0,
        'weight' => -7,
      ),
      'mods_originInfo_frequency_ms' => array(
        'solr_field' => 'mods_originInfo_frequency_ms',
        'display_label' => 'Frequency',
        'hyperlink' => 0,
        'weight' => -6,
      ),
      'mods_subject_topic_ms' => array(
        'solr_field' => 'mods_subject_topic_ms',
        'display_label' => 'Topics',
        'hyperlink' => 0,
        'weight' => -5,
      ),
      'mods_subject_geographic_ms' => array(
        'solr_field' => 'mods_subject_geographic_ms',
        'display_label' => 'Places',
        'hyperlink' => 0,
        'weight' => -4,
      ),
      'mods_identifier_hdl_ms' => array(
        'solr_field' => 'mods_identifier_hdl_ms',
        'display_label' => 'Handle',
        'hyperlink' => 0,
        'weight' => -3,
      ),
      'mods_identifier_issn_ms' => array(
        'solr_field' => 'mods_identifier_issn_ms',
        'display_label' => 'ISSN',
        'hyperlink' => 0,
        'weight' => -2,
      ),
      'mods_identifier_lccn_ms' => array(
        'solr_field' => 'mods_identifier_lccn_ms',
        'display_label' => 'LCCN',
        'hyperlink' => 0,
        'weight' => -1,
      ),
    ),
    'cmodels' => array(
      'islandora:newspaperCModel' => array(
        'cmodel' => 'islandora:newspaperCModel',
      ),
      'islandora:newspaperIssueCModel' => array(
        'cmodel' => 'islandora:newspaperIssueCModel',
      ),
    ),
    'description' => array(
      'description_field' => NULL,
      'description_label' => NULL,
    ),
    'name' => 'Newspaper MODS',
  ),
  'PDF_MODS' => array(
    'fields' => array(
      'mods_titleInfo_title_ms' => array(
        'solr_field' => 'mods_titleInfo_title_ms',
        'display_label' => 'Title',
        'hyperlink' => 0,
        'weight' => 1,
      ),
      'mods_titleInfo_subTitle_ms' => array(
        'solr_field' => 'mods_titleInfo_subTitle_ms',
        'display_label' => 'Subtitle',
        'hyperlink' => 0,
        'weight' => 2,
      ),
      'mods_name_personal_namePart_ms' => array(
        'solr_field' => 'mods_name_personal_namePart_ms',
        'display_label' => 'Personal Name(s)',
        'hyperlink' => 0,
        'weight' => 3,
      ),
      'mods_name_corporate_namePart_ms' => array(
        'solr_field' => 'mods_name_corporate_namePart_ms',
        'display_label' => 'Corporate Name(s)',
        'hyperlink' => 0,
        'weight' => 4,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Abstract',
        'hyperlink' => 0,
        'weight' => 5,
      ),
      'mods_note_ms' => array(
        'solr_field' => 'mods_note_ms',
        'display_label' => 'Note',
        'hyperlink' => 0,
        'weight' => 6,
      ),
      'mods_subject_topic_ms' => array(
        'solr_field' => 'mods_subject_topic_ms',
        'display_label' => 'Topical Subject(s)',
        'hyperlink' => 0,
        'weight' => 7,
      ),
      'mods_subject_geographic_ms' => array(
        'solr_field' => 'mods_subject_geographic_ms',
        'display_label' => 'Geographic Subject(s)',
        'hyperlink' => 0,
        'weight' => 8,
      ),
      'mods_subject_temporal_ms' => array(
        'solr_field' => 'mods_subject_temporal_ms',
        'display_label' => 'Temporal Subject(s)',
        'hyperlink' => 0,
        'weight' => 9,
      ),
      'mods_location_url_ms' => array(
        'solr_field' => 'mods_location_url_ms',
        'display_label' => 'Location',
        'hyperlink' => 0,
        'weight' => 10,
      ),
    ),
    'cmodels' => array(
      'islandora:sp_pdf' => array(
        'cmodel' => 'islandora:sp_pdf',
      ),
    ),
    'description' => array(
      'description_field' => NULL,
      'description_label' => NULL,
    ),
    'name' => 'PDF MODS',
  ),
  'VideoMODS' => array(
    'fields' => array(
      'mods_titleInfo_title_ms' => array(
        'solr_field' => 'mods_titleInfo_title_ms',
        'display_label' => 'Title',
        'hyperlink' => 0,
        'weight' => -4,
      ),
      'mods_titleInfo_subTitle_ms' => array(
        'solr_field' => 'mods_titleInfo_subTitle_ms',
        'display_label' => 'Subtitle',
        'hyperlink' => 0,
        'weight' => -3,
      ),
      'mods_name_personal_namePart_ms' => array(
        'solr_field' => 'mods_name_personal_namePart_ms',
        'display_label' => 'Personal Name(s)',
        'hyperlink' => 0,
        'weight' => -2,
      ),
      'mods_name_corporate_namePart_ms' => array(
        'solr_field' => 'mods_name_corporate_namePart_ms',
        'display_label' => 'Corporate Name(s)',
        'hyperlink' => 0,
        'weight' => -1,
      ),
      'mods_genre_ms' => array(
        'solr_field' => 'mods_genre_ms',
        'display_label' => 'Genre',
        'hyperlink' => 0,
        'weight' => 5,
      ),
      'mods_originInfo_dateIssued_dt' => array(
        'solr_field' => 'mods_originInfo_dateIssued_dt',
        'display_label' => 'Date Issued',
        'hyperlink' => 0,
        'weight' => 6,
      ),
      'mods_originInfo_publisher_ms' => array(
        'solr_field' => 'mods_originInfo_publisher_ms',
        'display_label' => 'Publisher',
        'hyperlink' => 0,
        'weight' => 7,
      ),
      'mods_originInfo_place_placeTerm_code_ms' => array(
        'solr_field' => 'mods_originInfo_place_placeTerm_code_ms',
        'display_label' => 'Country',
        'hyperlink' => 0,
        'weight' => 8,
      ),
      'mods_originInfo_place_placeTerm_text_ms' => array(
        'solr_field' => 'mods_originInfo_place_placeTerm_text_ms',
        'display_label' => 'Place',
        'hyperlink' => 0,
        'weight' => 9,
      ),
      'mods_language_languageTerm_code_ms' => array(
        'solr_field' => 'mods_language_languageTerm_code_ms',
        'display_label' => 'Language',
        'hyperlink' => 0,
        'weight' => 10,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Description',
        'hyperlink' => 0,
        'weight' => 11,
      ),
      'mods_identifier_ms' => array(
        'solr_field' => 'mods_identifier_ms',
        'display_label' => 'Identifier',
        'hyperlink' => 0,
        'weight' => 12,
      ),
      'mods_physicalDescription_form_ms' => array(
        'solr_field' => 'mods_physicalDescription_form_ms',
        'display_label' => 'Form',
        'hyperlink' => 0,
        'weight' => 13,
      ),
      'mods_physicalDescription_extent_ms' => array(
        'solr_field' => 'mods_physicalDescription_extent_ms',
        'display_label' => 'Extent',
        'hyperlink' => 0,
        'weight' => 14,
      ),
      'mods_note_ms' => array(
        'solr_field' => 'mods_note_ms',
        'display_label' => 'Note',
        'hyperlink' => 0,
        'weight' => 15,
      ),
      'mods_subject_topic_ms' => array(
        'solr_field' => 'mods_subject_topic_ms',
        'display_label' => 'Topical Subject(s)',
        'hyperlink' => 0,
        'weight' => 16,
      ),
      'mods_subject_geographic_ms' => array(
        'solr_field' => 'mods_subject_geographic_ms',
        'display_label' => 'Geographical Subject(s)',
        'hyperlink' => 0,
        'weight' => 17,
      ),
      'mods_subject_temporal_ms' => array(
        'solr_field' => 'mods_subject_temporal_ms',
        'display_label' => 'Temporal Subject(s)',
        'hyperlink' => 0,
        'weight' => 18,
      ),
    ),
    'cmodels' => array(
      'islandora:sp_videoCModel' => array(
        'cmodel' => 'islandora:sp_videoCModel',
      ),
    ),
    'description' => array(
      'description_field' => NULL,
      'description_label' => NULL,
    ),
    'name' => 'Video MODS',
  ),
  'department' => array(
    'fields' => array(
      'MADS_department_ms' => array(
        'solr_field' => 'MADS_department_ms',
        'display_label' => 'Name',
        'hyperlink' => 0,
        'weight' => 1,
      ),
      'MADS_date_ms' => array(
        'solr_field' => 'MADS_date_ms',
        'display_label' => 'Date',
        'hyperlink' => 0,
        'weight' => 2,
      ),
      'MADS_historical_mt' => array(
        'solr_field' => 'MADS_historical_mt',
        'display_label' => 'Historical Note',
        'hyperlink' => 0,
        'weight' => 3,
      ),
      'MADS_url_ms' => array(
        'solr_field' => 'MADS_url_ms',
        'display_label' => 'URL',
        'hyperlink' => 1,
        'weight' => 4,
      ),
      'MADS_parent_institution_ms' => array(
        'solr_field' => 'MADS_parent_institution_ms',
        'display_label' => 'Parent school/faculty',
        'hyperlink' => 0,
        'weight' => 5,
      ),
    ),
    'cmodels' => array(
      'islandora:organizationCModel' => array(
        'cmodel' => 'islandora:organizationCModel',
      ),
    ),
    'description' => array(
      'description_field' => NULL,
      'description_label' => NULL,
    ),
    'name' => 'Department',
  ),
  'scholar' => array(
    'fields' => array(
      'MADS_title_ms' => array(
        'solr_field' => 'MADS_title_ms',
        'display_label' => 'Name',
        'hyperlink' => 0,
        'weight' => 1,
      ),
      'MADS_email_ms' => array(
        'solr_field' => 'MADS_email_ms',
        'display_label' => 'Email',
        'hyperlink' => 0,
        'weight' => 2,
      ),
      'MADS_position_ms' => array(
        'solr_field' => 'MADS_position_ms',
        'display_label' => 'Position',
        'hyperlink' => 0,
        'weight' => 3,
      ),
      'MADS_organization_ms' => array(
        'solr_field' => 'MADS_organization_ms',
        'display_label' => 'Department(s)',
        'hyperlink' => 0,
        'weight' => 4,
      ),
      'MADS_phone_ms' => array(
        'solr_field' => 'MADS_phone_ms',
        'display_label' => 'Phone',
        'hyperlink' => 0,
        'weight' => 5,
      ),
      'MADS_address_ms' => array(
        'solr_field' => 'MADS_address_ms',
        'display_label' => 'Building',
        'hyperlink' => 0,
        'weight' => 6,
      ),
      'MADS_url_ms' => array(
        'solr_field' => 'MADS_url_ms',
        'display_label' => 'URL',
        'hyperlink' => 1,
        'weight' => 7,
      ),
    ),
    'cmodels' => array(
      'islandora:personCModel' => array(
        'cmodel' => 'islandora:personCModel',
      ),
    ),
    'description' => array(
      'description_field' => NULL,
      'description_label' => NULL,
    ),
    'name' => 'Scholar',
  ),
);
}
