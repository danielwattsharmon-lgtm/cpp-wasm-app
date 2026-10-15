#include <iostream>
#include <emscripten/emscripten.h>

extern "C" {
    // EMSCRIPTEN_KEEPALIVE keeps functions from being optimized away during compilation
    EMSCRIPTEN_KEEPALIVE
    int addNumbers(int a, int b) {
        return a + b;
    }
}

int main() {
    std::cout << "C++ WebAssembly module loaded successfully!" << std::endl;
    return 0;
}
