#include <string>
#include <iostream>
#include "heater.h"
#include "light.h"
#include <vector>

using namespace std;

extern void UIAppliance(vector<appliance*> list);
extern void UIFunction(appliance* object);

void read(string* input, string message){
 cout<<"Please enter "<<message<<endl;
 cin >> *input;

}


void selector(vector<appliance*> list){
    string* UserInput = new string();
    appliance* aSelection;

    UIAppliance(list);
    read(UserInput, "appliance");
   
   for(int i = 0;i<list.size();i++){
       if((*UserInput).compare((list.at(i)->getName()))==0){
           //cout<<"on the list"<<endl;
           aSelection = list.at(i);
       }
       else{
           cout<<"selection is not on the list"<<endl;
       }
   }

   UIFunction(aSelection);
   read(UserInput,"function");


//cout<<*name<<" is "<<*function<<endl;
}
