#include <iostream>
#include "HandMadeIterator.cpp"
#include "CircularBuffer.cpp"
void shit(int* some){
    int* hui = &some[0];
    std::cout << *hui;

}
int main() {
    CircularBuffer<int> ochko(4);
    ochko.append(2213);
    ochko.append(11);


//    std::sort(ochko.getIterator().getHead(), ochko.getIterator().getTail());
//    for (int i = 0; i < 4; ++i) {
//        std::cout << ochko[i] << ' ';
//    }

    ochko.addFirst(3);
    ochko.addFirst(123);
    ochko.show();
    for (int i = 0; i < 4; ++i) {
        std::cout << ochko[i] << ' ';
    }
}