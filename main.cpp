#include <cstdlib>

#include "circle.h"

int main(int argc, char** argv) {
    Paint paint = PaintBuilder().background('-').stroke('#').fill('|').build();
            
    Circle *circle = new Circle(15, paint);
    circle->draw();
    
    delete circle;
 
    return 0;
}
