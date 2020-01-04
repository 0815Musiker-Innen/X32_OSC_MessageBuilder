#ifndef NumberedInput_h
#define NumberedInput_h

// the #include statment and code go here...
#include "Input.h"
#include "NumberedPart.h"
//Transput stands for Input and Output Objects. 
//The class is usefull to implement in child classes like Equalizer or Mix that need a channel etc. to built a valid message 

class NumberedInput: public NumberedPart, protected Input
{
  public:
    //Konstruktor erben
    using NumberedPart::NumberedPart;

  private:

};

#endif


