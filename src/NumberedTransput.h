#ifndef NumberedTransput_h
#define NumberedTransput_h

// the #include statment and code go here...
#include "Transput.h"
#include "NumberedPart.h"
//Transput stands for Input and Output Objects. 
//The class is usefull to implement in second level classes like Equalizer or Mix that need a channel etc. to built a valid message 

class NumberedTransput: protected NumberedPart, protected Transput
{
  public:
    //Konstruktor erben
    //using NumberedPart::NumberedPart;

  private:

};

#endif


