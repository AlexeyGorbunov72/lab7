//
// Created by Alexey on 30.04.2020.
//
#pragma once

#include "HeartOfHandmadeIterator.cpp"
template<class T>
class HandMadeIterator{
    T* head;
    T* end;
    public:
    HeartOfHandmadeIterator Begin();
    HeartOfHandmadeIterator End();
};

