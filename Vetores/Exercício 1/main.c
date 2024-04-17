#include <stdio.h>

int main() {

    // 1. Considere uma empresa comercial que vende os seus produtos de segunda-feira a sábado. Para cada dia
    // da semana, a empresa arrecada um valor (em reais) com as vendas, denominado de faturamento.
    // Escreva um programa que registre o faturamento de cada dia de uma semana e, então, determine o
    // seguinte:
    //     1. O faturamento total da semana
    //     2. O faturamento diário médio
    //     3. O dia da semana com o menor faturamento
    //     4. O dia da semana com o maior faturamento
    // O programa deve utilizar um vetor para armazenar o faturamento da semana: cada elemento do vetor
    // corresponde ao faturamento de um dia.


    float faturamento[6] = { 800.00, 620.00, 900.00, 450.00, 800.00, 780.00 };
    float faturamento_semanal = 0.0;

    for (int i = 0; i < 6; i++){
        faturamento_semanal += faturamento[i];
    }

    printf("Faturamento semanal: %.2f\n", faturamento_semanal);

    float faturamento_medio = faturamento_semanal / 6;
    printf("Faturamento diário médio: %.2f\n", faturamento_medio);

    float menor_faturamento = faturamento[0];
    int dia_menor_faturamento = 0;
    
    for (int i = 1; i < 6; i++) {
        if (faturamento[i] < menor_faturamento) {
            menor_faturamento = faturamento[i];
            dia_menor_faturamento = i;
        }
    }
    printf("Dia com MENOR faturamento: %d\n", dia_menor_faturamento);

    float maior_faturamento = faturamento[0];
    int dia_maior_faturamento = 0;

    for (int i = 1; i < 6; i++) {
        if (faturamento[i] > maior_faturamento) {
            maior_faturamento = faturamento[i];
            dia_maior_faturamento = i;
        }
    }
    printf("Dia com MAIOR faturamento: %d\n", dia_maior_faturamento);
}