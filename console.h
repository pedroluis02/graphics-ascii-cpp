#ifndef CONSOLE_H
#define CONSOLE_H

#include <iostream>

#include "writer.h"
#include "paint.h"

using namespace std;

class ConsoleWriter : public Writer {
public:
    void write(char value);
    void writeJump();
};

#endif 

