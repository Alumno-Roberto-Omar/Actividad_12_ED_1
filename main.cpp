#include<iostream>
#include "ArregloDinamico.h"

using namespace std;

int main()
{
    ArregloDinamico<string> arreglo;

    arreglo.insertar_final("Gerardo");
    arreglo.insertar_final("Luis");
    arreglo.insertar_inicio("Roberto");
    arreglo.insertar_inicio("Omar");
    cout<<endl;
    cout<<"Ingresar cuatro elementos al arreglo:"<<endl;
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;
    cout<<endl;


    arreglo.insertar("Jaime", 2);
    cout<<"Ingresar elemento en la posicion 2 de arreglo:"<<endl;
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;
    cout<<endl;


    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);
    cout<<"Eliminar inicio, final y elemento en posicion 1 del arreglo:"<<endl;
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;

    
    return 0;
}