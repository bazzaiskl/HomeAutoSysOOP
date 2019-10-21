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
	functions.push_back("On");
	functions.push_back("Off");

	 //functionArray[0] = set_color; 
	 //functionArray[1] =	set_brightness;
}

void light::set_color(string color)
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
	if(state == 0){
		cout<<"light is off"<<endl;
	}
	else{
		cout<<"light is on"<<endl;
	}
}

vector<std::string> light::getFunctions(){
    return functions;
}


void light::caller(string funct){
	if (funct.compare("set_color")==0){
		string* col;
		cout<<"please enter the desired colour"<<endl;
		cin>>*col;

		light::set_color(*col);
	}
	if (funct.compare("set_brightness")==0){
		int bright;
		cout<<"please enter the desired brightness"<<endl;
		cin>>bright;
		light::set_brightness(bright);
	}
	if (funct.compare("On")==0){
		light::onOff(1);
	}
	if (funct.compare("Off")==0){
		light::onOff(0);
	}
	
}
