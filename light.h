#define LIGHT_H


#include <iostream>
#include <string>
#include "appliance.h"

class light: public appliance
{
public:
	light();
	string name;
	light(int getBrightness, char* getColor);
	std::string color;
	int brightness;
	void onOff(bool state);
};




