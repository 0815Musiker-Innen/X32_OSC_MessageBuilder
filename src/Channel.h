#ifndef Channel_h
#define Channel_h

// the #include statment and code go here...
#include "NumberedInput.h"

class Channel: public NumberedInput
{
  public:
    //Konstruktor erben
    using NumberedInput::NumberedInput;
    void setPrefixValues() override;

  private:
    //int _number;
    //char _message[5];
};

#endif


