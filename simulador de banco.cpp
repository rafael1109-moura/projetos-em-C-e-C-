#include <iostream>
#include <string>
using namespace std;

class banco {
public:
    double saldo = 0;
    
    void depositar(double a){
        saldo += a;
        cout <<"novo saldo: " << saldo << " após o deposito de : " << a << endl;
    }
    void sacar(double b){
        if (b <= saldo){
            saldo -= b;
            cout <<"novo saldo: " << saldo << " após o saque de: " << b << endl;
        }
        else {
            cout << "saldo insuficiênte, você tem: " << saldo << endl;
        }
    }
    void consultar(){
        cout <<"seu saldo é: "<< saldo << endl;
    }
    
    
    
};

int main()
{
    banco exibir;
    
    exibir.depositar(10);
    exibir.sacar(5);
    exibir.consultar();
    
    return 0;
}


