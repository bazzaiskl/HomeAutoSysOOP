#define LIGHT_H


#include <iostream>
#include <string>

class light
{
public:
	light();

	light(std::string color);
	std::string getColor;
	void set_brightness(int aBrightness);
	int getBrightness;
};




