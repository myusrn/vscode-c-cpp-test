#include <iostream>

// int main(int, char**) {
//     std::cout << "Hello, world!\n";
//     return 0;
// }

void sayHello() {
    std::cout << "Hello, world (from function)!\n";
}

int main(int, char**) {
    sayHello();
    return 0;
}