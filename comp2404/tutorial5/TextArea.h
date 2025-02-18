
#ifndef TEXTAREA_H
#define TEXTAREA_H

#include <X11/Xlib.h>
#include "RGB.h"
#include <string>

class TextArea {
    public:
        // Constructors
        TextArea(int x, int y, int width, int height, string id, string label, RGB fill = RGB::WHITE(), RGB border = RGB::BLACK());
        TextArea(Rectangle dimensions, string id, string label, RGB fill = RGB::WHITE(), RGB border = RGB::BLACK());
        TextArea();
        TextArea(const TextArea& other);

        // Getters
        string getID() const;

        // Setters
        void setFill(const RGB& newFill) { fill = newFill; }
        void setBorder(const RGB& newBorder) { border = newBorder; }

        // Other Member Functions
        void draw(Display *display, Window win, GC gc, int x, int y) const;
        bool overlaps(const TextArea& ta) const;
        void print() const;

    private:
        Rectangle dimensions;
        string text;
        string id;
        int width, height;
        string label;
        RGB fill, border;
};

#endif
