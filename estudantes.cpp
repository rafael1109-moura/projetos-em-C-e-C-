#include<iostream>
#include <string>

using namespace std;

//Crie classes Pessoa (pai) 
class Pessoa {

protected:
    string nome;
    int idade;

public:
    //construtor
    Pessoa (string n, int i){
        nome = n;
        idade = i;
        cout <<"pessoa criada, nome: " << nome << "idade: " << idade << endl;
    }
    ~Pessoa (){
        cout <<"destrutor, do pai, chamado" << endl;
    }
}; 

//classe filho Estudante (herda de Pessoa)
class Estudante : public Pessoa {
protected:
    int materias;
public:
    //construtor
    Estudante (string n, int i, int m) : Pessoa(n, i){
        materias = m;
        cout <<"estudante criado, nome: " << nome << "idade: " << idade << " materias :" << materias << endl;
    }

    ~Estudante (){
        cout << "destrutor do estudante chamado" << endl;
    }
};

class EstudanteUniversitario : public Estudante {
private:
    int estagio;

public:
    //construtor
    EstudanteUniversitario(string n, int i, int m, int e) : Estudante(n, i, m){
        estagio = e;
         cout <<"estudante criado, nome: " << nome << "idade: " << idade 
         << " materias :" << materias << " estagio: " << estagio << endl;

    }

    ~EstudanteUniversitario(){
        cout << "destrutor do estudante universitario chamado" << endl;
    }
};

int main(){

    cout <<"---iniciando o programa ---" << endl;
    Estudante obj1("maria", 13, 9);
    cout <<"-----------------" << endl;
    EstudanteUniversitario obj2("Rafael", 25, 5, 1);
    cout <<"---fim do programa ---" << endl;


    return 0;
}




