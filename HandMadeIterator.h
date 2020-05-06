//
// Created by Alexey on 30.04.2020.
//
#pragma once
template<class T>
class HandMadeIterator{
    T* head;
    T* tail;
    int size;
    int counter = 0;
    T* sequence;
    public:
        HandMadeIterator(T* sequence, int size);
        void operator++(int);
        void operator--(int);
};

