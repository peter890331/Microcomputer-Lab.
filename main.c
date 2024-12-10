/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"
#include "main.h"
#include "lcd.h"
#include "number.h"
#include "stdlib.h"
#include "stdio.h"

#ifdef __GNUC__
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* Private variables ---------------------------------------------------------*/
UART_HandleTypeDef huart1;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
ADC_HandleTypeDef hadc1;
/* USER CODE BEGIN PV */
/* Private variables ---------------------------------------------------------*/
static GPIO_InitTypeDef  GPIO_InitStruct;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
///////////////////////////////////////////////////////////////////////////////////////////////////
static void MX_USART1_UART_Init(void); //+codeAa-E?Y-n|33o|a
///////////////////////////////////////////////////////////////////////////////////////////////////
static void MX_ADC1_Init(void);

int main(void)
{
  int z;
  int x=0;
	
  GPIO_InitStruct.Pin	= TAMPER_BUTTON_PIN;
  GPIO_InitStruct.Mode  = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull  = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;	
  HAL_GPIO_Init(TAMPER_BUTTON_GPIO_PORT, &GPIO_InitStruct);
  TAMPER_BUTTON_GPIO_CLK_ENABLE();
	
  GPIO_InitStruct.Pin	= WAKEUP_BUTTON_PIN;
  GPIO_InitStruct.Mode  = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull  = GPIO_PULLDOWN;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;	
  HAL_GPIO_Init(WAKEUP_BUTTON_GPIO_PORT, &GPIO_InitStruct);
	
  WAKEUP_BUTTON_GPIO_CLK_ENABLE();

  GPIO_InitStruct.Pin	= WAKEUP_BUTTON_PIN;
  GPIO_InitStruct.Mode  = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull  = GPIO_PULLDOWN;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;	
  HAL_GPIO_Init(WAKEUP_BUTTON_GPIO_PORT, &GPIO_InitStruct);
	
  WAKEUP_BUTTON_GPIO_CLK_ENABLE();
  #define c GPIOA
  #define v GPIO_PIN_0    
  #define n GPIOC
  #define m GPIO_PIN_13

  HAL_Init();

  /* Configure the system clock */
  SystemClock_Config();
  #if 0
  LED1_GPIO_CLK_ENABLE();
  LED2_GPIO_CLK_ENABLE();
  LED3_GPIO_CLK_ENABLE();
  LED4_GPIO_CLK_ENABLE();

  GPIO_InitStruct.Pin = LED1_PIN;
  GPIO_InitStruct.Pin = LED2_PIN;
  GPIO_InitStruct.Pin = LED3_PIN;
  GPIO_InitStruct.Pin = LED4_PIN;

  GPIO_InitStruct.Mode= GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull= GPIO_PULLUP;
  GPIO_InitStruct.Speed=GPIO_SPEED_FREQ_HIGH;

  HAL_GPIO_Init(LED1_GPIO_PORT, &GPIO_InitStruct);
  HAL_GPIO_Init(LED2_GPIO_PORT, &GPIO_InitStruct);
  HAL_GPIO_Init(LED3_GPIO_PORT, &GPIO_InitStruct);
  HAL_GPIO_Init(LED4_GPIO_PORT, &GPIO_InitStruct);	
  #endif
  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  ////////////////////////////////////////////////////////////////////////
  MX_USART1_UART_Init(); 
  //////////////////////////////////////////////////////////////////////////
  MX_ADC1_Init();
  LCD_Init();
  LCD_Clear();
		
	start:
	if(HAL_GPIO_ReadPin(c, v)){	
		while (x==0){
		z=rand()%50;
				if(z==0)
					LCD_Draw_Logo(Logo0);
				else if(z==1)
					LCD_Draw_Logo(Logo1);		
				else if(z==2)
					LCD_Draw_Logo(Logo2);
				else if(z==3)
					LCD_Draw_Logo(Logo3);
				else if(z==4)
					LCD_Draw_Logo(Logo4);
				else if(z==5)
					LCD_Draw_Logo(Logo5);
				else if(z==6)
					LCD_Draw_Logo(Logo6);
				else if(z==7)
					LCD_Draw_Logo(Logo7);
				else if(z==8)
					LCD_Draw_Logo(Logo8);
				else if(z==9)
					LCD_Draw_Logo(Logo9);
				else if(z==10)
					LCD_Draw_Logo(Logo10);
				else if(z==11)
					LCD_Draw_Logo(Logo11);
				else if(z==12)
					LCD_Draw_Logo(Logo12);
				else if(z==13)
					LCD_Draw_Logo(Logo13);
				else if(z==14)
					LCD_Draw_Logo(Logo14);
				else if(z==15)
					LCD_Draw_Logo(Logo15);
				else if(z==16)
					LCD_Draw_Logo(Logo16);
				else if(z==17)
					LCD_Draw_Logo(Logo17);
				else if(z==18)
					LCD_Draw_Logo(Logo18);
				else if(z==19)
					LCD_Draw_Logo(Logo19);
				else if(z==20)
					LCD_Draw_Logo(Logo20);
				else if(z==21)
					LCD_Draw_Logo(Logo21);
				else if(z==22)
					LCD_Draw_Logo(Logo22);
				else if(z==23)
					LCD_Draw_Logo(Logo23);
				else if(z==24)
					LCD_Draw_Logo(Logo24);
				else if(z==25)
					LCD_Draw_Logo(Logo25);
				else if(z==26)
					LCD_Draw_Logo(Logo26);
				else if(z==27)
					LCD_Draw_Logo(Logo27);
				else if(z==28)
					LCD_Draw_Logo(Logo28);
				else if(z==29)
					LCD_Draw_Logo(Logo29);
				else if(z==30)
					LCD_Draw_Logo(Logo30);
				else if(z==31)
					LCD_Draw_Logo(Logo31);
				else if(z==32)
					LCD_Draw_Logo(Logo32);
				else if(z==33)
					LCD_Draw_Logo(Logo33);
				else if(z==34)
					LCD_Draw_Logo(Logo34);
				else if(z==35)
					LCD_Draw_Logo(Logo35);
				else if(z==36)
					LCD_Draw_Logo(Logo36);
				else if(z==37)
					LCD_Draw_Logo(Logo37);
				else if(z==38)
					LCD_Draw_Logo(Logo38);
				else if(z==39)
					LCD_Draw_Logo(Logo39);
				else if(z==40)
					LCD_Draw_Logo(Logo40);
				else if(z==41)
					LCD_Draw_Logo(Logo41);
				else if(z==42)
					LCD_Draw_Logo(Logo42);
				else if(z==43)
					LCD_Draw_Logo(Logo43);
				else if(z==44)
					LCD_Draw_Logo(Logo44);
				else if(z==45)
					LCD_Draw_Logo(Logo45);
				else if(z==46)
					LCD_Draw_Logo(Logo46);
				else if(z==47)
					LCD_Draw_Logo(Logo47);
				else if(z==48)
					LCD_Draw_Logo(Logo48);
				else if(z==49)
					LCD_Draw_Logo(Logo49);
				else if(z==50)
					LCD_Draw_Logo(Logo50);

		HAL_GPIO_TogglePin(LED1_GPIO_PORT,LED1_PIN);
		HAL_Delay(5);
		HAL_GPIO_TogglePin(LED1_GPIO_PORT,LED1_PIN);
		HAL_Delay(10);
		HAL_GPIO_TogglePin(LED2_GPIO_PORT,LED2_PIN);
		HAL_Delay(5);
		HAL_GPIO_TogglePin(LED2_GPIO_PORT,LED2_PIN);
		HAL_Delay(10);
		HAL_GPIO_TogglePin(LED3_GPIO_PORT,LED3_PIN);
		HAL_Delay(5);
		HAL_GPIO_TogglePin(LED3_GPIO_PORT,LED3_PIN);
		HAL_Delay(10);
		HAL_GPIO_TogglePin(LED4_GPIO_PORT,LED4_PIN);
	 	HAL_Delay(5);
		HAL_GPIO_TogglePin(LED4_GPIO_PORT,LED4_PIN);
		HAL_Delay(10);
		HAL_GPIO_TogglePin(LED3_GPIO_PORT,LED3_PIN);
		HAL_Delay(5);
		HAL_GPIO_TogglePin(LED3_GPIO_PORT,LED3_PIN);
		HAL_Delay(10);
		HAL_GPIO_TogglePin(LED2_GPIO_PORT,LED2_PIN);
		HAL_Delay(5);
		HAL_GPIO_TogglePin(LED2_GPIO_PORT,LED2_PIN);
		HAL_Delay(10);

    
		if(HAL_GPIO_ReadPin(n, m)==0){
		x=1;
		};
	};
		
	while(x==1){
		HAL_GPIO_TogglePin(LED1_GPIO_PORT,LED1_PIN);
		HAL_GPIO_TogglePin(LED2_GPIO_PORT,LED2_PIN);
		HAL_GPIO_TogglePin(LED3_GPIO_PORT,LED3_PIN);
		HAL_GPIO_TogglePin(LED4_GPIO_PORT,LED4_PIN);
		HAL_Delay(500);
		HAL_GPIO_TogglePin(LED1_GPIO_PORT,LED1_PIN);
		HAL_GPIO_TogglePin(LED2_GPIO_PORT,LED2_PIN);
		HAL_GPIO_TogglePin(LED3_GPIO_PORT,LED3_PIN);
		HAL_GPIO_TogglePin(LED4_GPIO_PORT,LED4_PIN);
		HAL_Delay(500);
		
		if(HAL_GPIO_ReadPin(c, v)){	
			x=0;
		};
			
	};
	};
	
	goto start;

};

PUTCHAR_PROTOTYPE
{
  /* Place your implementation of fputc here */
  /* e.g. write a character to the USART1 and Loop until the end of transmission */
	
  HAL_UART_Transmit(&huart1, (uint8_t *)&ch, 1, 0xffff);

  return ch;
}

/** System Clock Configuration
*/
void SystemClock_Config(void)
{

  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;

  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = 16;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  HAL_RCC_OscConfig(&RCC_OscInitStruct);

  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_SYSCLK;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;
  HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0);

  HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/1000);

  HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);

}

/* ADC1 init function */
void MX_ADC1_Init(void)
{

  ADC_ChannelConfTypeDef sConfig;

  /**Common config 
  */
  hadc1.Instance = ADC1;
  hadc1.Init.ScanConvMode = ADC_SCAN_DISABLE;
  hadc1.Init.ContinuousConvMode = DISABLE;
  hadc1.Init.DiscontinuousConvMode = DISABLE;
  hadc1.Init.ExternalTrigConv = ADC_SOFTWARE_START;
  hadc1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc1.Init.NbrOfConversion = 1;
  HAL_ADC_Init(&hadc1);

  /**Configure Regular Channel 
  */
  sConfig.Channel = ADC_CHANNEL_14;
  sConfig.Rank = 1;
  sConfig.SamplingTime = ADC_SAMPLETIME_1CYCLE_5;
  HAL_ADC_ConfigChannel(&hadc1, &sConfig);

}

//////////////////////////////////////////////////////////////////
/* USART1 init function */
void MX_USART1_UART_Init(void)
{
  huart1.Instance = USART1;
  huart1.Init.BaudRate = 9600;
  huart1.Init.WordLength = UART_WORDLENGTH_9B;
  huart1.Init.StopBits = UART_STOPBITS_1;
  huart1.Init.Parity = UART_PARITY_NONE;
  huart1.Init.Mode = UART_MODE_TX_RX;
  huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart1.Init.OverSampling = UART_OVERSAMPLING_16;
  HAL_UART_Init(&huart1);
}
/////////////////////////////////////////////////////////////////////
/** Pinout Configuration
*/
void MX_GPIO_Init(void)
{

//  /* GPIO Ports Clock Enable */
//  __GPIOA_CLK_ENABLE();
//	__GPIOF_CLK_ENABLE();

  GPIO_InitTypeDef GPIO_InitStruct;

  /* GPIO Ports Clock Enable */
  __GPIOF_CLK_ENABLE();
  __GPIOC_CLK_ENABLE();
  __GPIOA_CLK_ENABLE();

  /*Configure GPIO pins : PF6 PF7 PF8 PF9 */
  GPIO_InitStruct.Pin = GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Speed = GPIO_SPEED_LOW;
  HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);
	
  WAKEUP_BUTTON_GPIO_CLK_ENABLE();
  GPIO_InitStruct.Pin = WAKEUP_BUTTON_PIN;
  HAL_GPIO_Init(WAKEUP_BUTTON_GPIO_PORT, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

#ifdef USE_FULL_ASSERT

/**
   * @brief Reports the name of the source file and the source line number
   * where the assert_param error has occurred.
   * @param file: pointer to the source file name
   * @param line: assert_param error line source number
   * @retval None
   */
void assert_failed(uint8_t* file, uint32_t line)
{

}

#endif

/**
  * @}
  */ 

/**
  * @}
*/

