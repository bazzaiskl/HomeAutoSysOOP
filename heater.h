#define HEATER_H

#include <iostream>
#include "appliance.h"
class heater:appliance
{
public:
	heater();
	heater(int getTemp);
	int temp;
	void onOff(bool state);


};
