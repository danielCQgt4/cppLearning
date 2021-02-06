#include <iostream>  // Inclucion de headers

#define sum(a, b) a + b;                   //Sirve para usarse como definiciones de marcos
#define HUMAN_MAX_AGE 123;                 //Otro ejemplo, como definir constantes;
#define MAX_PRIVILEGE "ZZZZZZZZZZZZZZZZ";  //Otro ejemplo, como definir constantes;

using namespace std;  // Estos definen elementos que se puede usar sin ::

int globalInt = 100;  // variable global

/*
Esto se debe a que las funciones que se pueden llamar en el main deben estar declaradas antes del main.
*/
void functionProp(int param = 10);  // prototipo de una funcion|metodo, el para llevar un valor por defecto. Esto es como lo que hace una interfaz

void functionReady(int param = 10) {
    cout << "functionReady -> El numero es " << param << endl;
}

//Clases
class Plane {           //Aqui solo de declara lo que se va a tener
   private:             //Bloque privado: Todo lo que este aqui sera de caracter private(metodos y atributos)
                        /* data */
   public:              //Bloque publico: Todo lo que este aqui sera de caracter public(metodos y atributos)
    Plane(/* args */);  //Constructor
    ~Plane();           //Destructor
};
//Aqui se ponen los metodos
Plane::Plane(/* args */) {
}

Plane::~Plane() {
}
//Fin clase

// main() = funcion principal como en java
int main() {
    //Condicional, se usa igual (que en js)
    if (false || true) {
    }
    if (0 || 1) {
    }

    //Se usa igual
    for (int i = 0; i < 10; i++) {
        // cout = System.out.print*("");
        // endl = [end_line] = '/n'
        cout << "Hola mundo" << endl;
    }

    //se usa igual (que en js)
    while ((1 + 1) < 15) {
    }
    while (0 || 1) {
        /* code */
    }

    // Tipos de datos
    int a = 0;  // se puede usar HEXADECIMAL -> 0xAA=170
    char b = 'A';
    double c = 0.1;
    float d = 0.2;
    bool e = false || true;
    wchar_t f[10] = L"01234";  //Arreglo de char, con punteros

    // Modificadores en tipos de datos --------------------
    // Signed = con signo
    signed int signedNumber = 10;    // OK -> resultado 10
    signed int signedNumber2 = -10;  // OK -> resultado -10 (default)
    signed char signedChar = 'A';
    signed char signedChar2 = 97;
    signed long signedLong = 9700000000;
    // Unsigned = sin signo
    unsigned int unsignedNumber = 10;    // OK -> resultado 10
    unsigned int unsignedNumber2 = -10;  // ERROR -> -10 es un numero con sig -> resultado numero postivo al azar
    unsigned char signedChar = 'A';
    unsigned char signedChar2 = 97;
    unsigned short signedShort = 970000;
    // long = hacer mas largo el tipo
    long int longInt = 10000000000;
    long double longInt = 10000000000.25;
    // short = hacer mas corto el tipo
    short int longInt = 10000;

    //Uso de define
    int s = sum(1, 1);      // = 2
    cout << HUMAN_MAX_AGE;  // Salida = 123
    cout << MAX_PRIVILEGE;  // Salida = ZZZZZZZZZZZZZZZZ

    //Llamado de funciones
    functionProp();
    functionProp(50);
    functionReady();
    functionReady(50);

    //Estructuras = Similar a las clases
    struct Person {
        int age;
        void birthday() {
            age++;
        };
    } manuel, daniel;

    manuel.age = 53;
    daniel.age = 20;

    manuel.birthday();  // resultado -> 54
    daniel.birthday();  // resultado -> 21

    /*Arreglos*/
    int arr1[4] = {0, 1, 2, 3};  // se puede usar HEXADECIMAL -> 0xAA=170
    char b[] = "abcd";
    double c[4] = {0.1, 0.2, 0.3};
    float d[4] = {0.2, 0.3, 0.5};
    bool e[] = {false, true, false};

    return 0;  // Al devolver un numero, si no se pone el compilador la pone. Sirve para indicar que aqui acaba el progama.
}

void functionProp(int param) {
    cout << "functionReady -> El numero es " << param << endl;
}