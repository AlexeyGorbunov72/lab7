//
// Created by Alexey on 30.04.2020.
//

#include "HandMadeIterator.h"
template<class T>
    HandMadeIterator::HandMadeIterator(T *squence, int size) {

}
    HandMadeIterator::HandMadeIterator(T* someSequence,int someSize) {
        this->sequence = someSequence;
        this->size = someSize;
        this->tail = someSequence[0];
        this->head = someSequence[0];
    }
    void HandMadeIterator::operator++() {
        this->counter++;
        this->tail = &this->sequence[(this->counter - 1) % this->size];
        std::cout << *tail << std::endl;
    }
