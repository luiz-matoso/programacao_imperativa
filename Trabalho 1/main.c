#include <stdio.h>

#define Limite 100

int main() {
    FILE *arquivo;
    int numeros[Limite];
    int tamanho = 0;
    int valor;
    int i;

    // ler primeira linha do arquivo e definir tamanho do vetor;

    arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    if (fscanf(arquivo, "%d", &tamanho) != 1) {
        printf("Erro ao ler o tamanho do vetor.\n");
        fclose(arquivo);
        return 1;
    }

    if (tamanho > Limite) {
        printf("Erro! O limite do vetor é de 100 números.\n");
        fclose(arquivo);
        return 1;
    }

    for (i = 0; i < tamanho; i++) {
        if (fscanf(arquivo, "%d", &valor) != 1) {
            printf("Erro ao ler os números do arquivo.\n");
            fclose(arquivo);
            return 1;
        }
        numeros[i] = valor;
    }

    fclose(arquivo);

    // gerando o arquivo estatisticas.txt com os dados;

    int qtdPositivos = 0;
    int qtdNegativos = 0;
    int qtdZeros = 0;
    int qtdPares = 0;
    int qtdImpares = 0;

    for(i = 0; i < tamanho; i++){
        if (numeros[i] > 0){
            qtdPositivos++;
        } else if (numeros[i] < 0){
            qtdNegativos++;
        }
    }

    for(i = 0; i < tamanho; i++){
        if (numeros[i] == 0){
            qtdZeros++;
        } else if (numeros[i] % 2 == 0){
            qtdPares++;
        } else{
            qtdImpares++;
        }
    }

    arquivo = fopen("estatisticas.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(arquivo, "Quantidade de números positivos: %d\n", qtdPositivos);
    fprintf(arquivo, "Quantidade de números negativos: %d\n", qtdNegativos);
    fprintf(arquivo, "Quantidade de números igual a zero: %d\n", qtdZeros);
    fprintf(arquivo, "Quantidade de números pares: %d\n", qtdPares);
    fprintf(arquivo, "Quantidade de números impares: %d\n", qtdImpares);


    fclose(arquivo);

    // gerando o arquivo distintos.txt com os dados;

    int j;
    int distintos[Limite];
    int qtdDistintos = 0;

    arquivo = fopen("distintos.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for(i = 0; i < tamanho; i++){
        int numeroDistinto = 1;

        for(j = 0; j < qtdDistintos; j++){
            if (numeros[i] == numeros[j]){
                numeroDistinto = 0;
                break;
            }            
        }

        if (numeroDistinto){
            distintos[qtdDistintos] = numeros[i];
            qtdDistintos++;
        }
    }

    for (int i = 0; i < qtdDistintos; i++){
        fprintf(arquivo, "%d ", distintos[i]);
    }

    fclose(arquivo);
    

    // gerando o arquivo ordenado.txt com os dados;

    int temp;

    arquivo = fopen("ordenado.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (i = 0; i < tamanho; i++){
        for (j = 0; j < i; j++){
            if (numeros[i] < numeros[j]){
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    for (int i = 0; i < tamanho; i++){
        fprintf(arquivo, "%d ", numeros[i]);
    }

    fclose(arquivo);

    // gerando o arquivo distintos_ordenado.txt com os dados;

    arquivo = fopen("distintos_ordenado.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

// Ordenar os números distintos
    for (i = 0; i < qtdDistintos - 1; i++) {
        for (j = 0; j < qtdDistintos - 1 - i; j++) {
            if (distintos[j] > distintos[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                temp = distintos[j];
                distintos[j] = distintos[j + 1];
                distintos[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < qtdDistintos; i++){
        fprintf(arquivo, "%d ", distintos[i]);
    }

    fclose(arquivo);


    return 0;
}
