#include "graphic.h"

GraphicPaintWriter::GraphicPaintWriter(Paint paint, Writer *output) : paint(paint), output(output) {}
    
void GraphicPaintWriter::setWriter(Writer *output) {
    this->output = output;
}

void GraphicPaintWriter::setPaint(Paint paint){
    this->paint = paint;
}

void GraphicPaintWriter::writeStroke() {
    output->write(paint.stroke);
}

void GraphicPaintWriter::writeFill() {
    output->write(paint.fill);
}

void GraphicPaintWriter::writeBackground() {
    output->write(paint.background);
}

void GraphicPaintWriter::writeJump() {
    output->writeJump();
}
