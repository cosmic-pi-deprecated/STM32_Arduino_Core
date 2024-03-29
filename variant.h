/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/
#include "PeripheralPins.h"

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/
extern const PinName digitalPin[];

#define PA3  0
#define PA2  1
#define PA10 2
#define PB3  3
#define PB5  4
#define PB4  5
#define PB10 6
#define PA8  7
#define PA9  8
#define PC7  9
#define PB6  10
#define PA7  11 // A6
#define PA6  12 // A7
#define PA5  13
#define PB9  14
#define PB8  15
// ST Morpho
// CN7 Left Side
#define PC10 16
#define PC12 17
// 18 is NC - BOOT0
#define PA13 19 // SWD
#define PA14 20 // SWD
#define PA15 21
#define PB7  22
#define PC13 23
#define PC14 24
#define PC15 25
#define PH0  26
#define PH1  27
#define PC2  28 // A8
#define PC3  29 // A9
// CN7 Right Side
#define PC11 30
#define PD2  31
// CN10 Left Side
#define PC9  32
// CN10 Right side
#define PC8  33
#define PC6  34
#define PC5  35 // A10
#define PA12 36
#define PA11 37
#define PB12 38
#define PB11 39
#define PB2  40
#define PB1  41 // A11
#define PB15 42
#define PB14 43
#define PB13 44
#define PC4  45 // A12
#define PA0  46 // A0
#define PA1  47 // A1
#define PA4  48 // A2
#define PB0  49 // A3
#define PC1  50 // A4
#define PC0  51 // A5

#define BaroInt_Pin GPIO_PIN_13
#define BaroInt_GPIO_Port GPIOC
#define AccelInt1_Pin GPIO_PIN_14
#define AccelInt1_GPIO_Port GPIOC
#define AccelInt2_Pin GPIO_PIN_15
#define AccelInt2_GPIO_Port GPIOC
#define MAX1932__CL1_Pin GPIO_PIN_1
#define MAX1932__CL1_GPIO_Port GPIOC
#define MAX1932__CL2_Pin GPIO_PIN_2
#define MAX1932__CL2_GPIO_Port GPIOC
#define CH0_ADC_Pin GPIO_PIN_0
#define CH0_ADC_GPIO_Port GPIOA
#define CH1_ADC_Pin GPIO_PIN_1
#define CH1_ADC_GPIO_Port GPIOA
#define TX_TO_PIRX_Pin GPIO_PIN_2
#define TX_TO_PIRX_GPIO_Port GPIOA
#define RX_TO_PITX_Pin GPIO_PIN_3
#define RX_TO_PITX_GPIO_Port GPIOA
#define EVT_Led_Pin GPIO_PIN_4
#define EVT_Led_GPIO_Port GPIOA
#define GPS_PPS_and_ON_Pin GPIO_PIN_5
#define GPS_PPS_and_ON_GPIO_Port GPIOA
#define INJ_LED_Pin GPIO_PIN_6
#define INJ_LED_GPIO_Port GPIOA
#define BIASFB1_Pin GPIO_PIN_7
#define BIASFB1_GPIO_Port GPIOA
#define BIASFB2_Pin GPIO_PIN_0
#define BIASFB2_GPIO_Port GPIOB
#define FLAG_Pin GPIO_PIN_1
#define FLAG_GPIO_Port GPIOB
#define TRIG_OUT_Pin GPIO_PIN_10
#define TRIG_OUT_GPIO_Port GPIOB
#define Baro_SA0_Pin GPIO_PIN_14
#define Baro_SA0_GPIO_Port GPIOB
#define ACCEL_SD0_Pin GPIO_PIN_15
#define ACCEL_SD0_GPIO_Port GPIOB
#define HVPSU_CS2_Pin GPIO_PIN_7
#define HVPSU_CS2_GPIO_Port GPIOC
#define HVPSU_CS1_Pin GPIO_PIN_8
#define HVPSU_CS1_GPIO_Port GPIOC
#define MAG_INT_Pin GPIO_PIN_9
#define MAG_INT_GPIO_Port GPIOC
#define SCL1_SLAVE_Pin GPIO_PIN_8
#define SCL1_SLAVE_GPIO_Port GPIOA
#define RX_TO_GPSTX_Pin GPIO_PIN_10
#define RX_TO_GPSTX_GPIO_Port GPIOA
#define GPS_PPS_Pin GPIO_PIN_15
#define GPS_PPS_GPIO_Port GPIOA
#define STRIGOUT_B_Pin GPIO_PIN_11
#define STRIGOUT_B_GPIO_Port GPIOC
#define STRIGOUT_A_Pin GPIO_PIN_12
#define STRIGOUT_A_GPIO_Port GPIOC
#define SDA1_SLAVE_Pin GPIO_PIN_4
#define SDA1_SLAVE_GPIO_Port GPIOB
#define TX_TO_GPSRX_Pin GPIO_PIN_6
#define TX_TO_GPSRX_GPIO_Port GPIOB
#define SDA0_MASTER_Pin GPIO_PIN_7
#define SDA0_MASTER_GPIO_Port GPIOB
#define SCL0_MASTER_Pin GPIO_PIN_8
#define SCL0_MASTER_GPIO_Port GPIOB

// This must be a literal
#define NUM_DIGITAL_PINS        59
// This must be a literal with a value less than or equal to to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       13
#define NUM_ANALOG_FIRST        46

// On-board LED pin number
#define LED_BUILTIN             13
#define LED_GREEN               LED_BUILTIN

// On-board user button
#define USER_BTN                PC13

// Timer Definitions
// Do not use timer used by PWM pins when possible. See PinMap_PWM.
#define TIMER_TONE              TIM10

// Do not use basic timer: OC is required
#define TIMER_SERVO             TIM2  //TODO: advanced-control timers don't work

// UART Definitions
#define SERIAL_UART_INSTANCE    2 //Connected to ST-Link

// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata
#define PIN_SERIAL_RX           0
#define PIN_SERIAL_TX           1

#ifdef __cplusplus
} // extern "C"
#endif
/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
#define SERIAL_PORT_MONITOR     Serial
#define SERIAL_PORT_HARDWARE    Serial
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
