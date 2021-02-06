#include <iostream>

using namespace std;

//Como leer el .length de un arreglo
int main() {
    int arr[] = {0, 1, 1};
    int a = 0x7ffdf366ff80;
    int b = 0x7ffdf366ff98;
    cout << arr << " | " << *arr << " | " << &arr << endl;
    cout << "Resta " << (b - a) << endl;
    cout << sizeof(arr) << " | " << sizeof(*arr) << " | " << (&arr) << " | " << (&arr + 1) << endl;
    return 0;
}