#include <iostream>
#include "HandMadeIterator.cpp"
#include "CircularBuffer.cpp"
void shit(int* some){
    int* hui = &some[0];
    std::cout << *hui;

}
int main() {
    CircularBuffer<int> ochko(4);
    ochko.append(1);
    ochko.append(2);
    ochko.append(3);
    ochko.remove(2);
    ochko.show();

}