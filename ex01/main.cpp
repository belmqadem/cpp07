#include "iter.hpp"

void f(int const &i) {
    std::cout << "Value: " << i << std::endl;
}

void fo(char const &c) {
    std::cout << "Value: " << c << std::endl;
}

int main() {
    int tab[] = {23, 10, 42, 13, 37, 99};
    ::iter(tab, sizeof(tab) / sizeof(tab[0]), f);

    std::endl(std::cout);

    char tab2[] = {'a', 'b', 'c'};
    ::iter(tab2, sizeof(tab2) / sizeof(tab2[0]), fo);
    return 0;
}