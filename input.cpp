#include <string>
#include <iostream>
#include "heater.h"
#include "light.h"
#include <vector>

using namespace std;

extern void UIAppliance(vector<appliance*> list);
extern void UIFunction(appliance* object);
extern void blankLine();

void read(string* input, string message){
 cout<<"Please enter "<<message<<endl;
 cin >> *input;

}

void selector(vector<appliance*> list){
    //variables
    string* UserInput = new string();
    appliance* aSelection;
    bool choice = 1;
    //UI functions call list

    //appliance selection
    
    UIAppliance(list);

    while(choice){
        read(UserInput, "appliance");

        if((*UserInput).compare("quit")==0){return;} 
        else {
            for(int i = 0;i<list.size();i++){
                if((*UserInput).compare((list.at(i)->getName()))==0){
                    aSelection = list.at(i);
                    choice = 0;
                    } 
                }

            if(choice == 1){
                cout<<"selection is not availible,"<<endl<< "please try again, or type quit to quit"<<endl;
                blankLine();
                }
    
            blankLine();
                }
            }

   //function selection
    choice = 1;
    UIFunction(aSelection);

    while(choice){
        read(UserInput,"function");
        if((*UserInput).compare("quit")==0){return;}
        else{
            for(int i=0;i<(aSelection->getFunctions().size()); i++){
                string currentComp = aSelection->getFunctions().at(i);

                if((*UserInput).compare(currentComp)==0){
                    //need a way to call the functions, maybe an array of function pointers
                    //looks like we might need to iff bomb it
                    choice = 0;
                    } 
                }
            

                if(choice == 1){
                    cout<<"selection is not availible,"<<endl<< "please try again, or type quit to quit"<<endl;
                    blankLine();
                    }
                }
        }
}
