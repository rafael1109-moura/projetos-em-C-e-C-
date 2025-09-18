#include <stdio.h> 

// Função que ordena um vetor por seleção
void ordenacao_por_selecao(int vetor[], int n) {
    int i, j;
    int indice_menor;
    int temporario; 

    for (i = 0; i < n - 1; i++) {
        indice_menor = i;

        for (j = i + 1; j < n; j++) {
            if (vetor[j] < vetor[indice_menor]) {
                indice_menor = j;
            }
        }

        if (indice_menor != i) {
            temporario = vetor[i];
            vetor[i] = vetor[indice_menor];
            vetor[indice_menor] = temporario;
        }
    }
}

int main (){
    return 0;
}








