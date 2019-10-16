#include<iostream>
#include<vector>
#include "heater.h"
#include "light.h"

using namespace std;
//global for paramters
int pageWidth= 50;

//function for prettyness

void lineOfColon(){
    for (int i = 0;i<pageWidth;i++){
    cout<<":";
    }
    cout<<endl;
}

void blankLine(){
    cout<<endl;
}

void title(string message){
    
    int size = message.size();
    int left = -1+(pageWidth-size)/2;
    int right = -2+pageWidth-left-size;
     for (int i = 0;i<left;i++){
    cout<<":";
    }
    cout<<" ";
    cout<<message;
    cout<<" ";
    for (int i = 0;i<right;i++){
    cout<<":";
    }
    cout<<endl;
}

void listOfAppliances(vector<appliance*> list){
    //use the vector to cycle through everything
    cout<<"The Avalible Appliances are: "<<endl;
    for(int i =0;i<list.size();i++){
        cout<<(list.at(i))->name<<" ";
    }
    cout<<endl;

}

void listOfFunctions(appliance* object){
    //list appliance functions name vector
    cout<<"The Avalible Functions are: "<<endl;
    for(int i =0; i<(object->getFunctions().size()); i++){
        cout<<(object->getFunctions().at(i))<<" ";
    }
    cout<<endl;
}


void UIAppliance(vector<appliance*> list){
lineOfColon();
title("Home Automation System");
listOfAppliances(list);

}

void UIFunction(appliance* object){
    lineOfColon();
    title(object->getName());
    listOfFunctions(object);


}