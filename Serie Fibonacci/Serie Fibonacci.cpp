
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//Funcion para validar entrada de un numero
string ValidarNumero(string str)
{
    bool notNum = false;
    int i = 0;
    while ((str[i] != '\0') && notNum != true) //'\0' es el character que marca el final del string
    {
        if (isdigit(str[i]) == false)
        {
            str = "";
            notNum = true;
            break;
        }
        i++;
    }
    return str; //devuelve un str igual si no se encontraron letras
}

int main()
{
    string cantidadE, int primerE = 0, segundoE = 1, tercerE = 1;

    do
    {
        cout << "Digite el numero de elementos:"; cin >> cantidadE;

        if (ValidarNumero(cantidadE) != cantidadE) { //si se inserta un tipo de dato diferente de un entero
            cout << "Tipo de dato incorrecto, solo se permiten numeros, intente de nuevo" << endl;
            system("PAUSE");
            system("CLS");

            continue;
        }
        cantidadE = stoi(cantidadE);
        
        for (int i = 1; i =< cantidadE; i++)
        {
            tercerE = primerE + segundoE;
            cout << tercerE << " ";
            primerE = segundoE;
            segundoE = tercerE;
        }
        break;

    } while (true);
}
