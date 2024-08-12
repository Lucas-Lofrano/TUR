/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BLUE_LED_Pin GPIO_PIN_13
#define BLUE_LED_GPIO_Port GPIOC
#define START_CP_Pin GPIO_PIN_0
#define START_CP_GPIO_Port GPIOA
#define START_CP_EXTI_IRQn EXTI0_IRQn
#define FIRST_CP_Pin GPIO_PIN_1
#define FIRST_CP_GPIO_Port GPIOA
#define FIRST_CP_EXTI_IRQn EXTI1_IRQn
#define SECOND_CP_Pin GPIO_PIN_2
#define SECOND_CP_GPIO_Port GPIOA
#define SECOND_CP_EXTI_IRQn EXTI2_IRQn
#define THIRD_CP_Pin GPIO_PIN_3
#define THIRD_CP_GPIO_Port GPIOA
#define THIRD_CP_EXTI_IRQn EXTI3_IRQn
#define FINISH_CP_Pin GPIO_PIN_4
#define FINISH_CP_GPIO_Port GPIOA
#define FINISH_CP_EXTI_IRQn EXTI4_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
