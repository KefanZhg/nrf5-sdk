/**
 * Copyright (c) 2016 - 2021, Nordic Semiconductor ASA
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form, except as embedded into a Nordic
 *    Semiconductor ASA integrated circuit in a product or a software update for
 *    such product, must reproduce the above copyright notice, this list of
 *    conditions and the following disclaimer in the documentation and/or other
 *    materials provided with the distribution.
 *
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * 4. This software, with or without modification, must only be used with a
 *    Nordic Semiconductor ASA integrated circuit.
 *
 * 5. Any software provided in binary form under this license must not be reverse
 *    engineered, decompiled, modified and/or disassembled.
 *
 * THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
#ifndef KIK0001_H
#define KIK0001_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nrf_gpio.h"

// LEDs definitions for CUSTOM_BOARD
#define LEDS_NUMBER    1

#define LED_1          NRF_GPIO_PIN_MAP(1,14)

#define LEDS_ACTIVE_STATE 0

#define LEDS_LIST { LED_1 }

#define LEDS_INV_MASK  LEDS_MASK

#define BSP_LED_1      LED_1

// Buttons
#define BUTTONS_NUMBER 1

#define BUTTON_1       NRF_GPIO_PIN_MAP(0,8)

#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

#define BUTTONS_ACTIVE_STATE 0

#define BUTTONS_LIST { BUTTON_1 }

#define BSP_BUTTON_1   BUTTON_1

#ifdef APP_CONFIG_RX_PIN_NUMBER
#define RX_PIN_NUMBER  APP_CONFIG_RX_PIN_NUMBER
#else
#define RX_PIN_NUMBER  6
#endif
#ifdef APP_CONFIG_TX_PIN_NUMBER
#define TX_PIN_NUMBER  APP_CONFIG_TX_PIN_NUMBER
#else
#define TX_PIN_NUMBER  26
#endif

#define HWFC           false

#define BSP_QSPI_SCK_PIN   NRF_GPIO_PIN_MAP(1,13)
#define BSP_QSPI_CSN_PIN   NRF_GPIO_PIN_MAP(1,8)
#define BSP_QSPI_IO0_PIN   NRF_GPIO_PIN_MAP(1,15)
#define BSP_QSPI_IO1_PIN   NRF_GPIO_PIN_MAP(0,7)
#define BSP_QSPI_IO2_PIN   NRF_GPIO_PIN_MAP(0,27)
#define BSP_QSPI_IO3_PIN   NRF_GPIO_PIN_MAP(1,10)


#ifdef __cplusplus
}
#endif

#endif // KIK0001_H
