#ifndef RGB_H
#define RGB_H

#include "defs.h"
using namespace std;

class RGB {
    public:
        RGB(int red, int green, int blue);
        RGB();

        int getR() const;
        int getB() const;
        int getG() const;
        void setR(int red);
        void setB(int blue);
        void setG(int green);
        //CuColour getColour() const;

        //void setColour(CuColour colour);
        void print() const;

        static RGB WHITE();
        static RGB BLACK();
        static RGB RED();
        static RGB GREEN();
        static RGB BLUE();
        
    private:
        int red, green, blue;

};

#endif