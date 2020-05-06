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
        HandMadeIterator();
        void operator++(int);
        void operator--(int);
        void setUpIterator(T* sequence, int size);
        void add(T value);
        void show();
        void operator << (T value);
        T* getTail();
        T* getHead();
        void setTail(T* value);
        void setHead(T* value);
        void setCounter(int value);
        int getCounter();
};

