#include <iostream>
#include "heater.h"
#include "light.h"
#include <vector>

using namespace std;

extern void read(string* name, string* function);
extern void selector(vector<appliance> list);

int main(){

heater warmer();
//heater* warmerP = &warmer;

heater* hot = new heater();
light lamp();



vector<appliance*> list;

list.push_back(new heater());
list.push_back(new light());

vector<int> pop;
pop.push_back(1);


//selector(list);


	
}
