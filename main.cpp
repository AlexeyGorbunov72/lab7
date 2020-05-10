#include <iostream>     // std::cout
#include <iterator>     // std::iterator, std::input_iterator_tag
#include "HeartOfHandmadeIterator.cpp"
class MyIterator : public std::iterator<std::input_iterator_tag, int>
{
    int* p;
public:
    MyIterator(int* x) :p(x) {}
    MyIterator(const MyIterator& mit) : p(mit.p) {}
    MyIterator& operator++() {++p;return *this;}
    MyIterator operator++(int) {MyIterator tmp(*this); operator++(); return tmp;}
    bool operator==(const MyIterator& rhs) const {return p==rhs.p;}
    bool operator!=(const MyIterator& rhs) const {return p!=rhs.p;}
    int& operator*() {return *p;}
};

int main () {
    int a[5];
    a[0] = 5;
    a[1] = 4;
    a[2] = 3;
    a[3] = 2;
    a[4] = 1;
    HeartOfHandmadeIterator<int> anusSobaki = HeartOfHandmadeIterator<int >(a + 1, a + 3);
    std::cout << *anusSobaki.getCursor() << std::endl;
    anusSobaki++;
    std::cout << *anusSobaki.getCursor() << std::endl;
    anusSobaki--;
    std::cout << *anusSobaki.getCursor() << std::endl;
    anusSobaki--;
    std::cout << *anusSobaki.getCursor() << std::endl;
    anusSobaki--;
    std::cout << *anusSobaki.getCursor() << std::endl;
    anusSobaki++;
    std::cout << *anusSobaki.getCursor() << std::endl;
    anusSobaki++;
    std::cout << *anusSobaki.getCursor() << std::endl;
    anusSobaki++;
    std::cout << *anusSobaki.getCursor() << std::endl;
    return 0;
}