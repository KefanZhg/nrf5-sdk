#ifndef APP_CONFIG_H
#define APP_CONFIG_H

#include "stdint.h"

#if defined(BOARD_KIK0001)
#define APP_CONFIG_RX_PIN_NUMBER  6
#define APP_CONFIG_TX_PIN_NUMBER  26
#elif defined(BOARD_PCA10056)
#define APP_CONFIG_RX_PIN_NUMBER  8
#define APP_CONFIG_TX_PIN_NUMBER  6
#endif

#define NRF_LOG_BACKEND_UART_RX_PIN APP_CONFIG_RX_PIN_NUMBER
#define NRF_LOG_BACKEND_UART_TX_PIN APP_CONFIG_TX_PIN_NUMBER

// #define HCI_UART_RX_PIN APP_CONFIG_RX_PIN_NUMBER
// #define HCI_UART_TX_PIN APP_CONFIG_TX_PIN_NUMBER


// #define TMAG5170_HI_THRESH X_THRX_CONFIG_X_HI_THRESHOLD_5FS
// #define TMAG5170_LO_THRESH X_THRX_CONFIG_X_LO_THRESHOLD_5FS

// #define HIGH 1
// #define LOW  0

// #define delay_us(n) nrf_delay_us(n)
// #define delay_ms(n) nrf_delay_ms(n)

// #define setCS(n)             nrf_gpio_pin_write(0, n)
// #define setALERT(n)          nrf_gpio_pin_write(0, n)

// <323584=> 1200 baud 
// <643072=> 2400 baud 
// <1290240=> 4800 baud 
// <2576384=> 9600 baud 
// <3862528=> 14400 baud 
// <5152768=> 19200 baud 
// <7716864=> 28800 baud 
// <10289152=> 38400 baud 
// <15400960=> 57600 baud 
// <20615168=> 76800 baud 
// <30801920=> 115200 baud 
// <61865984=> 230400 baud 
// <67108864=> 250000 baud 
// <121634816=> 460800 baud 
// <251658240=> 921600 baud 
// <268435456=> 1000000 baud 
#define APP_CONFIG_DEFAULT_UART_BAUDRATE 268435456

#define NRFX_UARTE_DEFAULT_CONFIG_BAUDRATE APP_CONFIG_DEFAULT_UART_BAUDRATE
#define NRFX_UART_DEFAULT_CONFIG_BAUDRATE APP_CONFIG_DEFAULT_UART_BAUDRATE
#define UART_DEFAULT_CONFIG_BAUDRATE APP_CONFIG_DEFAULT_UART_BAUDRATE
#define NRF_LOG_BACKEND_UART_BAUDRATE APP_CONFIG_DEFAULT_UART_BAUDRATE
// #define HCI_UART_BAUDRATE APP_CONFIG_DEFAULT_UART_BAUDRATE

// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 
#define NRF_LOG_DEFAULT_LEVEL 4

#ifndef __printf_tag_ptr
#define __printf_tag_ptr FILE*
#endif

// Make sure peripheral is enabled

// // TWI
// #define TWI_ENABLED 1
// #define TWI0_ENABLED 1
// #define TWI0_USE_EASY_DMA 1
// #define NRFX_TWI_ENABLED 1
// #define NRFX_TWIM_ENABLED 1
// #define NRFX_TWI0_ENABLED 1
// #define NRFX_TWIM0_ENABLED 1
// #define NRFX_TWIM_CONFIG_LOG_ENABLED 1
// #define NRFX_TWIM_CONFIG_LOG_LEVEL 4
// #define NRFX_TWIM_CONFIG_INFO_COLOR 3
// #define NRFX_TWIM_CONFIG_DEBUG_COLOR 7

#define ARDUINO_SCL_PIN 17
#define ARDUINO_SDA_PIN 13


#endif // APP_CONFIG_H
