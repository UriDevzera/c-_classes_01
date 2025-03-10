#include <iostream>

int main()
{
    char letra{'a'};
    std::cout << "Letra minuscula: " << letra << '\n';          // a
    std::cout << "Letra maiuscula: " << toupper(letra) << '\n'; // A
    letra = toupper(letra);
    std::cout << "Letra maiuscula: " << letra << '\n'; // A
    return 0;
}