#define LIGHT_H


#include <iostream>
#include <string>

class light
{
public:
	light();

	light(int getBrightness, char* getColor);
	std::string color;
	int brightness;
};




