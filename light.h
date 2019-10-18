#define LIGHT_H


#include <iostream>
#include <string>
#include "appliance.h"

class light: public appliance
{
public:
	light();
	light(std::string aName)
	void set_color(std::string color);
	std::string getColor;
	void set_brightness(int aBrightness);
	int getBrightness;

	void onOff(bool state);

	vector<std::string>getFunctions();
	vector<std::string>functions;
};




