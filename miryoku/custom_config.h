// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none
#define MLK &kp LC(LG(Q))
#define SCR &kp LS(LG(N2))
#define OCR &kp LC(LA(LG(O)))
#define CLP &kp LS(LG(V))

#if defined MIRYOKU_MAPPING_EXTENDED_THUMBS
#define MIRYOKU_LAYOUTMAPPING_PLANCK(\
K00, K01, K02, K03, K04,           K05, K06, K07, K08, K09, \
K10, K11, K12, K13, K14,           K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24,           K25, K26, K27, K28, K29, \
N30, N31, K32, K33, K34,           K35, K36, K37, N38, N39 \
) \
K00  K01  K02  K03  K04  XXX  XXX  K05  K06  K07  K08  K09 \
K10  K11  K12  K13  K14  XXX  XXX  K15  K16  K17  K18  K19 \
K20  K21  K22  K23  K24  XXX  XXX  K25  K26  K27  K28  K29 \
XXX  XXX  XXX  K32  K33  K34  K35  K36  K37  XXX  XXX  XXX
#else
#define MIRYOKU_LAYOUTMAPPING_PLANCK(\
K00,   K01,      K02,      K03, K04,                   K05, K06, K07,    K08,       K09, \
K10,   K11,      K12,      K13, K14,                   K15, K16, K17,    K18,       K19, \
K20,   K21,      K22,      K23, K24,                   K25, K26, K27,    K28,       K29, \
N30,   N31,      K32,      K33, K34,                   K35, K36, K37,    N38,       N39 \
) \
K00    K01       K02       K03  K04  &kp ESC  &kp RET  K05  K06  K07     K08        K09 \
K10    K11       K12       K13  K14  U_NAV    &kp SQT  K15  K16  K17     K18        K19 \
K20    K21       K22       K23  K24  SCR    OCR    K25  K26  K27     K28        K29 \
MLK  &kp LEFT  &kp DOWN  K32  K33  K34      K35      K36  K37  &kp UP  &kp RIGHT  CLP
#endif

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp M,             U_MT(RSHFT, N),    U_MT(RCTRL, E),    U_MT(RALT, I),     U_MT(RGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, BSPC), U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, SPACE),U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_EXTRA \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(RSHFT, J),    U_MT(RCTRL, K),    U_MT(RALT, L),     U_MT(RGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, BSPC), U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, SPACE),U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp BSPC,          &kp TAB,           &kp RET,           &kp SPACE,         &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp SPACE,         &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp BSPC,          &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NU,              U_NU,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             MLK,             SCR,             OCR,             CLP,             U_UND,             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_CLIPBOARD = MAC