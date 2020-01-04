#ifndef Gate_h
#define Gate_h
#include "Channel.h"

class Gate {
    public:
        Gate();
        void getMessage(char* message, Channel channel);
    private:
        char _message[5];
        //Gate needs a Channel to build a valid message

};

#endif

