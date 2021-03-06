// DEFINES go here
#define TRUE            1
#define FALSE           0
#define BOOL unsigned char

#define CONFIG_LED1()   CONFIG_RF4_AS_DIG_OUTPUT()
#define CONFIG_LED2()   CONFIG_RB14_AS_DIG_OUTPUT()
#define CONFIG_LED3()   CONFIG_RB15_AS_DIG_OUTPUT()
#define LED1            _LATF4
#define LED2            _LATB14
#define LED3            _LATB15

#define CONFIG_SW1()    {   CONFIG_RB13_AS_DIG_INPUT(); \
                            ENABLE_RB13_PULLUP(); \
                            DELAY_US( 1 ); \
                        }
#define CONFIG_SW2()    {   CONFIG_RB12_AS_DIG_INPUT(); \
                            ENABLE_RB12_PULLUP(); \
                            DELAY_US( 1 ); \
                        }
#define CONFIG_SW3()    {   CONFIG_RC15_AS_DIG_INPUT(); \
                            ENABLE_RC15_PULLUP(); \
                            DELAY_US( 1 ); \
                        }
#define CONFIG_RPG()    {   CONFIG_RB8_AS_DIG_INPUT(); \
                            CONFIG_RB9_AS_DIG_INPUT(); \
                            ENABLE_RB8_PULLUP(); \
                            ENABLE_RB9_PULLUP(); \
                            DELAY_US( 1 ); \
                        }
#define CONFIG_POT()    {   ENABLE_RB2_ANALOG(); \
                            CONFIG_RB2_AS_INPUT(); \
                            DELAY_US( 1 ); \
                        }
#define CONFIG_TEMP()   {   ENABLE_RB3_ANALOG(); \
                            CONFIG_RB3_AS_INPUT(); \
                            DELAY_US( 1 ); \
                        }
#define SW1             _RB13
#define SW2             _RB12
#define SW3             _RC15
#define RPGA            _RB8
#define RPGB            _RB9
#define POT             _RB2
#define TEMP            _RB3

#define POT_ADC_CHANNEL     2
#define TEMP_ADC_CHANNEL    3