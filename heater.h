#define HEATER_H

#include <iostream>
#include "appliance.h"
class heater: public appliance
{
public:
	heater();
	heater(string aName);

	void caller(string funct);
	void onOff(bool state);
	void setTemp(int temp);
	
	vector<string> functions;
	
	int temp;
	

	//need to be added
	vector<string> getFunctions();


};
