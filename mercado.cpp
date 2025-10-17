#include <iostream>
#include <string>
using namespace std;

class Produto{
//crie uma classe Produto, com os atributos pivados nome, preco e estoque
private:
    string nome;
    double preco;
    int estoque;

public:
    //construtor
    Produto(string n, double p, int e){
        nome = n;
        preco = p;
        estoque = e;

        cout << "produto criado com o nome: " << nome 
        << " preço R$ " << preco 
        <<  " quantidade no estoque: " << estoque << endl;

    }

    //add estoque
    void addEstoque (int quantidade){
        if (quantidade > 0){
            estoque += quantidade;
            cout <<"quantidade no estoque, após a adição: " << estoque << endl;
        }
        else {
            cout <<"erro, você não queria chamar a remoção?" << endl;
        }
    }
    //remover estoque
    void removerEstoque(int quantidade){
        if (quantidade > 0){
            estoque -= quantidade; 
            cout <<"quantidade no estoque, após a remoção: " << estoque << endl;
        }
        else{
            cout <<"erro, não digite valores negativos" << endl;
        }
    }

    //alterar preço
    void NovoPreco(double novo){
        if (novo > 0){
            preco = novo;
            cout << "novo preço: " << preco << endl;
        }
        else {
            cout << "valor invalido" << endl;
        }
    }
    //exibir informações

    void exibirInfo(){
        cout << "valores mercadin, jeremias"
        << nome << " R$" << preco 
        << " estoque: " << estoque << endl; 
    }

};


int main (){

    Produto item("bandeja de ovos", 12.59, 8);

    item.addEstoque(2);
    item.removerEstoque(4);
    item.NovoPreco(10.56);
    item.exibirInfo();


    return 0;
}



