 #include <iostream>
#include <string>
#include <cmath>
#define _USE_MATH_DEFINES 
#include <cmath> 

using namespace std;

// Classe Base Abstrata
class Forma {
protected:

public:

    Forma() {
    }

    virtual double calcularArea() = 0; 
    
    virtual void exibirInformacoes() {
        cout << "Informações da Forma (Não especificada)" << endl;
    }
    
    virtual ~Forma() {}
};


class Quadrado : public Forma {
private:
    double altura;
    double largura;
    
public: 
    // O construtor inicializa seus próprios membros
    Quadrado (double a, double l) : altura(a), largura(l) {
        // NÃO precisa chamar o construtor Forma() se ele for vazio e não tiver membros
        cout << "Quadrado/Retângulo criado, Altura: " << altura << ", Largura: " << largura << endl;
    }
    
    // Implementa o método virtual OBRIGATÓRIO
    double calcularArea() override { 
        return largura * altura;
    }
    
    void exibirInformacoes() override {
        cout << "--- Quadrado/Retângulo ---" << endl;
        cout << "Altura: " << altura << " | Largura: " << largura << endl;
        cout << "Área: " << calcularArea() << endl; 
    }
};


class Circulo : public Forma {
private:
    double raio;
    
public:
    // O construtor inicializa seus próprios membros
    Circulo (double r) : raio(r) {
        cout << "Círculo criado, Raio: " << raio << endl;
    }
    
    // Implementa o método virtual OBRIGATÓRIO (Fórmula: PI * raio * raio)
    double calcularArea() override {
        return M_PI * raio * raio; 
    }
    
    void exibirInformacoes() override {
        cout << "--- Círculo ---" << endl;
        cout << "Raio: " << raio << endl;
        cout << "Área: " << calcularArea() << endl; 
    }
};

int main (){

    // Criando objetos das classes derivadas
    Quadrado quad(10.0, 5.0); // Altura 10, Largura 5
    Circulo circ(4.0);         // Raio 4

    cout << "\n--- Resultados ---\n";

    // Demonstração de Polimorfismo
    // O ponteiro 'Forma*' pode apontar para objetos de Quadrado ou Círculo
    Forma* forma1 = &quad;
    Forma* forma2 = &circ;

    forma1->exibirInformacoes();
    cout << "Área calculada (Polimórfica): " << forma1->calcularArea() << endl;
    
    cout << "\n";

    forma2->exibirInformacoes();
    cout << "Área calculada (Polimórfica): " << forma2->calcularArea() << endl;

    return 0;
}