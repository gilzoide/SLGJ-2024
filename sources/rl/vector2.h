#pragma once

#include "raylib.h"
#include "s7/s7.h"

bool s7_is_vector2(s7_pointer value);
Vector2 s7_vector2(s7_pointer value);
s7_pointer s7_make_vector2(s7_scheme *s7, Vector2 value);
