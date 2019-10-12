#define HEATER_H

#include <iostream>
#include "appliance.h"
class heater: public appliance
{
public:
	heater();
	heater(int getTemp);
	string name;
	
	int temp;
	void onOff(bool state);


};
