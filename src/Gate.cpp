#include "Gate.h"
#include <Arduino.h>

Gate::Gate()
{ 
  
}

void Gate::getMessage(char* buffer, Channel channel) 
{      
    const char prefix[7] = "/gate/";
    sprintf(buffer,"%s",prefix); 
    for (size_t i = 0; i < sizeof(prefix); i++)
    {
        buffer[i] = prefix[i];
    }      
}