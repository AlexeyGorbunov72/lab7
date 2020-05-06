#include <iostream>
#include "HandMadeIterator.cpp"
#include "CircularBuffer.cpp"
void shit(int* some){
    int* hui = &some[0];
    std::cout << *hui;

}
int main() {
    int a[5];
    CircularBuffer<int> ochko(a, 5);
    ochko.append(10);
    ochko.append(11);
    ochko.append(12);
    ochko.append(111);
    ochko.append(34243);
    ochko.append(123321);
    ochko.append(-131231);
    ochko.show();
}