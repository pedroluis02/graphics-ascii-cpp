#ifndef WRITER_H
#define WRITER_H

class Writer {
public:
    virtual void write(char value) = 0;
    virtual void writeJump() = 0;
};

#endif
