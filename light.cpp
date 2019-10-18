#include <iostream>
#include "light.h"
#include "appliance.h"
#include <string>



light::light()
{
	getColor = "?";
	getBrightness = 0;
}

light::light(std::string color)
{
	getColor=color;
	
	
	std::cout<<"The light color is setted "<< getColor<<std::endl;

}

void light::set_brightness(int aBrightness)
{
	getBrightness=aBrightness;
	std::cout<<" The light brightness is setted"<<getBrightness<<std::endl;
}

