#include <iostream>

int main(){
    int a = 10;
    int* p = &a;
    p = nullptr;
    std::cout << p;
   

    int b = *p;
    std::cout << b;
    
    
    return 0;
}