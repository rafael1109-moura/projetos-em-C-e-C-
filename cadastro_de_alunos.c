#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int matricula;
    float nota;
}aluno;


void maior_nota(aluno grupo[], int n){
    float maior = grupo[0].nota;
    for (int i = 0; i < n; i++){
        if (grupo[i].nota > maior){
            maior = grupo[i].nota;
        }
    }
    printf("a maior nota foi: %.2f \n", maior);
}

void mostrar_dados(aluno grupo[], int n){
    for (int i = 0; i < n; i++){
        printf("nome: %s, idade: %d, altura: %.2f\n", grupo[i].nome, grupo[i].matricula, grupo[i].nota);
    }
}

int main() {
    
    aluno grupo[3];
    
    for (int i = 0; i < 3; i++){
        printf("digite os dados da pessoa %d \n", i);
        
        printf("nome: \n");
        scanf("%s", grupo[i].nome);
        
        printf("matricula: \n");
        scanf("%d", &grupo[i].matricula);
        
        printf("nota: \n");
        scanf("%f", &grupo[i].nota);
    }
    
    maior_nota(grupo, 3);
    
    mostrar_dados(grupo, 3);
    


    return 0;
}