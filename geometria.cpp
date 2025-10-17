#include <iostream>
#include <string>

using namespace std;

//crie uma calsse Retangulo com os atributos largura e altura

class Retangulo{
private:
    double largura;
    double altura;

public:
    //construtor
    Retangulo(double l, double a){
        setLargura(l);
        setAltura(a);
    }

    double getLargura(){
        return largura;
    }

    double getAltura(){
        return altura;
    }
    //validar valores positivos


    void setLargura(double l){
        if (l > 0){
            largura = l;
        }
        else {
            cout <<"erro, valor invalido, irá ser mantido o anterior" << endl;
        }
    }

    void setAltura(double a){
        if (a > 0){
            altura = a;
        }
        else {
            cout <<"erro, valor invalido, irá ser mantido o anterior" << endl;
        }
    }

    //área

    void area(double l, double a){
        double calc;
        calc = l* a;
        cout <<"valor da área" << calc << endl;
    }
    
        //perimetro

    void perimetro(double l, double a){
        double calc;
        calc = (2*l) + (2*a);

        cout <<"valor do perimetro" << calc << endl;
    }
};    

int main(){

    Retangulo obj(2, 4);

    //usando o get
    cout << "altura: " << obj.getAltura() << endl;
    cout << "largura: " << obj.getLargura() << endl;

    obj.area(obj.getLargura(), obj.getAltura());
    obj.perimetro(obj.getLargura(), obj.getAltura());

    //usar o set

    obj.setAltura(-3);
    obj.setLargura(10);

    cout << "altura: " << obj.getAltura() << endl;
    cout << "largura: " << obj.getLargura() << endl;

    obj.area(obj.getLargura(), obj.getAltura());
    obj.perimetro(obj.getLargura(), obj.getAltura());



    return 0;
}
