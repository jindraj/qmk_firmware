#ifdef AUDIO_ENABLE
float tone_startup[][2] = SONG(STARTUP_SOUND);
float tone_qwerty[][2] = SONG(QWERTY_SOUND);
float tone_numpad[][2] = SONG(NUM_LOCK_ON_SOUND);
float tone_oneshot[][2] = SONG(TERMINAL_SOUND);
float tone_dyn_macro_rec[][2] = SONG(SONIC_RING);
float tone_dyn_macro_stop[][2] = SONG(COIN_SOUND);
float music_scale[][2] = SONG(MUSIC_SCALE_SOUND);
float tone_goodbye[][2] = SONG(GOODBYE_SOUND);
#endif

enum custom_keycodes {
    SS_SBKS = SAFE_RANGE,
    SS_GIS,
    SS_AST,
    SS_EMPL,
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  #ifdef CONSOLE_ENABLE
    dprintf("KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
  #endif // CONSOLE ENABLE

  #ifdef DYNAMIC_MACRO_ENABLE
  uint16_t macro_kc = (keycode == MO(1) ? QK_DYNAMIC_MACRO_RECORD_STOP : keycode);
  //if (!process_dynamic_macro(macro_kc, record))
  //{
  //    return false;
  //}
  if (!process_dynamic_macro(macro_kc, record)) {
    switch(macro_kc) {
      case QK_DYNAMIC_MACRO_PLAY_1:
      case QK_DYNAMIC_MACRO_PLAY_2:
        #ifdef AUDIO_ENABLE
        PLAY_SONG(music_scale);
        #endif // AUDIO_ENABLE
        break;
      case QK_DYNAMIC_MACRO_RECORD_START_1:
      case QK_DYNAMIC_MACRO_RECORD_START_2:
        #ifdef AUDIO_ENABLE
        PLAY_SONG(tone_startup);
        #endif // AUDIO_ENABLE
               break;
      case QK_DYNAMIC_MACRO_RECORD_STOP:
        #ifdef AUDIO_ENABLE
        PLAY_SONG(tone_goodbye);
        #endif // AUDIO_ENABLE
        break;
     }
   return false;
   }
 //if(dynamic_macro_record_start_user() {
 //    PLAY_SONG(tone_startup);
 //}
 #endif // DYNAMIC_MACRO_ENABLE

 switch (keycode) {
   case SS_SBKS:
     if (record->event.pressed) {
       SEND_STRING("socialbakers.com");
     }
     break;
   case SS_EMPL:
     if (record->event.pressed) {
       SEND_STRING("emplifi.io");
     }
     break;
   case SS_AST:
     if (record->event.pressed) {
       SEND_STRING("astutesolutions.com");
       dprintf("WE ARE HERE: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
     }
     break;
   case SS_GIS:
     if (record->event.pressed) {
       SEND_STRING("goinstore.com");
     }
     break;
  }
  return true;
}

//bool led_update_kb(led_t led_state) {
//    static bool num_state = true;
//    if (num_state == led_state.num_lock) {
//        if (led_state.num_lock) {
//    writePin(F0, led_state.num_lock);
//            layer_on(2);
//        } else {
//    writePin(F0, led_state.num_lock);
//            layer_off(2);
//        }
//        num_state = !led_state.num_lock;
//    }
//    return true;
//}


