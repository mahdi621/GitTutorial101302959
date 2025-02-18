#include "TAArray.h"

TAArray::TAArray(int capacity) 
    : capacity(capacity), size(0)
{
    array = new TextArea*[capacity];
}

TAArray::TAArray() 
    : capacity(10), size(0)
{
    array = new TextArea*[capacity];
}

TAArray::~TAArray() {
    for (int i = 0; i < size; ++i) {
        delete array[i]; 
    }
    delete[] array; 
}


bool TAArray::add(TextArea* ta) {
    if (size < capacity) {
        array[size++] = ta;
        return true;
    }
    return false;
}

bool TAArray::add(TextArea* ta, int index) {
    if (index >= 0 && index <= size && size < capacity) {
        for (int i = size; i > index; --i) {
            array[i] = array[i - 1];
        }
        array[index] = ta;
        ++size;
        return true;
    }
    return false;
}

TextArea* TAArray::get(int index) const {
    if (index >= 0 && index < size) {
        return array[index];
    }
    return nullptr;
}

TextArea* TAArray::get(const std::string& id) const {
    for (int i = 0; i < size; ++i) {
        if (array[i] && array[i]->getID() == id) {
            return array[i];
        }
    }
    return nullptr;
}


TextArea* TAArray::remove(int index) {
    if (index < 0 || index >= size) {
        return nullptr;
    }
    TextArea* removed = array[index];
    delete array[index];

    for (int i = index; i < size - 1; ++i) {
        array[i] = array[i + 1];
    }
    array[size - 1] = nullptr;
    --size;

    return removed; 
}

TextArea* TAArray::remove(const string& id) {
    for (int i = 0; i < size; ++i) {
        if (array[i] && array[i]->getID() == id) {
            TextArea* removed = array[i];
            delete array[i];
            
            for (int j = i; j < size - 1; ++j) {
                array[j] = array[j + 1];
            }
            array[size - 1] = nullptr;
            --size;
            return removed;
        }
    }
    return nullptr;
}

int TAArray::getSize() const {
    return size;
}

void TAArray::print() const {
    for (int i = 0; i < size; ++i) {
        if (array[i]) {
            array[i]->print();
        }
    }
}
