#include <iostream>

#include <string>

using namespace std;

//Crie uma classe Veiculo com atributos protected marca e ano.

class Veiculo{
protected:

    string marca;

    int ano;

private:

    string id;

public:

//construtor
Veiculo(string m, int a){
    marca = m;
    ano = a;
    id = m + to_string(a);
    cout << "carro criado, marca: " << marca << endl;
    }

    void exibirInfo(){
        cout << "marca: " << marca <<" ano: " << ano <<endl;
    }
};

//Crie uma classe derivada Carro
class Carro : public Veiculo {



private:

    int porta;

public:

    //construtor
    Carro (string m, int a, int p) : Veiculo(m, a){
    porta = p;
}

//adiciona o atributo portas. Implemente métodos para exibir informações.

    void exibirInfoCompleta (){
    cout << "carro da marca: "<< marca <<" ano: " << ano << " tem " << porta << "portas" << endl;
    }

};

int main (){

    Veiculo moto ("honda", 2023);

    moto.exibirInfo();


    Carro obj("fiat", 2025, 4);

    obj.exibirInfoCompleta();

return 0;

}