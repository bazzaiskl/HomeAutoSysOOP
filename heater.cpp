#include<iostream>
#include "heater.h"

heater::heater()
{
	temp = 20;
}

heater::heater(int getTemp)
{

	temp = getTemp;
	std::cout<<"The heater tempreture is setted "<<temp<<std::endl;
	
}
