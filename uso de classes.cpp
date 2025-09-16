#include <iostream>
#include <string>
using namespace std;

// definindo uma classe simples

class retangulo{
    public: // podem ser acessados de fora da classe
    
    float largura;
    float altura;
    
    // método para exibir informações
    float calculararea(){
       return largura * altura;
    }
};

int main(){
    // criando uma instância (obj)
    retangulo valor;
    
    //acessando e modificando os dados
    valor.largura = 10;
    valor.altura = 5;
    
     cout << "Área do retângulo: " << valor.calculararea() << endl;
    
    return  0;
}




