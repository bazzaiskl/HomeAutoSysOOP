#include<iostream>
#include "heater.h"

heater::heater()
{
	temp = 20;
		functions.push_back("set_color");
	functions.push_back("set_brightness");

	
}

heater::heater(string aName){
	name = aName;
	temp = 20;
}

heater::heater(int getTemp)
{

	temp = getTemp;
	std::cout<<"The heater tempreture is setted "<<temp<<std::endl;
	
}

void heater::onOff(bool state){
	cout<<"onOff called"<<endl;
}

vector<string> heater::getFunctions(){
	return functions;
}
