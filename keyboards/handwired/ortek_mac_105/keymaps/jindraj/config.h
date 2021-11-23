#define DYNAMIC_MACRO_SIZE 1024
#define DYNAMIC_MACRO_USER_CALL
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD

/* Bootmagic Lite key configuration */
#ifdef AUDIO_ENABLE
    #define AUDIO_VOICES
    #define AUDIO_VOICE_DEFAULT delayed_vibrato
    #define AUDIO_ENABLE_TONE_MULTIPLEXING
    #define AUDIO_TONE_MULTIPLEXING_RATE_DEFAULT 10
    #define STARTUP_SONG SONG(IMPERIAL_MARCH)
    //#define STARTUP_SONG SONG(ODE_TO_JOY)
    #ifdef TEMPO_DEFAULT
        #undef TEMPO_DEFAULT
        #define TEMPO_DEFAULT 80
    #endif
#endif


