#include<iostream>
#include "heater.h"

heater::heater()
{
	temp = 20;
	functions.push_back("On");
	functions.push_back("Off");
	functions.push_back("setTemp");

	
}

heater::heater(string aName){
	name = aName;
	temp = 20;
	functions.push_back("On");
	functions.push_back("Off");
	functions.push_back("setTemp");
}


void heater::onOff(bool state){
	if(state == 0){
		cout<<"heater is off"<<endl;
	}
	else{
		cout<<"heater is on"<<endl;
	}
}

void heater::setTemp(int Htemp){
	temp = Htemp;
	cout<<"the temperature is set to "<<temp<<endl;
}

vector<string> heater::getFunctions(){
	return functions;
}


void heater::caller(string funct){
	if (funct.compare("setTemp")==0){
		int temp;
		cout<<"please enter the desired temperature"<<endl;
		cin>>temp;
		heater::setTemp(temp);
	}
	if (funct.compare("On")==0){
		heater::onOff(1);
	}
	if (funct.compare("Off")==0){
		heater::onOff(0);
	}
}