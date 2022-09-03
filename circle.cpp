#include "circle.h"

#include <cmath>

Circle::Circle(int radius) : GraphicAscii(), radius(radius) {}

Circle::Circle(int radius, Paint paint) : GraphicAscii(paint), radius(radius) {}

int Circle::pth(int x, int y) {
    return sqrt(pow(x, 2) + pow(y, 2));
}

void Circle::drawRow(int index, int r, int length) {
    bool isActive = true, isInside = false;
    for (int x =- length; x <= length; x++)  {
        if (pth(x, index) == r) {
            writeStroke();

            if (isActive && !isInside )
                isInside = true;
            else if (!isActive && isInside) 
                isInside = false;
        } else {
            if (isInside && (index != r && index != -r)) {
                writeFill();

                if (isActive)
                    isActive = false;
            } else {
                writeBackground();
            }
        }
    }
}

void Circle::drawPaddingVertical(int length) {
    for (int x = 0; x < paddingVertical; x++) {
        for (int y = 0; y < 2*length; y++) {
            writeBackground();
        }
        writeJump();
    }
}

void Circle::draw() {
    int r = (radius < 1) ? 10 : radius;
    const int width = r;
    const int length = r + (2 * paddingHorizontal);

    drawPaddingVertical(length);

    for (int y = width; y >= -width; y -= 2)  {
        drawRow(y, r, length);
        writeJump();
    }

    drawPaddingVertical(length);
}