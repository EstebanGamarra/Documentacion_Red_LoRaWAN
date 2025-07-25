// project-specific definitions
//#define CFG_eu868 1
#define CFG_us915 1
//#define CFG_au915 1
//#define CFG_as923 1
// #define LMIC_COUNTRY_CODE LMIC_COUNTRY_CODE_JP      /* for as923-JP; also define CFG_as923 */
//#define CFG_kr920 1
//#define CFG_in866 1
#define CFG_sx1276_radio 1
//#define LMIC_USE_INTERRUPTS

//agregamos esta linea
#define LMIC_LORAWAN_SPEC_VERSION LMIC_LORAWAN_SPEC_VERSION_1_0_2
//
#define DISABLE_PING
#define DISABLE_BEACONS
//#define LMIC_DEBUG_LEVEL 0 //comentamos
//#define USE_IDEETRON_AES //comentamos
//Y esta otra
#define LMIC_ENABLE_DeviceTimeReq 0