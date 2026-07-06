#include <iostream>

int main(){
    int a = 10;
    int* p = &a;
    p = nullptr;
    std::cout << p;
    if (p)
    {
        int b = *p;
        std::cout << b;
    }

    int b = *p;
    std::cout << b;
    
    
    return 0;
}