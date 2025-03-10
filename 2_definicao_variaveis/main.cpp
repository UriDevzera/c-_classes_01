// import biblioteca de entrada e saída
#include <iostream>

// usando o namespace std
using namespace std;

int main()
{
    int idade{8};
    string nome{"Lucas"};
    cout << "O nome do usuario e: " << nome << " e sua ideade e " << idade << '\n';
    return 0;
}

/*
    Algumas flags do compilar g++
    -Werror - transforma todos os warnings em erros
    -Wall - ativa todos os warnings
    g++ -Werror -Wall main.cpp (compoila procurando erros e warnings, não permitindo compilar caso tenha)
*/

/*
    char - 8 bits (uma letra ou de -128 a 127)
    int - 32 bits (de -2.147.483.648 a 2.147.483.647)
    float - 32 bits (7 digitos significativos)
    double - 64 bits (digitos significativos)
    bool - 8 bits (true ou false)
    void - sem tipo

    string - não é um tipo primitivo, é uma classe
    para definir uma variavei do tipo instringue é necessario utilizar std::string

    existem variaveis unsigned que não aceitam valores negativos
    int unsigned x; - 32 bits (de 0 a 4.294.967.295)
    char unsigned f; - 8 bits (de 0 a 255)

    exitem variaveis signed que aceitam valores negativos
    int signed x; - 32 bits (de -2.147.483.648 a 2.147.483.647)
    char signed f; - 8 bits (de -128 a 127)
*/

/*
    Definir = criar variaveis;
    Declarar ou Inicializar = atribuir valor a variavel;
*/

/*
    Formas de definir variáveis no c++
    int x; --certo (inteiro) compila
    char letra_inicial; --certo (pode ter underline) compila
    double _y; --certo (pode começar com underline) compila
    int 9x; --errado (não pode começar com número) não compila
    int x, int y; --errado (não pode repetir o tipo) não compila
    int z, float r; --errado (não pode misturar tipos) não compila
    char word; int z8; --certo (pode ter número depois das letras) compila mas não é recomendado
*/

/*
    lvalue - left value (lado esquerdo) - variável que pode receber valor (definicão da variaveil)
    rvalue - right value (lado direito) - valor que pode ser atribuido a uma variável (inicialização da variavel)
*/

/*
    Tipos de inicialização de variaveis
    Inicialização direta: int x = 8;
    Inicialização por cópia: int x(8);
    Inicialização uniforme: int x{8}; //usar sempre que possivel por ser mais performático
    int x = {8} //continua sendo Inicialização Uniforme dependendo do padrão de desenvolvimento
                  é recomendado por ficar mais claro ao dizer com = a atribuição do valor

    recomendado sempre inicializar com valor
    double z {};
    char gun = '';
    int x();
*/