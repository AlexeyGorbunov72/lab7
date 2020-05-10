//
// Created by Alexey on 10.05.2020.
//

#include "HeartOfHandmadeIterator.h"
template <class T>
void HeartOfHandmadeIterator<T>::operator++(int) {
    cursor + 1 > tail ? cursor = head : cursor++;
}
template <class T>
T* HeartOfHandmadeIterator<T>::getCursor() {
    return cursor;
}
template <class T>
HeartOfHandmadeIterator<T>::HeartOfHandmadeIterator(T *head, T *tail) {
    this->head = head;
    this->tail = tail;
    this->cursor = head;
}
template <class T>
void HeartOfHandmadeIterator<T>::operator--(int) {
    cursor - 1 < head ? cursor = tail : cursor--;
}