#include <iostream>
#include "HandMadeIterator.cpp"
#include "CircularBuffer.cpp"
void shit(int* some){
    int* hui = &some[0];
    std::cout << *hui;

}
int main() {
    int a[4];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;


    CircularBuffer<int> ochko(&a[0]);

}