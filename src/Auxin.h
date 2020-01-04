#ifndef Auxin_h
#define Auxin_h

// the #include statment and code go here...
#include "NumberedInput.h"

class Auxin: public NumberedInput
{
  public:
    //Konstruktor erben
    using NumberedInput::NumberedInput;
    void setPrefixValues() override;
    void getName(char* name);

  private:
    //int _number;
    //char _message[5];
};

#endif


