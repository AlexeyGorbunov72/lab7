//
// Created by Alexey on 30.04.2020.
//
#pragma once

template <class T>
class CircularBuffer {
    HandMadeIterator<T> iterator;
    int counterOfItems;
    int size;
    T* data;
public:
    CircularBuffer(int size);
    void append(T value);
    void show();
    void remove(unsigned int at);
    void insert(unsigned int in, T value);
    void deleteAll();
    bool isFull();
    void setupBuffer(int size);
};
