#ifndef HEATER_H
#define HEATER_H

#include "appliance.h"

class heater: public appliance {
    public:
    heater();
    
    virtual void onOff(bool state);
};

#endif