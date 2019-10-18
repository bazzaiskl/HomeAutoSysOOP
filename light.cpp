#include <iostream>
#include "light.h"
#include "appliance.h"
#include <string>



light::light()
{
	getColor = "?";
	getBrightness = 0;
	functions.push_back("set_color");
	functions.push_back("set_brightness");
}

light::light(std::string aName)
{
	getColor="?";
	getBrightness=0;
	name=aName;
	functions.push_back("set_color");
	functions.push_back("set_brightness");

	 functionArray[0] = set_color; 
	 functionArray[1] =	set_brightness;
}

void light::set_color(int color)
{
	getColor=color;
	
	
	std::cout<<"The light color is setted "<< getColor<<std::endl;

}

void light::set_brightness(int aBrightness)
{
	getBrightness=aBrightness;
	std::cout<<" The light brightness is setted"<<getBrightness<<std::endl;
}

void light::onOff(bool state)
{
	cout<<"onOff called"<<endl;
}

vector<std::string> light::getFunctions(){
    return functions;
}


