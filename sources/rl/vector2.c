#include "vector2.h"
#include "s7/s7.h"

#include <stdlib.h>

bool s7_is_vector2(s7_pointer value) {
  return s7_is_float_vector(value);
}

Vector2 s7_vector2(s7_pointer value) {
  Vector2 v = { 0, 0 };
  s7_int length = s7_vector_length(value);
  if (length >= 1) {
    v.x = s7_float_vector_ref(value, 0);
  }
  if (length >= 2) {
    v.y = s7_float_vector_ref(value, 1);
  }
  return v;
}

s7_pointer s7_make_vector2(s7_scheme *s7, Vector2 value) {
  s7_pointer v = s7_make_float_vector(s7, 2, 1, NULL);
  s7_float_vector_set(v, 0, value.x);
  s7_float_vector_set(v, 1, value.y);
  return v;
}
