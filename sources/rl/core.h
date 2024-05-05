#include "raylib.h"
#include "s7_impl.h"
#include "s7/s7.h"

static S7_FUNCTION_IMPL_vec2(rl_get_mouse_position, GetMousePosition);
static S7_FUNCTION_IMPL_bool_int(rl_is_key_down, IsKeyDown);
static S7_FUNCTION_IMPL_int(rl_get_char_pressed, GetCharPressed);
static S7_FUNCTION_IMPL_int(rl_get_key_pressed, GetKeyPressed);

static void rl_core_define_methods(s7_scheme *s7) {
  s7_define_function(s7, "rl-is-key-down", rl_is_key_down, 1, 0, false, "(rl-is-key-down KEY)");
  s7_define_function(s7, "rl-get-mouse-position", rl_get_mouse_position, 0, 0, false, "(rl-get-mouse-position)");
  s7_define_function(s7, "rl-get-char-pressed", rl_get_char_pressed, 0, 0, false, "(rl-get-char-pressed)");
  s7_define_function(s7, "rl-get-key-pressed", rl_get_key_pressed, 0, 0, false, "(rl-get-key-pressed)");
}
