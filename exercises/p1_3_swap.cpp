// PREP-1.1: hello world.
// Comments are ASCII-only on purpose: avoids codepage issues in MSVC consoles.
#include <iostream>


void swap_by_value(int a, int b){
    int tmp = b;
    b = a;
    a = tmp;
}


void swap_by_refence(int& a, int& b){
    int tmp = b;
    b = a;
    a = tmp;
}

void swap_by_pointer(int* a, int* b){
    int tmp = *b;
    *b = *a;  
    *a = tmp;
}


int main() {

     // by value
    std::cout << "by value" << std::endl;
    int e = 10;
    int f = 15;
    std::cout << "before swap:" << std::endl;
    std::cout << "e:" <<  e << "  f:" << f << std::endl;
    std::cout << "e adr:" <<  &e << " f adr:" << &f << std::endl;
    swap_by_value(e, f);
    std::cout << "after swap:" << std::endl;
    std::cout << "e:" <<  e << "  f:" << f << std::endl;
    std::cout << "e adr:" <<  &e << " f adr:" << &f << std::endl;
    std::cout << std::endl;

    
    // by reference
    std::cout << "by reference" << std::endl;
    int a = 10;
    int b = 15;
    std::cout << "before swap:" << std::endl;
    std::cout << "a:" <<  a << "  b:" << b << std::endl;
    std::cout << "a adr:" <<  &a << " b adr:" << &b << std::endl;
    swap_by_refence(a, b);
    std::cout << "after swap:" << std::endl;
    std::cout << "a:" <<  a << "  b:" << b << std::endl;
    std::cout << "a adr:" <<  &a << " b adr:" << &b << std::endl;
    std::cout << std::endl;


    //by pointer
    std::cout << "by pointer" << std::endl;
    int c = 44;
    int d = 55;
    int *k = &c;
    int *j = &d;

    std::cout << "before swap:" << std::endl;
    std::cout << "k:" <<  *k << "  j:" << *j << std::endl;
    std::cout << "k adr:" <<  k << "  j adr:" << j << std::endl;
    swap_by_pointer(k, j);

    std::cout << "after swap:" << std::endl;
    std::cout << "k:" <<  *k << "  j:" << *j << std::endl;
    std::cout << "k adr:" <<  k << "  j adr:" << j << std::endl;
    std::cout << std::endl;

    
    return 0;

}

