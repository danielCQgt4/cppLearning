#include <iostream>

using namespace std;

//Como leer el .length de una matriz
int main() {
    char a[] = "Hol";
    cout << a[1] << endl;
    char arr[3][5] = {"Hola"};
    cout << arr << " | " << *arr << " | " << &arr << endl;
    cout << "Valor " << arr[0] << endl;
    cout << sizeof(arr) << " | " << sizeof(*arr) << " | " << (&arr) << " | " << (&arr + 1) << endl;
    return 0;
}