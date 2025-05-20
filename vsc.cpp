// tarea.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    /*
    int numero;
    unsigned long long factorial = 1;

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "No se puede calcular el factorial de un numero negativo." << endl;
    }
    else {
        for (int i = 1; i <= numero; ++i) {
            factorial *= i;
        }
        cout << "El factorial de " << numero << " es: " << factorial << endl;
    }

    return 0;
    */
    
}

int main() {
    /*int edad;
    float peso;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su peso: ";
    cin >> peso;

    if (edad >= 18) {
        cout << "Es mayor de edad." << endl;
    }
    else {
        cout << "Es menor de edad." << endl;
    }

    if (peso > 80) {
        cout << "Tiene sobrepeso." << endl;
    }
    else {
        cout << "Tiene peso normal." << endl;
    }

    return 0;
    */
}

int main() {
    /*
    int numero, contador = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contador++;
        }
    }

    if (contador == 2) {
        cout << "El numero es primo" << endl;
    }
    else {
        cout << "El numero no es primo" << endl;
    }

    return 0;*/
}
int main() {
    /*
    int totalPacientes, conteoF = 0, conteoM = 0;
    char sexo;

    cout << "Ingrese el total de pacientes: ";
    cin >> totalPacientes;

    for (int i = 1; i <= totalPacientes; i++) {
        do {
            cout << "Ingrese sexo de la persona " << i << " (M para masculino / F para femenino): ";
            cin >> sexo;
            sexo = tolower(sexo);
        } while (sexo != 'm' && sexo != 'f');

        if (sexo == 'f') {
            conteoF++;
        }
        else {
            conteoM++;
        }
    }

    float porcentajeM = (static_cast<float>(conteoM) / totalPacientes) * 100;
    float porcentajeF = (static_cast<float>(conteoF) / totalPacientes) * 100;

    cout << "Porcentaje de hombres en el grupo: " << porcentajeM << "%" << endl;
    cout << "Porcentaje de mujeres en el grupo: " << porcentajeF << "%" << endl;

    return 0;*/
}
int main() {
    /*
    float base, altura, area, perimetro;

    cout << "Ingrese el valor de la base: ";
    cin >> base;

    cout << "Ingrese el valor de la altura: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);

    cout << "Perímetro del rectángulo = " << perimetro << endl;
    cout << "Área del rectángulo = " << area << endl;

    return 0;*/
}
