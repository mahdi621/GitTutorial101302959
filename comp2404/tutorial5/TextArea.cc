#include "TextArea.h"
#include <iostream>


TextArea::TextArea(int x, int y, int width, int height, string id, string text, RGB fill, RGB border) : dimensions{x,y,width,height}, id(id), text(text), fill(fill), border(border) {}


TextArea::TextArea(Rectangle dimensions, string id, string text, RGB fill, RGB border) : dimensions(dimensions), id(id), text(text), fill(fill), border(border){}


TextArea::TextArea() : dimensions{0,0,0,0}, text("text"), id("id"), fill(RGB::WHITE()), border(RGB::BLACK()) {}


// Copy constructor
TextArea::TextArea(const TextArea& other) : dimensions(other.dimensions), text("DUPLICATE"), id(other.id), fill(other.fill), border(other.fill) {}


void TextArea::draw(Display *display, Window win, GC gc, int x, int y) const {
    // XSetForeground(display, gc, fill.getColour());
    // XFillRectangle(display, win, gc, parentX + x, parentY + y, width, height);


    // XSetForeground(display, gc, 0xFFFFFF);
    // XDrawRectangle(display, win, gc, parentX + x, parentY + y, width, height);


    // XSetForeground(display, gc, fill.getColour());
    // XDrawString(display, win, gc, parentX + x + 10, parentY + y + (height/2), label.c_str(), label.length());
   
}


bool TextArea::overlaps(const TextArea& ta) const {
    return dimensions.overlaps(ta.dimensions);
    //if(x + width <= ta.x || ta.x + ta.width <= x) || (y + height <= ta.y || ta.y + ta.height <= y)); 
}

string TextArea::getID() const {
    return id;
}


void TextArea::print() const {
    cout << "TextArea id: " << id << endl;
    cout << "Preferred location: " << dimensions.x << ", " <<  dimensions.y << endl;
    cout << "Size: " << dimensions.width << ", " << dimensions.height << endl;
    cout << "Text: " << text << endl;
}