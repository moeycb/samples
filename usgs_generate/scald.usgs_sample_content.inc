<?php
/**
 * @file
 */

/**
 * Create one scald_atom.
 *
 * Returns a full scald_atom object ready to be saved.
 */
function usgs_sample_content_create_scald_atom($atom_type = 'image', $title = NULL) {
  // Prepare the object, taken from scald_atom_add_page().
  $type = scald_type_load($atom_type);
  $providers = scald_atom_providers_opt();
  $sources = $providers[$type->type];
  $source = key($sources);
  $provider = current($sources);

  $scald = array(
    'type' => $type,
    'source' => isset($source) ? $source : NULL,
    'provider' => $provider,
  );

  $atom = new ScaldAtom($scald['type']->type, $scald['source']);

  // Creates an image file that is manged by drupal and can be attached to
  // a scald_atom
  $file = usgs_sample_content_generate_image();
  $atom->title = 'Auto-generated:' . $title . ':' . $file->filename;
  $atom->base_id = $file->fid;
  $langcode = field_language('scald_atom', $atom, 'scald_authors');
  $atom->scald_thumbnail[$langcode][0] = (array) $file;

  return $atom;
}

/**
 * Totally ripped off from devel_generate. Could also just make devel_generate
 * a dependency, but wanted to maybe make some modifications.
 *
 * Private function for creating a random image.
 *
 * This function only works with the GD toolkit. ImageMagick is not supported.
 */
function usgs_sample_content_generate_image($extension = 'png', $min_resolution = '1280x1200', $max_resolution = '1280x1200') {
  if ($tmp_file = drupal_tempnam('temporary://', 'imagefield_')) {
    $destination = $tmp_file . '.' . $extension;
    file_unmanaged_move($tmp_file, $destination, FILE_CREATE_DIRECTORY);

    $min = explode('x', $min_resolution);
    $max = explode('x', $max_resolution);

    $width = rand((int) $min[0], (int) $max[0]);
    $height = rand((int) $min[1], (int) $max[1]);

    // Make an image split into 4 sections with random colors.
    $im = imagecreate($width, $height);
    for ($n = 0; $n < 4; $n++) {
      $color = imagecolorallocate($im, rand(0, 255), rand(0, 255), rand(0, 255));
      $x = $width / 2 * ($n % 2);
      $y = $height / 2 * (int) ($n >= 2);
      imagefilledrectangle($im, $x, $y, $x + $width / 2, $y + $height / 2, $color);
    }

    // Make a perfect circle in the image middle.
    $color = imagecolorallocate($im, rand(0, 255), rand(0, 255), rand(0, 255));
    $smaller_dimension = min($width, $height);
    $smaller_dimension = ($smaller_dimension % 2) ? $smaller_dimension : $smaller_dimension;
    imageellipse($im, $width / 2, $height / 2, $smaller_dimension, $smaller_dimension, $color);

    $save_function = 'image' . ($extension == 'jpg' ? 'jpeg' : $extension);
    $save_function($im, drupal_realpath($destination));

    $path = $destination;
    $source = new stdClass();
    $source->uri = $path;
    $source->uid = 1; // TODO: randomize? Use case specific.
    $source->filemime = 'image/' . pathinfo($path, PATHINFO_EXTENSION);
    $source->filename = basename($path);
    $destination_dir = 'public://sample';
    file_prepare_directory($destination_dir, FILE_CREATE_DIRECTORY);
    $destination = $destination_dir . '/' . basename($path);
    $file = file_move($source, $destination, FILE_CREATE_DIRECTORY);
    return $file;
  }
  else {
    return FALSE;
  }
}