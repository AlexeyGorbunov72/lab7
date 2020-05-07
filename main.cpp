#include <iostream>
#include "HandMadeIterator.cpp"
#include "CircularBuffer.cpp"
void shit(int* some){
    int* hui = &some[0];
    std::cout << *hui;

}
int main() {
    CircularBuffer<int> buffer(4);
    buffer.append(2213);
    buffer.append(11);


//    std::sort(ochko.getIterator().getHead(), ochko.getIterator().getTail());
//    for (int i = 0; i < 4; ++i) {
//        std::cout << buffer[i] << ' ';
//    }

    buffer.addFirst(3);
   
    buffer.show();
    for (int i = 0; i < 4; ++i) {
        std::cout << buffer[i] << ' ';
    }
}