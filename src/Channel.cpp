#include "Channel.h"
#include <Arduino.h>

void Channel::setPrefixValues() 
{
    _numberSpanSize = 1;
    char helper[5] = "/ch/";
    for (size_t i = 0; i < sizeof(helper) - 1; i++)
    {
        _name[i] = helper[i];
    }  
}

