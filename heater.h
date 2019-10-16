#define HEATER_H

#include <iostream>
#include "appliance.h"
class heater: public appliance
{
public:
	heater();
	heater(int getTemp);
	string name;
	vector<string> functions;
	
	int temp;
	void onOff(bool state);

	//need to be added
	vector<string> getFunctions();


};
