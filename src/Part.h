#ifndef Part_h
#define Part_h

// the #include statment and code go here...
//MessagePart-Class is the Base-Class for all command parts
class Part
{
  public:

  protected:
    //The prefix to start the message, e.g. 'auxin'. Size should be big enough to match all prefixes.
    char _name[10];
    //The real length of the current prefix. Needed for calculation of the messages
    int _length;
};

#endif