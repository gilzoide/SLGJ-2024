#pragma once

#include "vector2.h"
#include "s7/s7.h"

// 0 args
#define S7_FUNCTION_IMPL_void(name, c_func) \
s7_pointer name(s7_scheme *s7, s7_pointer args) { \
  c_func(); \
  return NULL; \
}

#define S7_FUNCTION_IMPL_bool(name, c_func) \
s7_pointer name(s7_scheme *s7, s7_pointer args) { \
  bool result = c_func(); \
  return s7_make_boolean(s7, result); \
}

#define S7_FUNCTION_IMPL_int(name, c_func) \
s7_pointer name(s7_scheme *s7, s7_pointer args) { \
  s7_int result = c_func(); \
  return s7_make_integer(s7, result); \
}

#define S7_FUNCTION_IMPL_float(name, c_func) \
s7_pointer name(s7_scheme *s7, s7_pointer args) { \
  s7_double result = c_func(); \
  return s7_make_real(s7, result); \
}

#define S7_FUNCTION_IMPL_vec2(name, c_func) \
s7_pointer name(s7_scheme *s7, s7_pointer args) { \
  Vector2 result = c_func(); \
  return s7_make_vector2(s7, result); \
}

// 1 arg
#define S7_FUNCTION_IMPL_bool_int(name, c_func) \
s7_pointer name(s7_scheme *s7, s7_pointer args) { \
  s7_int arg0 = s7_integer(s7_car(args)); \
  bool result = (bool) c_func(arg0); \
  return s7_make_boolean(s7, result); \
}
