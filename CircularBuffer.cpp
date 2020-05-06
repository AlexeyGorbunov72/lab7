//
// Created by Alexey on 30.04.2020.
//

#include "CircularBuffer.h"
template <class T>
CircularBuffer<T>::CircularBuffer(int size) {
    this->size = size;
    this->setupBuffer(size);
}
template <class T>
 void CircularBuffer<T>::deleteAll() {
    this->setupBuffer(this->size);
}
template <class T>
void CircularBuffer<T>::setupBuffer(int size) {
    this->data = new T[size];
    this->iterator.setUpIterator(this->data, size);
    this->counterOfItems = 0;

}
template <class T>
void CircularBuffer<T>::append(T value) {
    this->iterator++;
    this->iterator << value;
    this->counterOfItems++;
}
template <class T>
bool CircularBuffer<T>::isFull() {
    return this->counterOfItems >= this->size;
}
template <class T>
void CircularBuffer<T>::show() {
    T* begin = iterator.getTail();
    T* end = iterator.getHead();
    int counter = iterator.getCounter();

    std::cout << "- - - -  - - --  - - -  - - - -" << std::endl;
    int localCounter = 0;
    while (iterator.getHead() != iterator.getTail()){
        localCounter++;
        std::cout << *iterator.getTail() << " | " << iterator.getTail() << " | " << iterator.getHead() << std::endl;
        iterator--;
    }
    if(this->isFull()){
        std::cout<< *iterator.getHead() << std::endl;
    }

    std::cout << "- - - -  - - --  - - -  - - - -" << std::endl;
    iterator.setTail(begin);
    iterator.setHead(end);
    iterator.setCounter(counter);
}

template  <class T>
void CircularBuffer<T>::insert(unsigned int in, T value) {
    T* bufferOfData = this->data;
    int indexOfHead;
    int indexOfTail;
    int supportVariable = 0;
    for(int i = 0; i  < this->size; i++){
        if(&this->data[i] == this->iterator.getHead()){
            indexOfHead = i;
        }
        if(&this->data[i] == this->iterator.getTail()){
            indexOfTail = i;
        }
    }
    this->setupBuffer(this->size);
    if(this->isFull()){
        for(int i = indexOfHead; i < this->size + indexOfHead; i++){
            std::cout<< bufferOfData[i % this->size] << std::endl;
            if(i == in){
                this->append(value);
                supportVariable = 1;
                continue;
            }
            this->append(bufferOfData[(i - supportVariable) % this->size]);

        }
        return;
    }
    for(int i = indexOfHead + 1; i < this->size + indexOfHead; i++){
        std::cout<< bufferOfData[i % this->size] << std::endl;
        if(i == in){
            this->append(value);
            supportVariable = 1;
            continue;
        }
        this->append(bufferOfData[(i - supportVariable) % this->size]);

    }

}

template <class T>
void CircularBuffer<T>::remove(unsigned int at) {
    T* bufferOfData = this->data;
    int indexOfHead;
    int indexOfTail;
    int supportVariable = 0;
    for(int i = 0; i  < this->size; i++){
        if(&this->data[i] == this->iterator.getHead()){
            indexOfHead = i;
        }
        if(&this->data[i] == this->iterator.getTail()){
            indexOfTail = i;
        }
    }
    this->setupBuffer(this->size);
    if(this->isFull()){
        for(int i = indexOfHead; i < this->size + indexOfHead; i++){
            if(i == at){
                supportVariable = 1;
               // continue;
            }
            std::cout<< bufferOfData[i % this->size] << std::endl;
            this->append(bufferOfData[(i + supportVariable) % this->size]);

        }
        return;
    }
    for(int i = indexOfHead + 1; i < this->size + indexOfHead; i++){

        if(i == at){
            supportVariable = 1;
            //continue;
        }
        std::cout<< bufferOfData[i % this->size] << std::endl;
        this->append(bufferOfData[(i + supportVariable) % this->size]);

    }
}