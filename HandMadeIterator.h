//
// Created by Alexey on 30.04.2020.
//
#pragma once
template<T>{
    class HandMadeIterator {
        T it;
        T* sequence;
        unsigned int size;
        public:
            HandMadeIterator();
            void operator++();
            void operator--();
            bool operator==();
            bool operator!=();

    };
}



