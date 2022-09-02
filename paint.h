#ifndef PAINT_H
#define PAINT_H

struct Paint {
    char stroke;
    char fill;
    char background;
    
    Paint();
    Paint(char stroke, char fill, char background);
    
    Paint copy();
    
    static Paint defaultPaint();
};

class PaintBuilder {
public:
    PaintBuilder();
    
    PaintBuilder stroke(char value);
    PaintBuilder fill(char value);
    PaintBuilder background(char value);
    
    Paint build();
    
private:
    Paint paint;
};

#endif

