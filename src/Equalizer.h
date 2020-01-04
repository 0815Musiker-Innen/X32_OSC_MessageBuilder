#ifndef Equalizer_h
#define Equalizer_h

// the #include statment and code go here...
#include "NumberedPart.h"
#include "ChildPart.h"
#include "Transput.h"

class Equalizer: public NumberedPart, protected ChildPart
{
  public:
    //Die Konstruktoren der NumberedType-Klasse erben
    using NumberedPart::NumberedPart;
    void setPrefixValues() override;

  private:
    //Equalizer needs an Transput to built a valid message
    //Transput _transput;

};

#endif