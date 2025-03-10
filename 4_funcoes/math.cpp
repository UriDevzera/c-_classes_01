// import biblioteca de entrada e saída
#include <iostream>

// void exibe_ola_mundo()
// {
//     std::cout << "Hello, World!\n";
// }

int soma(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

double divide(double x, double y)
{
    return {x / y};
}

void exibeResultado(double resultado)
{
    std::cout << "Resultado: " << resultado << '\n';
}

int main()
{
    // exibe_ola_mundo();
    int resultado{soma(3, 6)};
    exibeResultado(resultado);
    resultado = subtract(3, 6);
    exibeResultado(resultado);
    resultado = multiply(3, 6);
    exibeResultado(resultado);
    double resultadoDouble{divide(3.0, 6.0)};
    exibeResultado(resultadoDouble);
    return 0;
}