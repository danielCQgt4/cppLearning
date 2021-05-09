// #include <conio.h>
#include <stdio.h>

int main() {
    int contador, n, primo, num1, num2;

    printf("\n ** Calcular numeros primos ingresando el rango que desea calcular **");
    printf("\n Ingrese un numero entero de inicio de rango: ");
    scanf("%d", &num1);

    printf("\n Ingrese un numero entero de fin de rango: ");
    scanf("%d", &num2);

    for (n = num1; n <= num2; n++) {
        primo = 1;
        contador = 2;

        while (contador <= n / 2 && primo) {
            if (n % contador == 0)
                primo = 0;

            contador++;
        }

        if (primo)
            printf("%d ", n);
    }
    // getch(); /* Pausa */

    return 0;
}