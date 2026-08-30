/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

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
#define GD_EN_6_Pin GPIO_PIN_13
#define GD_EN_6_GPIO_Port GPIOC
#define GD_EN_7_Pin GPIO_PIN_14
#define GD_EN_7_GPIO_Port GPIOC
#define GD_EN_8_Pin GPIO_PIN_15
#define GD_EN_8_GPIO_Port GPIOC
#define RSEL1_Pin GPIO_PIN_0
#define RSEL1_GPIO_Port GPIOC
#define RSEL2_Pin GPIO_PIN_1
#define RSEL2_GPIO_Port GPIOC
#define RSEL3_Pin GPIO_PIN_2
#define RSEL3_GPIO_Port GPIOC
#define RSEL4_Pin GPIO_PIN_3
#define RSEL4_GPIO_Port GPIOC
#define GD_EN_1_Pin GPIO_PIN_8
#define GD_EN_1_GPIO_Port GPIOC
#define GD_EN_2_Pin GPIO_PIN_9
#define GD_EN_2_GPIO_Port GPIOC
#define GD_EN_3_Pin GPIO_PIN_10
#define GD_EN_3_GPIO_Port GPIOC
#define GD_EN_4_Pin GPIO_PIN_11
#define GD_EN_4_GPIO_Port GPIOC
#define GD_EN_5_Pin GPIO_PIN_12
#define GD_EN_5_GPIO_Port GPIOC

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
