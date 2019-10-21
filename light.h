#define LIGHT_H


#include <iostream>
#include <string>
#include "appliance.h"

class light: public appliance
{
public:
	light();
	light(string aName);

	void set_color(string color);
	std::string getColor;
	void set_brightness(int aBrightness);
	int getBrightness;

	void onOff(bool state);

	vector<string> functions;
	//void (*functionArray)(int);
	void (*functionArray[2])(int);

	vector<std::string>getFunctions();

	void caller(string funct);

	//vector<std::string>functions;
};
