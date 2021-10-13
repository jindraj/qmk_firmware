// dynamic macros and turning off features for size reduction
#define DYNAMIC_MACRO_SIZE 320
#define DYNAMIC_MACRO_USER_CALL

// define combination for magic commands
#define IS_COMMAND() (get_mods() == (MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT)))
