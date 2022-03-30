/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define HI_A_Pin GPIO_PIN_0
#define HI_A_GPIO_Port GPIOF
#define HI_B_Pin GPIO_PIN_1
#define HI_B_GPIO_Port GPIOF
#define HALL_A_Pin GPIO_PIN_1
#define HALL_A_GPIO_Port GPIOA
#define VCP_TX_Pin GPIO_PIN_2
#define VCP_TX_GPIO_Port GPIOA
#define HALL_B_Pin GPIO_PIN_3
#define HALL_B_GPIO_Port GPIOA
#define HALL_C_Pin GPIO_PIN_4
#define HALL_C_GPIO_Port GPIOA
#define LIN_B_Pin GPIO_PIN_0
#define LIN_B_GPIO_Port GPIOB
#define LIN_C_Pin GPIO_PIN_1
#define LIN_C_GPIO_Port GPIOB
#define HIN_A_Pin GPIO_PIN_8
#define HIN_A_GPIO_Port GPIOA
#define LIN_A_Pin GPIO_PIN_11
#define LIN_A_GPIO_Port GPIOA
#define HALL_XOR_Pin GPIO_PIN_12
#define HALL_XOR_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define VCP_RX_Pin GPIO_PIN_15
#define VCP_RX_GPIO_Port GPIOA
#define CTRL_C_Pin GPIO_PIN_3
#define CTRL_C_GPIO_Port GPIOB
#define CTRL_A_Pin GPIO_PIN_4
#define CTRL_A_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
