#include <iostream>

void swap(int * a, int * b) {
    int z = *a;
    *a = *b;
    *b = z;
}

int main() {
    int i = 25;
    int d = 6;
    swap(&i, &d);
    std::cout << i << std::endl << d << std::endl;
    return 0;
}