#include <iostream>
#include "heater.h"
#include "light.h"
#include <vector>

using namespace std;

extern void read(string* name, string* function);
extern void selector(vector<appliance*> list);

int main(){

//initalize vector of all the appliances
vector<appliance*> list;

//add appliances into the vector
list.push_back(new heater("hotty"));
list.push_back(new light("enlightenment"));


//run selector

selector(list);

	
}
