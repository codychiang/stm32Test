#include "mainCpp.h"
#include "drvLed.h"


CDrvLed drvLed;



void mainCpp_Init()
{
	drvLed.init();
}

void mainCpp_Loop()
{
	drvLed.loop();
}

