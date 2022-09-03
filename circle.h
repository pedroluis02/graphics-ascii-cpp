#ifndef CIRCLE_H
#define CIRCLE_H

#include "graphic.h"

class Circle : public GraphicAscii {
private:
    int radius;
    int paddingVertical = 2;
    int paddingHorizontal = 5;
    
    int pth(int x, int y);
    void drawRow(int index, int r, int length);
    void drawPaddingVertical(int length);
    
public:
    Circle(int radius); 
    Circle(int radius, Paint paint);
    
    void draw();
};

#endif

