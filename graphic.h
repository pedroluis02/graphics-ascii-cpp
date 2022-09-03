#ifndef GRAPHIC_H
#define GRAPHIC_H

#include "console.h"

class GraphicPaintWriter {
public: 
    GraphicPaintWriter(Paint paint, Writer *output);
    
    void setWriter(Writer *output);
    void setPaint(Paint paint);
    
    void writeStroke();
    void writeFill();
    void writeBackground();
    void writeJump() ;
    
private:
    Paint paint;
    Writer *output;
};

class GraphicAscii : public GraphicPaintWriter {    
public: 
    GraphicAscii(Paint paint = Paint::defaultPaint()) 
        : GraphicPaintWriter(paint, new ConsoleWriter()) {}
    
    virtual void draw() = 0;
};

#endif 

