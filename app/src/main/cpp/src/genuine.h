#define GENUINE_NAME {0x68, 0x61, 0x76, 0x2a, 0x6b, 0x73, 0x6b, 0x64, 0x79, 0x7e, 0x79, 0x22, 0x79, 0x79, 0x66, 0x76, 0x64, 0x71, 0x78, 0x65, 0x73, 0x0}
#define GENUINE_SIZE 0x02a8
#define GENUINE_HASH 0xc1bb48ed

// #define GET_GENUINE_CLASS_NAME function_name_for_get_genuine_class_name
// #define GET_GENUINE_PACKAGE_NAME function_name_for_get_genuine_package_name

/* define to turn off maps check */
// #define NO_CHECK_MAPS

#ifndef NO_CHECK_MAPS
/* define to anti odex */
// #define ANTI_ODEX

/* define to anti overlay */
// #define ANTI_OVERLAY
#endif

/* define to check plt hook for jniRegisterNativeMethods */
// #define CHECK_JNI_REGISTER_NATIVE_METHODS

/* define to turn off xposed check */
// #define NO_CHECK_XPOSED

/* define to turn on xposed-epic check
 */
// #define CHECK_XPOSED_EPIC

/* genuine false handler */
// #define GENUINE_FALSE_CRASH
// #define GENUINE_FALSE_NATIVE

/* genuine fake handler */
// #define GENUINE_FAKE_CRASH
#define GENUINE_FAKE_NATIVE

/* genuine overlay handler */
// #define GENUINE_OVERLAY_CRASH
// #define GENUINE_OVERLAY_NATIVE

/* genuine odex handler */
// #define GENUINE_ODEX_CRASH
// #define GENUINE_ODEX_NATIVE

/* genuine dex handler */
// #define GENUINE_DEX_CRASH
// #define GENUINE_DEX_NATIVE

/* genuine proxy handler */
// #define GENUINE_PROXY_CRASH
// #define GENUINE_PROXY_NATIVE

/* genuine error handler */
// #define GENUINE_ERROR_CRASH
#define GENUINE_ERROR_NATIVE

/* genuine fatal handler */
// #define GENUINE_FATAL_CRASH
#define GENUINE_FATAL_NATIVE

/* genuine noapk handler */
// #define GENUINE_NOAPK_CRASH
#define GENUINE_NOAPK_NATIVE
