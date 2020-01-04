#include "NumberedPart.h"
#include <Arduino.h>

NumberedPart::NumberedPart(int number)
{ 
  _number = number;
  setPrefixValues();
}


void NumberedPart::getMessage(char* buffer) {
    
    //TODO: Hier muss das numberPadding berücksichtigt werden
    init();
    //sprintf(buffer,"%s%i",_name, _number);    
}

int NumberedPart::getNumber() {
    return _number;
}

void NumberedPart::setPrefixValues() 
{

}


void NumberedPart::_setMessageNumbers(char *message)
{
    //TODO: Position an geignete Stelle umziehen
    int position = 7;
    if(_number < 10 && _numberSpanSize > 1) 
    {
        message[position] = '0';
        if(_number < 100 && _numberSpanSize > 2) 
        {
            message[position+1] = '0';
        }
    }
    position +=  _numberSpanSize - 1; 
    message[position] = '6';
    // bei Requests wäre hier das letzte '/' aber evtl. unnötig 
    message[position+1] = '/';
    position ++;
    //Wert merken bzw. in Klasse speichern, um Zusammensetzung von dort zu starten
    Serial.println(position);
}