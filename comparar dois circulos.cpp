#include <iostream>
#include <cmath>
using namespace std;

class Circulo {
public:
    double raio;
    
    double calcularArea() {
        return M_PI * pow(raio, 2);
    }
    
    double calcularCircunferencia() {
        return 2 * M_PI * raio;
    }
    
    bool ehMaiorQue(Circulo outro) {
        return this->raio > outro.raio;
    }
    
    void exibirInfo() {
        cout << "O raio é: " << raio << endl;
        cout << "A área é: " << calcularArea() << endl;
        cout << "A circunferência é: " << calcularCircunferencia() << endl;
    }
};

int main() {
    Circulo c1, c2;
    
    c1.raio = 3;
    c2.raio = 5;
    
    c1.exibirInfo();
    cout << endl;
    c2.exibirInfo();
    
    cout << "\nO círculo 1 é maior que o círculo 2? "
         << (c1.ehMaiorQue(c2) ? "Sim" : "Não") << endl;

    return 0;
}





