/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "spi.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "st7789.h"

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_SPI1_Init();
  /* USER CODE BEGIN 2 */
	HAL_GPIO_WritePin(BLK_GPIO_Port, BLK_Pin, GPIO_PIN_SET);
	HAL_Delay(100);

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
	while (1) {
//		ST7789_Init(240, 240);
		ST7789_Init();
        ST7789_InversionMode(1);
		ST7789_rotation(2);
		// Инициализация входа для кнопки
		// Тест вывода основных цветов
		ST7789_Clear();
//        ST7789_FillScreen(BLACK);
		ST7789_SetBL(100);

//		uint16_t color = RGB565(255, 0, 0);
//		ST7789_FillScreen(color);
//		HAL_Delay(500);

//		color = RGB565(0, 255, 0);
//		ST7789_FillScreen(color);
//		HAL_Delay(500);

//		color = RGB565(50, 55, 50);
//		ST7789_FillScreen(color);
//		HAL_Delay(500);

//		color = RGB565(0, 0, 255);
//		ST7789_FillScreen(color);
//		HAL_Delay(500);

//		color = RGB565(255, 255, 0);
//		ST7789_FillScreen(color);
//		HAL_Delay(500);

//		color = RGB565(255, 0, 255);
//		ST7789_FillScreen(color);
//		HAL_Delay(500);

//		color = RGB565(0, 255, 255);
//		ST7789_FillScreen(color);
//		HAL_Delay(500);

//		color = RGB565(255, 255, 255);
//		ST7789_FillScreen(color);
//		HAL_Delay(500);

//		ST7789_FillScreen(BLACK);
//		ST7789_SetBL(100);

//		ST7789_FillScreen(0x0000);
//		ST7789_SetBL(100);

//		ST7789_DrawChar_5x8(100, 100, RGB565(0, 255, 255), RGB565(0, 0, 0), 0, 'A');
//		ST7789_DrawChar_7x11(60, 60, RGB565(0, 255, 255), RGB565(0, 0, 0), 0, 0xBB);
//
//

//		ST7789_print_5x8(10, 30, RGB565(0, 255, 255), RGB565(0, 0, 0), 0, "WELCOM");
//		ST7789_print_7x11(80, 80, RGB565(255, 255, 0), RGB565(0, 0, 0), 0, "WELCOM");

//        char str[30];
//        sprintf(str,"123");
//        ST7789_print(80, 120, RGB565(250, 250, 250), RGB565(0, 0, 0), 1, &Font_7x9, 2, str);

//============= 1

//l1:;

//		for (uint8_t x = 40; x < 200; x = x + 10) {
//			for (uint8_t y = 40; y < 200; y = y + 10) {
//				ST7789_DrawRectangleFilled(x + 1, y + 1, x + 9, y + 9, RGB565(255, 255, 0));
////				ST7789_DrawRectangle(x + 2, y + 2, x + 19, y + 19, RGB565(250, 250, 250));
//			}
//		}
//		HAL_Delay(2000);
//
//		for (uint8_t x = 40; x < 200; x = x + 10) {
//			for (uint8_t y = 40; y < 200; y = y + 10) {
//				ST7789_DrawRectangleFilled(x + 1, y + 1, x + 9, y + 9, RGB565(0, 0, 0));
////				ST7789_DrawRectangle(x + 2, y + 2, x + 19, y + 19, RGB565(250, 250, 250));
//			}
//		}

//		HAL_Delay(500);
//        goto l1;

//============= 2
		uint16_t x;
		uint16_t y;
		uint16_t z;
		uint16_t q;


//*********

//		for (uint8_t w = 0; w < 6; w++) {
//			if (w == 1) {z = 30;
//			} else {z = 0;
//			}
//			if (w > 1) {q = 30;
//			} else {q = 0;
//			}
//			if (w == 4) q = 60;

//			if (!(w & 1)) {
//				for (x = z; x < (z + 40); x = x + 10) {
//					for (y = q; y < (q + 10); y = y + 10) {
//						ST7789_DrawRectangle(x + 2, y + 2, x + 10, y + 10, RGB565(220, 150, 120)); // нижний квадрат
//						ST7789_DrawRectangleFilled(x + 2, y + 2, x + 8, y + 8, RGB565(250, 190, 150)); // верхний квадрат
////				    ST7789_DrawRectangleFilled(x + 3, y + 3, x + 12, y + 12, RGB565(250, 250, 0));
//					}
//				}
//			} else {
//				for (x = z; x < (z + 10); x = x + 10) {
//					for (y = q; y < (q + 40); y = y + 10) {
//						ST7789_DrawRectangle(x + 2, y + 2, x + 10, y + 10, RGB565(220, 150, 120)); // нижний квадрат
//						ST7789_DrawRectangleFilled(x + 2, y + 2, x + 8, y + 8, RGB565(250, 190, 150)); // верхний квадрат
////              ST7789_DrawRectangleFilled(x + 3, y + 3, x + 12, y + 12, RGB565(250, 250, 0));
//					}
//				}
//			}
//		}

/*
		for (uint8_t w = 0; w < 6; w++) {
			if (w == 1) {z = 90;
			} else {z = 60;
			}
			if (w > 1) {q = 30;
			} else {q = 0;
			}
			if (w == 4) q = 60;

			if (!(w & 1)) {
				for (x = z; x < (z + 40); x = x + 10) {
					for (y = q; y < (q + 10); y = y + 10) {
						ST7789_DrawRectangleFilled(x + 2, y + 2, x + 8, y + 8, RGB565(250, 190, 150));
//				    ST7789_DrawRectangleFilled(x + 3, y + 3, x + 12, y + 12, RGB565(250, 250, 0));
						ST7789_DrawRectangle(x + 1, y + 1, x + 10, y + 10, RGB565(220, 150, 120));
					}
				}
			} else {
				for (x = z; x < (z + 10); x = x + 10) {
					for (y = q; y < (q + 40); y = y + 10) {
						ST7789_DrawRectangleFilled(x + 2, y + 2, x + 8, y + 8, RGB565(250, 190, 150));
//              ST7789_DrawRectangleFilled(x + 3, y + 3, x + 12, y + 12, RGB565(250, 250, 0));
						ST7789_DrawRectangle(x + 1, y + 1, x + 10, y + 10, RGB565(220, 150, 120));
					}
				}
			}
		}

		for (uint8_t w = 0; w < 6; w++) {
			if (w == 1) {z = 150;
			} else {z = 120;
			}
			if (w > 1) {q = 30;
			} else {q = 0;
			}
			if (w == 4) q = 60;

			if (!(w & 1)) {
				for (x = z; x < (z + 40); x = x + 10) {
					for (y = q; y < (q + 10); y = y + 10) {
						ST7789_DrawRectangle(x + 2, y + 2, x + 9, y + 9, RGB565(220, 220, 220));
						ST7789_DrawRectangleFilled(x + 2, y + 2, x + 10, y + 9, RGB565(250, 0, 0));
//				    ST7789_DrawRectangleFilled(x + 3, y + 3, x + 12, y + 12, RGB565(250, 250, 0));
					}
				}
			} else {
				for (x = z; x < (z + 10); x = x + 10) {
					for (y = q; y < (q + 40); y = y + 10) {
						ST7789_DrawRectangle(x + 2, y + 2, x + 9, y + 9, RGB565(220, 220, 220));
						ST7789_DrawRectangleFilled(x + 2, y + 2, x + 10, y + 9, RGB565(250, 0, 0));
//              ST7789_DrawRectangleFilled(x + 3, y + 3, x + 12, y + 12, RGB565(250, 250, 0));
					}
				}
			}
		}
//

*/
/*
// большие квадраты
		for (uint8_t w = 0; w < 6; w++) {
			if (w == 1) {z = 30;
			} else {z = 0;
			}
			if (w > 1) {q = 30;
			} else {q = 0;
			}
			if (w == 4) q = 60;

			if (!(w & 1)) {
				for (x = z; x < (z + 45); x = x + 15) {
					for (y = q; y < (q + 15); y = y + 15) {
						ST7789_DrawRectangle(x + 2, y + 1, x + 13, y + 12, RGB565(250, 250, 250));
						ST7789_DrawRectangleFilled(x + 2, y + 2, x + 14, y + 13, RGB565(250, 100, 100));
//				        ST7789_DrawRectangleFilled(x + 3, y + 3, x + 12, y + 12, RGB565(250, 250, 0));
					}
				}
			} else {
				for (x = z; x < (z + 15); x = x + 15) {
					for (y = q; y < (q + 45); y = y + 15) {
						ST7789_DrawRectangle(x + 2, y + 1, x + 13, y + 12, RGB565(250, 250, 250));
						ST7789_DrawRectangleFilled(x + 2, y + 2, x + 14, y + 13, RGB565(250, 100, 100));
//                      ST7789_DrawRectangleFilled(x + 3, y + 3, x + 12, y + 12, RGB565(250, 250, 0));
					}
				}
			}
		}
*/ 
/*
		for (uint8_t w = 0; w < 6; w++) {
			if (w == 1) {z = 30;
			} else {z = 0;
			}
			if (w > 1) {q = 110;
			} else {q = 80;
			}
			if (w == 4) q = 140;

			if (!(w & 1)) {
				for (x = z; x < (z + 45); x = x + 15) {
					for (y = q; y < (q + 15); y = y + 15) {
						ST7789_DrawRectangle(x + 2, y + 1, x + 14, y + 12, RGB565(250, 250, 250));
						ST7789_DrawRectangleFilled(x + 2, y + 2, x + 15, y + 13, RGB565(0, 200, 0));
//				        ST7789_DrawRectangleFilled(x + 3, y + 3, x + 12, y + 12, RGB565(250, 250, 0));
					}
				}
			} else {
				for (x = z; x < (z + 15); x = x + 15) {
					for (y = q; y < (q + 45); y = y + 15) {
						ST7789_DrawRectangle(x + 2, y + 1, x + 14, y + 12, RGB565(250, 250, 250));
						ST7789_DrawRectangleFilled(x + 2, y + 2, x + 15, y + 13, RGB565(0, 200, 0));
//                      ST7789_DrawRectangleFilled(x + 3, y + 3, x + 12, y + 12, RGB565(250, 250, 0));
					}
				}
			}
		}

		for (uint8_t w = 0; w < 6; w++) {
			if (w == 1) {z = 30;
			} else {z = 0;
			}
			if (w > 1) {q = 190;
			} else {q = 160;
			}
			if (w == 4) q = 220;

			if (!(w & 1)) {
				for (x = z; x < (z + 45); x = x + 15) {
					for (y = q; y < (q + 15); y = y + 15) {
						ST7789_DrawRectangle(x + 2, y + 1, x + 14, y + 12, RGB565(250, 250, 250));
						ST7789_DrawRectangleFilled(x + 2, y + 2, x + 15, y + 13, RGB565(0, 200, 200));
//				        ST7789_DrawRectangleFilled(x + 3, y + 3, x + 12, y + 12, RGB565(250, 250, 0));
					}
				}
			} else {
				for (x = z; x < (z + 15); x = x + 15) {
					for (y = q; y < (q + 45); y = y + 15) {
						ST7789_DrawRectangle(x + 2, y + 1, x + 14, y + 12, RGB565(250, 250, 250));
						ST7789_DrawRectangleFilled(x + 2, y + 2, x + 15, y + 13, RGB565(0, 200, 200));
//                      ST7789_DrawRectangleFilled(x + 3, y + 3, x + 12, y + 12, RGB565(250, 250, 0));
					}
				}
			}
		}
*/
/*
		ST7789_Digit_7seg(0, 0, 2, RGB565(250, 100, 100));
		ST7789_Digit_7seg(60, 0, 0, RGB565(250, 100, 100));
		ST7789_Digit_7seg(120, 0,8, RGB565(250, 100, 100));
		ST7789_Digit_7seg(180, 0, 3, RGB565(250, 100, 100));

		ST7789_Digit_7seg(0, 80, 2, RGB565(0, 220, 0));
		ST7789_Digit_7seg(60, 80, 0, RGB565(0, 220, 0));
		ST7789_Digit_7seg(120, 80,8, RGB565(0, 220, 0));
		ST7789_Digit_7seg(180, 80, 3, RGB565(0, 220, 0));

		ST7789_Digit_7seg(0, 160, 2, RGB565(0, 210, 210));
		ST7789_Digit_7seg(60, 160, 0, RGB565(0, 210, 210));
		ST7789_Digit_7seg(120, 160,8, RGB565(0, 210, 210));
		ST7789_Digit_7seg(180, 160, 3, RGB565(0, 210, 210));
*/
		char str[10];
		for (int16_t j = 0; j < 10; j++) {
			ST7789_Digit_7seg_1(2, 0, j, RGB565(250, 100, 100));
			ST7789_Digit_7seg_1(60, 0, j, RGB565(250, 100, 100));
			ST7789_Digit_7seg_1(120, 0, j, RGB565(250, 100, 100));
			sprintf(str,"VOLT");
//			ST7789_DrawChar( 200, 28, RGB565(250, 100, 100) , RGB565( 0, 0, 0 ) , 0, &Font_6x8, 3, 'V' );
			ST7789_print( 180, 0, RGB565(250, 100, 100) , RGB565(0, 0, 0) , 1, &Font_6x8, 2, str );
//			sprintf(str,"U=250");
//			ST7789_print( 180, 18, RGB565(220, 220, 220) , RGB565(0, 0, 0) , 1, &Font_6x8, 2, str );
//			sprintf(str,"u=170");
//			ST7789_print( 180, 36, RGB565(220, 220, 220) , RGB565(0, 0, 0) , 1, &Font_6x8, 2, str );
//			sprintf(str,"C=60");
//			ST7789_print( 180, 54, RGB565(220, 220, 220) , RGB565(0, 0, 0) , 1, &Font_6x8, 2, str );

			ST7789_Digit_7seg_1(2, 84, j, RGB565(0, 220, 0));
			ST7789_Digit_7seg_1(60, 84, j, RGB565(0, 220, 0));
			ST7789_Digit_7seg_1(120, 84, j, RGB565(0, 220, 0));
			sprintf(str,"AMPERE");
//			ST7789_DrawChar( 200, 112, RGB565(0, 220, 0) , RGB565( 0, 0, 0 ) , 0, &Font_6x8, 5, 'A' );
			ST7789_print( 180, 84, RGB565(0, 220, 0) , RGB565(0, 0, 0) , 1, &Font_6x8, 2, str );

			ST7789_Digit_7seg_1(2, 168, j, RGB565(0, 210, 210));
			ST7789_Digit_7seg_1(60, 168, j, RGB565(0, 210, 210));
			ST7789_Digit_7seg_1(120, 168, j, RGB565(0, 210, 210));
			sprintf(str,"POWER");
//			ST7789_DrawChar( 200, 196, RGB565(0, 210, 210) , RGB565( 0, 0, 0 ) , 0, &Font_6x8, 5, 'W' );
			ST7789_print( 180, 168, RGB565(0, 210, 210) , RGB565(0, 0, 0) , 1, &Font_6x8, 2, str );

			HAL_Delay(1000);
		}


//        }
// маленькие квадраты
/*        
		for (uint8_t w = 0; w < 6; w++) {
			if (w == 1) {z = 30;
			} else {z = 0;
			}
			if (w > 1) {q = 113;
			} else {q = 83;
			}
			if (w == 4) q = 143;

			if (!(w & 1)) {
				for (x = z; x < (z + 40); x = x + 10) {
					for (y = q; y < (q + 10); y = y + 10) {
						ST7789_DrawRectangle(x + 2, y + 2, x + 10, y + 10, RGB565(210, 210, 70));
						ST7789_DrawRectangleFilled(x + 2, y + 2, x + 8, y + 8, RGB565(240, 240, 100));
//				        ST7789_DrawRectangleFilled(x + 3, y + 3, x + 12, y + 12, RGB565(250, 250, 0));
					}
				}
			} else {
				for (x = z; x < (z + 10); x = x + 10) {
					for (y = q; y < (q + 40); y = y + 10) {
						ST7789_DrawRectangle(x + 2, y + 2, x + 10, y + 10, RGB565(210, 210, 70));
						ST7789_DrawRectangleFilled(x + 2, y + 2, x + 8, y + 8, RGB565(240, 240, 100));
//                      ST7789_DrawRectangleFilled(x + 3, y + 3, x + 12, y + 12, RGB565(250, 250, 0));
					}
				}
			}
		}

		for (uint8_t w = 0; w < 6; w++) {
			if (w == 1) {z = 30;
			} else {z = 0;
			}
			if (w > 1) {q = 196;
			} else {q = 166;
			}
			if (w == 4) q = 226;

			if (!(w & 1)) {
				for (x = z; x < (z + 40); x = x + 10) {
					for (y = q; y < (q + 10); y = y + 10) {
						ST7789_DrawRectangle(x + 1, y + 1, x + 9, y + 9, RGB565(180, 220, 90));
						ST7789_DrawRectangleFilled(x + 2, y + 2, x + 8, y + 8, RGB565(110, 250, 110));
//				    ST7789_DrawRectangleFilled(x + 3, y + 3, x + 12, y + 12, RGB565(250, 250, 0));
					}
				}
			} else {
				for (x = z; x < (z + 10); x = x + 10) {
					for (y = q; y < (q + 40); y = y + 10) {
						ST7789_DrawRectangle(x + 1, y + 1, x + 9, y + 9, RGB565(180, 220, 90));
						ST7789_DrawRectangleFilled(x + 2, y + 2, x + 8, y + 8, RGB565(110, 250, 110));
//              ST7789_DrawRectangleFilled(x + 3, y + 3, x + 12, y + 12, RGB565(250, 250, 0));
					}
				}
			}
		}
*/


//============= 3


//		for (uint8_t x = 0; x < 240; x++) {
//			ST7789_DrawLine(120, 120, x, 239, RGB565(0, x + 10, 0));
//		}

//		for (uint8_t y = 0; y < 240; y++) {
//			ST7789_DrawLine(120, 120, 0, y, RGB565(0, 0, y + 10));
//		}

//		for (uint8_t x = 0; x < 240; x++) {
//			ST7789_DrawLine(120, 120, x, 0, RGB565(x + 10, x + 10, x + 10));
//		}
//		HAL_Delay(1000);

//		ST7789_FillScreen(BLACK);
//		ST7789_SetBL(100);

//		for (uint8_t x = 0; x < 240; x = x + 20) {
//			for (uint8_t y = 0; y < 240; y = y + 20) {
//				ST7789_DrawRectangleFilled(x + 3, y + 3, x + 17, y + 17, RGB565(x, y, 0));
//				ST7789_DrawRectangle(x + 2, y + 2, x + 19, y + 19, RGB565(250, 250, 250));
//			}
//		}
//		HAL_Delay(1000);

//		ST7789_FillScreen(BLACK);
//		ST7789_SetBL(100);

//		for (uint8_t x = 0; x < 240; x = x + 20) {
//			for (uint8_t y = 0; y < 240; y = y + 20) {
//				ST7789_DrawCircleFilled(x + 10, y + 10, 8, RGB565(x, y, 0));
//				ST7789_DrawCircle(x + 10, y + 10, 9, RGB565(0, y, x));
//			}
//		}
		HAL_Delay(10000);
		ST7789_Clear();

//        while (1) {}

//		ST7789_FillScreen(BLACK);
//		ST7789_SetBL(100);

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
	}
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL12;
  RCC_OscInitStruct.PLL.PREDIV = RCC_PREDIV_DIV1;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_1) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
	/* User can add his own implementation to report the HAL error return state */

//	__disable_irq();
//	while (1) {}
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
	/* User can add his own implementation to report the file name and line number,
	   ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
