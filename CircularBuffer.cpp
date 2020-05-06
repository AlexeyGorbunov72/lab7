//
// Created by Alexey on 30.04.2020.
//

#include "CircularBuffer.h"
template <class T>
CircularBuffer<T>::CircularBuffer(T *data) {
    this->
    this->iterator.setUpIterator(data, sizeof(data)/sizeof(data[0]));
    //this->iterator(data, sizeof(data)/sizeof(data[0]));
}