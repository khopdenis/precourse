// Smoke test for the exercises mechanism:
// every exercises/*.cpp file automatically becomes its own executable target.
// For ticket PREP-1.3 just add a new file here, e.g. p1_3_swap.cpp.
#include <iostream>

int main() {
    std::cout << "exercises/*.cpp -> separate executables: OK\n";
    return 0;
}
