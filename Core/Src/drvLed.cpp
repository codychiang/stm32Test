#include "drvLed.h"
#include "main.h"

CDrvLed::CDrvLed()
{
	
}

CDrvLed::~CDrvLed()
{
	
}

void CDrvLed::init()
{	
	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, GPIO_PIN_SET);
}

void CDrvLed::loop()
{
	
}

