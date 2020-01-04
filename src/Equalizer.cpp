#include "Equalizer.h"
#include <Arduino.h>

//Hier werden Werte gesetzt
void Equalizer::setPrefixValues() 
{
    _numberSpanSize = 0;
    char helper[5] = "/eq/";
    for (size_t i = 0; i < sizeof(helper) - 1; i++)
    {
        
        _name[i] = helper[i];
    }    
}