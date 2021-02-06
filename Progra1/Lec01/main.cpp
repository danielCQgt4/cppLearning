#include <iostream>   // Inclucion de headers
using namespace std;  // Estos definen elementos que se puede usar sin ::

void functionProp(int param = 10);  // prototipo de una funcion|metodo, el para llevar un valor por defecto. Esto es como lo que hace una interfaz

void functionReady(int param = 10) {
    cout << "functionReady -> El numero es " << param << endl;
}

int main() {
    functionProp();
    functionProp(50);
    functionReady();
    functionReady(50);

    return 0;
}

void functionProp(int param) {
    cout << "functionReady -> El numero es " << param << endl;
}