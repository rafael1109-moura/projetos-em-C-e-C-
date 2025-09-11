
#include <stdio.h>

int busca_sequencial(int vetor[], int n, int chave){
 
    for (int i= 0; i < n; i++){
        if(vetor[i] == chave){
            return i + 1;
        }
    }
    return -1;
}

int busca_binaria(int vetor[], int n, int chave){
    
    int inicio = 0; 
    int fim = n - 1;
    
    while (inicio <= fim){
        int meio = (inicio + fim) / 2;
        
        if (vetor[meio] == chave){
            return meio;
        }
        else if (chave > vetor[meio]){
                inicio = meio + 1;
            }
        else if (chave < vetor[meio]){
                fim = meio -1;
            }
    }
    return -1;
}



int main()
{
    int posicao;
    int vetor [] = {10, 25, 30, 45, 50};
    
    posicao = busca_binaria(vetor, 5, 50);
    
    printf("%d", posicao);

    return 0;
}