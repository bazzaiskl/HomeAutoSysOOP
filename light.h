#ifndef LIGHT_H
#define LIGHT_H

#include "appliance.h"

class light:public appliance {
    public:
    light();

    virtual void onOff(bool state);
};

#endif
