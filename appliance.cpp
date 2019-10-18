#include "appliance.h"

//initalisation of id numbers
int appliance::currentID =0;

//constructors
appliance::appliance(){
    name = "unknown";
    location = "unknown";
    currentID++;
    id = currentID;   
}

appliance::appliance(string aName){
    name = aName;
    location = "unknown";
    currentID++;
    id = currentID; 
}
string appliance::getName(){
    return name;
}
    
    
string appliance::getLocation(){
    return location;
}

void appliance::setName(string nName){
    name = nName;
}

void appliance::setLocation(string nLocation){
    location = nLocation;
}



