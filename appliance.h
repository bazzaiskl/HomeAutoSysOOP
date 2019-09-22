#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <string>

using namespace std;

class appliance{

//constructors
appliance();


//state
protected:
    string name;
    string location;
    static int currentID;
    int id;

public:
//behviour
    //pure vitruals
    virtual void onOff(bool state) = 0;

    //getters
    string getName();
    string getLocation();

    void setLocation(string nLocation);
    void setName(string nName);


};
#endif