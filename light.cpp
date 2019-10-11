#include <iostream>
#include "light.h"

light::light()
{
	color = "?";
	brightness = 0;
}

light::light(int getBrightness, char* getColor)
{
	color = getColor;
	brightness = getBrightness;
	
	std::cout<<"The light color is setted "<< color;
	std::cout<<" The light brightness is setted"<<brightness<<std::endl;
}

void light::onOff(bool state){
    cout<<"onOff called"<<endl;
}


