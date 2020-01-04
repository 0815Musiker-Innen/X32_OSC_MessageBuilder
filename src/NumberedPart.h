#ifndef NumberedPart_h
#define NumberedPart_h

// the #include statment and code go here...
#include "Part.h"
//NumberedType-Class is the Base-Class for all commands that need a number, e.g. Channel, Auxin, DCA, Headamp, FxRtn, Bus...
class NumberedPart
{
  public:
    NumberedPart(int number);
    //the first part of the message is calculated here, e.g '/auxin/01/'
    void getMessage(char* message);
    int getNumber();
    //change the values for the specific objects in this method
    virtual void setPrefixValues();   

  protected:
    int _number;
    //'headamp/001/' has the SpanSize 3 because all adressed numbers need three chars for a correctly built message
    int _numberSpanSize;
    //Schreibt die Nummern mit dem entsprechenden Abstand an die OSC-Message
    void _setMessageNumbers(char* message);
};

#endif