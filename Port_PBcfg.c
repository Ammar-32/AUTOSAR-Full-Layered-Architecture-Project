/******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Source file for TM4C123GH6PM Microcontroller - Port Driver.
 *
 * Author: Ammar Moataz
 ******************************************************************************/

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION (1U)
#define PORT_PBCFG_SW_MINOR_VERSION (0U)
#define PORT_PBCFG_SW_PATCH_VERSION (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION (3U)

#include "Port.h"

/* AUTOSAR Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION) || (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION) || (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
#error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION) || (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION) || (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
#error "The SW version of PBcfg.c does not match the expected version"
#endif

/* PB structure used with Port_Init API */
const Port_ConfigType Port_PinConfigArray = {
	/* PA0 */
	PORT_PortA, PORT_Pin0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PA1 */
	PORT_PortA, PORT_Pin1, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PA2 */
	PORT_PortA, PORT_Pin2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PA3 */
	PORT_PortA, PORT_Pin3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PA4 */
	PORT_PortA, PORT_Pin4, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PA5 */
	PORT_PortA, PORT_Pin5, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PA6 */
	PORT_PortA, PORT_Pin6, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PA7 */
	PORT_PortA, PORT_Pin7, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,

	/* PB0 */
	PORT_PortB, PORT_Pin0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PB1 */
	PORT_PortB, PORT_Pin1, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PB2 */
	PORT_PortB, PORT_Pin2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PB3 */
	PORT_PortB, PORT_Pin3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PB4 */
	PORT_PortB, PORT_Pin4, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PB5 */	
	PORT_PortB, PORT_Pin5, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PB6 */
	PORT_PortB, PORT_Pin6, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PB7 */
	PORT_PortB, PORT_Pin7, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,

	/* PC0 */
	PORT_PortC, PORT_Pin0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PC1 */
	PORT_PortC, PORT_Pin1, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PC2 */
	PORT_PortC, PORT_Pin2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PC3 */
	PORT_PortC, PORT_Pin3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PC4 */
	PORT_PortC, PORT_Pin4, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PC5 */
	PORT_PortC, PORT_Pin5, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PC6 */
	PORT_PortC, PORT_Pin6, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PC7 */
	PORT_PortC, PORT_Pin7, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,

	/* PD0 */
	PORT_PortD, PORT_Pin0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PD1 */
	PORT_PortD, PORT_Pin1, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PD2 */
	PORT_PortD, PORT_Pin2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PD3 */
	PORT_PortD, PORT_Pin3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PD4 */
	PORT_PortD, PORT_Pin4, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PD5 */
	PORT_PortD, PORT_Pin5, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PD6 */
	PORT_PortD, PORT_Pin6, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PD7 */
	PORT_PortD, PORT_Pin7, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,

	/* PE0 */
	PORT_PortE, PORT_Pin0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PE1 */
	PORT_PortE, PORT_Pin1, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PE2 */
	PORT_PortE, PORT_Pin2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PE3 */
	PORT_PortE, PORT_Pin3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PE4 */
	PORT_PortE, PORT_Pin4, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PE5 */
	PORT_PortE, PORT_Pin5, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,

	/* PF0 */
	PORT_PortF, PORT_Pin0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PF1 */
	PORT_PortF, PORT_Pin1, PORT_PIN_OUT, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PF2 */
	PORT_PortF, PORT_Pin2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PF3 */
	PORT_PortF, PORT_Pin3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, GPIO_MODE, STD_ON, STD_ON,
	/* PF4 */
	PORT_PortF, PORT_Pin4, PORT_PIN_IN, PULL_UP, PORT_PIN_LEVEL_HIGH, GPIO_MODE, STD_OFF, STD_OFF
	};