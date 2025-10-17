//**Crie uma hierarquia de Instrumento musical com classes derivadas Violao, Piano e Bateria.

#include <iostream>
#include <string>

using namespace std;

class Instrumento {

protected:
    string tipo;
public:
    //construtor
    Instrumento (string t) : tipo(t){
        cout << "instrumento criado " << tipo << endl;
    }

    //método virtual
    virtual void tocar(){
        cout << tipo << "faz algum som.." << endl; 
    }
    //destrutor
    virtual ~Instrumento (){
        cout << "destrutor ativado para: " << tipo << endl;
    }

};
//Cada uma deve ter um método tocar() diferente. 
class Violao : public Instrumento {
public:

    Violao(string t) : Instrumento(t){}

    void tocar() override{
        cout << tipo << "-- sons de violao --"<< endl;
    }

};

class Piano : public Instrumento {
public:

    Piano(string t) : Instrumento(t){}

    void tocar() override{
        cout << tipo << "--PAN PAN PAN PAN --" << endl;
    }
};

class Bateria : public Instrumento{
public:

    Bateria(string t) : Instrumento(t){}

    void tocar() override{
        cout << tipo << "--tsc tsc BADUNDUNDUN--" << endl;
    }
};

// Função que recebe um instrumento (polimórfica)

void tocarInstrumento(Instrumento *instrumento){
    instrumento->tocar();
    cout <<"----------"<< endl;
}

int main (){

    Violao violao("violaozinho");
    Piano piano("pianinho");
    Bateria bateria("bateriazinha");

    cout << "\n=== TESTANDO POLIMORFISMO ===" << endl;
    tocarInstrumento(&violao);
    tocarInstrumento(&piano);
    tocarInstrumento(&bateria);

    cout << "\n=== USANDO ARRAY DE PONTEIROS ===" << endl;
    Instrumento* instrumentos[3];
    instrumentos[0] = &violao;
    instrumentos[1] = &piano;
    instrumentos[2] = &bateria;

    // Loop polimórfico
    for (int i = 0; i < 3; i++) {
    instrumentos[i]->tocar();
    }

    return 0;
 }

//Crie uma função que recebe um ponteiro para Instrumento e atesta com diferentes instrumentos.
