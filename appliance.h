#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <string>
#include<vector>

using namespace std;

class appliance{

//constructors



//state
public:
    string name;
    string location;
    static int currentID;
    int id;


//behviour
    //pure vitruals
    virtual void onOff(bool state) = 0;

    //need to be added
    virtual vector<string> getFunctions() =0;

    //getters
    string getName();
    string getLocation();

    void setLocation(string nLocation);
    void setName(string nName);

    appliance();
    appliance(string aName);

};
#endif