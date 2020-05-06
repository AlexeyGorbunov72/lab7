//
// Created by Alexey on 30.04.2020.
//

#include "CircularBuffer.h"
template <class T>
CircularBuffer<T>::CircularBuffer(T* data, int size) {
    this->iterator.setUpIterator(data, size);
    //this->iterator(data, sizeof(data)/sizeof(data[0]));
}
template <class T>
void CircularBuffer<T>::append(T value) {
    this->iterator++;
    this->iterator << value;
}

template <class T>
void CircularBuffer<T>::show() {
    T* begin = iterator.getTail();
    T* end = iterator.getHead();
    int counter = iterator.getCounter();


    int localCounter = 0;
    while (iterator.getHead() != iterator.getTail()){
        localCounter++;
        std::cout << *iterator.getTail() << " | " << iterator.getTail() << " | " << iterator.getHead() << std::endl;
        iterator--;
    }
    std::cout << *iterator.getTail() << " | " << iterator.getTail() << " | " << iterator.getHead() << std::endl;
    iterator.setTail(begin);
    iterator.setHead(end);
    iterator.setCounter(counter);

}