#include <iostream>
#include "HandMadeIterator.cpp"
void shit(int* some){
    int* hui = &some[0];
    std::cout << *hui;

}
int main() {
    int a[4];
    a[0] = 2;
    a[1] = 23;
    a[2] = 23;
    a[3] = 321;

    HandMadeIterator<int> blyadina(&a[0], 4);
    shit(a);

}