#include <stdio.h>

int main(){
    
    // 3. Elabore um programa em C para simular uma calculadora com as quatro operações básicas
    // (adição, subtração, multiplicação e divisão), usando a estrutura switch. O programa deve
    // receber, como entrada, dois operandos (double) e um operador (char). Como saída, o programa
    // deve exibir o resultado da aplicação do operador sobre os dois operandos.


    double valor1, valor2, total;
    char operador;

    printf("!-! Calculadora !-!");
    printf("[+] Adição | [-] Subtração | [*] Multiplicação | [/] Divisão | [x] Sair\n");
    printf("Escolha a operação que quer realizar (+, -, *, /): ");
    scanf("%c", &operador);

    printf("Entre com o primeiro valor: ");
    scanf("%lf", &valor1);

    printf("Entre com o segundo valor: ");
    scanf("%lf", &valor2);

    switch (operador){
        case '+':
            total = valor1 + valor2;
            printf("Operação realizada! Resultado da adição: %.2f", total);
            break;
        case '-':
            total = valor1 - valor2;
            printf("Operação realizada! Resultado da subtração: %.2f", total);
            break;
        case '*':
            total = valor1 * valor2;
            printf("Operação realizada! Resultado da multiplicação: %.2f", total);
            break;
        case '/':
            total = valor1 / valor2;
            printf("Operação realizada! Resultado da divisão: %.2f", total);
            break;
        default:
            printf("Operador Inválido!\n");
    }

    return 0;
    
}