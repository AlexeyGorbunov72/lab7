//
// Created by Alexey on 30.04.2020.
//

#include "HandMadeIterator.h"
template <class T>
HandMadeIterator<T>::HandMadeIterator(T* sequence, int size) {
    this->size = size;
    this->sequence = sequence;
}

template <class T>
void HandMadeIterator<T>::operator++(int){
    this->counter++;
    this->tail = &this->sequence[this->counter % this->size];
    std::cout << *tail << std::endl;
}

template <class T>
void HandMadeIterator<T>::operator--(int) {
    this->counter--;
    if(this->counter < 1){
        this->counter = this->size + this->counter;
    }
    this->tail = &this->sequence[this->counter  % this->size];
    std::cout << *tail << "counter: " << this->counter << std::endl;
}