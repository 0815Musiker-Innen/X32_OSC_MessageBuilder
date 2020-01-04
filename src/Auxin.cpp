#include "Auxin.h"
#include <Arduino.h>

//TODO: Beim Erzeugen des Objektes am besten setzen
void Auxin::setPrefixValues() 
{
    _numberSpanSize = 2;
    _length = 5;
    char helper[6] = "auxin";
    for (size_t i = 0; i < sizeof(helper) - 1; i++)
    {
        _name[i] = helper[i];
    }  
}

void Auxin::getName(char* buffer) 
{
    setPrefixValues();
    //TODO: Das hier ist eine allgemeingültige Funktion, für Parts
    //Buffer leer "auffüllen"

    //führendes Slash hinzufügen
    buffer[0] = '/';
    for (int i = 0; i < _length+3; i++)
    {
        //An die letzte Stelle das Trennzeichen anfügen
        if(i == _length+2) 
        {
            buffer[_length+1] = '/';
        }
        else 
        {
            buffer[i+1] = _name[i];
        }
    }
    int position = _length + 2;

    _setMessageNumbers(buffer);
      
}