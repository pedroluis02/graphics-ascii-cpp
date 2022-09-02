#include "paint.h"

//Paint
Paint::Paint() {}

Paint::Paint(char stroke, char fill, char background) {
    this->stroke = stroke;
    this->fill = fill;
    this->background = background;
}

Paint Paint::copy() {
    return Paint(stroke, fill, background);
}

Paint Paint::defaultPaint() {
    return Paint('#', ' ', ' ');
}

//PaintBuilder
PaintBuilder::PaintBuilder() {
    paint = Paint::defaultPaint();
}

PaintBuilder PaintBuilder::stroke(char value) {
    paint.stroke = value;
    return *this;
}

PaintBuilder PaintBuilder::fill(char value) {
    paint.fill = value;
    return *this;
}

PaintBuilder PaintBuilder::background(char value) {
    paint.background = value;
    return *this;
}

Paint PaintBuilder::build() {
    return paint;
}