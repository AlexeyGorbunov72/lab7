//
// Created by Alexey on 30.04.2020.
//
#pragma once
template<class T>
    class
    HandMadeIterator {
        T it;
        T* sequence;
        T* head;
        T* tail;
        int counter = 0;
        unsigned int size;
        public:
            HandMadeIterator(T* squence, int size);
            void operator++();
            void operator--();
           //bool operator==();
           //bool operator!=();

    };




