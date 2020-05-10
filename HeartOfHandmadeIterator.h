//
// Created by Alexey on 10.05.2020.
//

#pragma once
template <class T>
class HeartOfHandmadeIterator {
    T* cursor;
    T* head;
    T* tail;
    public:
    HeartOfHandmadeIterator(T* head, T* tail);
    T* getCursor();
    void operator++(int);
    void operator--(int);
};



