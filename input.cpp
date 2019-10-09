#include <string>
#include <iostream>

using namespace std;

void read(string* name, string* function){
 cout<<"Please enter name of object"<<endl;
 cin >> *name;

 cout<<"please enter the function"<<endl;
 cin >> *function;

}


void selector(){
    string* name = new string();
    string* function = new string();
    read(name, function);
   
   if ( (*name).compare("heater") == 0 ){
       if((*function).compare("on") == 0){
           //call the class funciton of on
       }
       if((*function).compare("off") == 0){
           //call the class funciton of off
       }
       
   }

   if((*name).compare("light") == 0){
       if((*function).compare("on") == 0){
           //call the class funciton of on
       }
       if((*function).compare("off") == 0){
           //call the class funciton of off
       }

   }


cout<<*name<<" is "<<*function<<endl;
}





