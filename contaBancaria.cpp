#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
//Crie uma classe abstrata ContaBancaria 

class ContaBancaria{
protected:
    double saldoInicial;
    string nome;
    //construtor
public:
    ContaBancaria(double s, string n) : saldoInicial(s), nome(n){}
    //métodos virtuais puros
    virtual double calcularTaxa() = 0;
    virtual double calcularRendimento() = 0;

    virtual void exibirInfo(){
        cout << "----------------" << endl;
        cout << "nome: " << nome << endl;
        cout << "saldo inicial: " << saldoInicial << endl;
    }
    virtual ~ContaBancaria(){}

};

class ContaPoupanca : public ContaBancaria{
private:
    double taxa;
    double rendimento;
public:
    //construtor
    ContaPoupanca(double s, string n) : ContaBancaria(s, n){
        taxa = 0.00;
        rendimento = 0.00;
    }

    double calcularRendimento() override{
        rendimento = (saldoInicial * 5) / 100;
        return rendimento;
    }
    double calcularTaxa() override{
        taxa = (calcularRendimento() * 2) / 100;
        return taxa;
    }

    void exibirInfo() override{
        ContaBancaria::exibirInfo();
        cout <<"conta poupança" << endl;
        cout<< "o rendimento da poupança foi de: R$" << calcularRendimento() <<  endl;
        cout<< "a taxa da poupança foi de: R$" << calcularTaxa() << endl;
    }

};

class ContaCorrente : public ContaBancaria{
private:
    double taxa;
    double rendimento;

public:
    //construtor
    ContaCorrente (double s, string n) : ContaBancaria(s, n){
        taxa = 0.00;
        rendimento = 0.00;
    }

    double calcularRendimento() override{
        rendimento = (saldoInicial * 10) / 100;
        return rendimento;
    }
    double calcularTaxa() override{
        taxa = (calcularRendimento() * 5) / 100;
        return taxa;
    }

    void exibirInfo() override{
        ContaBancaria::exibirInfo();
        cout <<"conta corrente" << endl;
        cout<< "o rendimento da conta corrente foi de: R$" << calcularRendimento() <<  endl;
        cout<< "a taxa da conta corrente foi de: R$" << calcularTaxa() << endl;
    }
};

// Função polimórfica que trabalha com qualquer Forma
void processarConta(ContaBancaria * conta) {
 conta->exibirInfo();
 cout <<"-------------" <<endl;
}
int main() {

 cout << "=== Iniciando sistema bancario ===" << endl;
ContaCorrente obj1( 15000.00, "Maria");
ContaPoupanca obj2(15000.00, "Rafael");

 cout << "\n=== calculando POLIMORFICAMENTE ===" << endl;
 processarConta(&obj1);
 processarConta(&obj2);

// Array de ponteiros da classe base
    ContaBancaria* contas[2];
    contas[0] = &obj1;
    contas[1] = &obj2;

    // Loop que calcula a taxa total de todas as contas
    double taxaTotal = 0;
    for (int i = 0; i < 2; i++) {
        // A chamada é polimórfica: chama o calcularTaxa() da classe correta
        taxaTotal += contas[i]->calcularTaxa(); 
    }

    cout << "Taxa total calculada de todas as contas: R$ " << taxaTotal << endl;

    return 0;
}

//Crie classes derivadas ContaPoupanca e ContaCorrente cada uma com suas próprias taxas e rendimentos.