#include <iostream>

#define BLOCK 10

// new_func does that
int new_func(int takes) {
    // something happens here ...
    return 0;
}

// making changes and fixing bugs
int main() {
    std::cout << "hi everyone" << std::endl;

    // comment
    for (int i = 0; i < BLOCK; i++) {
        std::cout << "i am printing: " << i << std::endl;
    }
}