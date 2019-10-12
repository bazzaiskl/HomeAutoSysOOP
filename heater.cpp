#include<iostream>
#include "heater.h"

heater::heater()
{
	temp = 20;
	name = "?";
}

heater::heater(int getTemp)
{

	temp = getTemp;
	std::cout<<"The heater tempreture is setted "<<temp<<std::endl;
	
}

void heater::onOff(bool state){
	cout<<"onOff called"<<endl;
}

