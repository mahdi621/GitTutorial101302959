#ifndef TAARRAY_H
#define TAARAY_H

#include "TextArea.h"

class TAArray{
    public:
    TAArray(int capacity);
    TAArray();
    ~TAArray();

    bool add(TextArea* ta);
    bool add(TextArea* ta, int index);

    
    TextArea* get(int index) const;              
    TextArea* get(const string& id) const;  

    
    TextArea* remove(int index);                 
    TextArea* remove(const string& id);

    int getSize() const;
    int getCapacity() const;

    void print() const;

    private:
    TextArea** array;
    int capacity;
    int size;
};


#endif