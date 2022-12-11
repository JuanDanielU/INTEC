
#include <iostream>
using namespace std;

int main()
{
    int cantidadE, primerE = 0, segundoE = 1, tercerE = 1;

    cout << "Digite el numero de elementos:"; cin >> cantidadE;

    for (int i = 1; i <= cantidadE; i++)
    {
        tercerE = primerE + segundoE;
        cout << tercerE << " ";
        primerE = segundoE;
        segundoE = tercerE;
    }
}
