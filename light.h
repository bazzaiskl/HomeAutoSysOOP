#define LIGHT_H


#include <iostream>
#include <string>
#include "appliance.h"

class light: public appliance
{
public:
	light();
	light(string aName);
	light(int getBrightness, char* getColor);
	std::string color;
	int brightness;
	void onOff(bool state);

	//need to be added
	vector<string> getFunctions();
	vector<string> functions;

};




