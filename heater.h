#define HEATER_H

#include <iostream>
#include "appliance.h"
class heater: public appliance
{
public:
	heater();
	heater(int getTemp);
	int temp;
	void onOff(bool state);


};
