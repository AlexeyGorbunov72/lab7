//
// Created by Alexey on 30.04.2020.
//

#include "HandMadeIterator.h"
template <class T>
HandMadeIterator<T>::HandMadeIterator() {}

template <class T>
void HandMadeIterator<T>::operator++(int){
    this->counter++;
    this->tail = &this->sequence[this->counter % this->size];
    //std::cout << *tail << std::endl;
}

template <class T>
void HandMadeIterator<T>::operator--(int) {
    this->counter--;
    if(this->counter < 1){
        this->counter = this->size + this->counter;
    }
    this->tail = &this->sequence[this->counter  % this->size];
    //std::cout << *tail << "counter: " << this->counter << std::endl;
}
template  <class T>
void HandMadeIterator<T>::setUpIterator(T* sequence, int size) {
    this->size = size;
    this->sequence = sequence;
    this->tail = &sequence[0];
    this->head = &sequence[0];
}

template <class T>
void HandMadeIterator<T>::operator<<(T value) {
    if (this->tail == this->head){
        this->head =  &this->sequence[(this->counter + 1) % this->size];
    }
    *this->tail = value;
}

template <class T>
T* HandMadeIterator<T>::getTail() {
    return this->tail;
}

template <class T>
T* HandMadeIterator<T>::getHead() {
    return this->head;
}

template <class T>
void HandMadeIterator<T>::setHead(T *value) {
    this->head = value;
}

template  <class T>
void HandMadeIterator<T>::setTail(T *value) {
    this->tail = value;
}

template  <class T>
void HandMadeIterator<T>::setCounter(int value)  {
    this->counter = value;
}

template  <class T>
int HandMadeIterator<T>::getCounter() {
    return this->counter;
}