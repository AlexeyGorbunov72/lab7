//
// Created by Alexey on 30.04.2020.
//
#pragma once

template <class T>
class CircularBuffer {
    HandMadeIterator<T> iterator();

public:
    CircularBuffer(T* data);
    void append(T value);
};
