#include <iostream>
#include "heater.h"
#include "light.h"
//#include <vector>

using namespace std;

extern void read(string* name, string* function);

int main(){
string* name = new string();
string* function = new string();

heater warmer();
//heater* warmerP = &warmer;

light litBro();
//appliance* litBroP = &litBro;

//appliance* list[10] = {&warmer, &litBro};





read(name, function);

cout<< *name << " to " << *function<< endl;

	
}
