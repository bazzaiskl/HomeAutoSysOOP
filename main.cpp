#include <iostream>
#include "appliance.h"
//#include <vector>


using namespace std;
extern void read(string* name, string* function);

int main(){
string* name = new string();
string* function = new string();

//sappliance* list = new appliance(10);

read(name, function);

cout<< *name << " to " << *function<< endl;

	
}
