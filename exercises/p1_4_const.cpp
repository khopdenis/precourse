#include <iostream>


struct BigStruct {
     double data[10000]; 
};

void byValue(BigStruct s){
    std::cout << "in "<< &s << std::endl;
};

void byConstReference(const BigStruct& s){
    std::cout << "in "<< &s << std::endl;
};


int main() {
    

    const int x = 5;
    //x = 6; // тут получаем ошибку компиляции

    int a = 1;
    int b = 2;
    const int* p1 = &a;
    //*p1 = 34;  // error: read-only variable is not assign
    p1 = &b;

    int* const p2 = &a;
    *p2 = 34;
    //p2 = &b; //  error: cannot assign to variable 'p2' with const-qualified type 'int *const'

    const int* const p3 = &a;
    //*p3 = 45; //  error: read-only variable is not assignable
    //p3 = &b; // error: cannot assign to variable 'p3' with const-qualified type 'const int *const'

    std::cout << x << ' ' << *p1 << ' ' << *p3 << ' ' << b << std::endl;

    BigStruct bs;

    std::cout << "out "<< &bs << std::endl;
    byValue(bs);
    std::cout << "out "<<&bs << std::endl;
    byConstReference(bs);

    return 0;
}