#include <iostream>
using namespace std;

void compararLetraNum(string& cadena);
void compararPunto(string& cadena);

int main()
{
    string cadena1 = "hola 22 2.2 2hola hola2 .a a.a .", cadena2 = "";
    int largo = cadena1.length();
    bool punto = false; 

    for(int i = 0; i<largo; i++)
    {
        if(cadena1[i] == '.')
            punto = true;
        if(cadena1[i] == ' ')
        {
            if(!punto)
                compararLetraNum(cadena2);
            else
                compararPunto(cadena2);
            cadena2 = "";
            punto = false;
        }
        else
            cadena2 += cadena1[i];
    }
    if(!punto)
        compararLetraNum(cadena2);
    else
        compararPunto(cadena2);
    return 0;
}

void compararLetraNum(string& cadena)
{
    int check, largo = cadena.length();
    bool letra = false, primerNum = false;
    for(int i = 0; i < largo; i++)
    {
        check = isdigit(cadena[i]);
        if(check == 1 && i == 0) //puros numeros
            primerNum = true;
        if(check == 0)
            //letras
            letra = true;
    }
    cout<<cadena;
    if(letra && !primerNum)
        cout<<": identificador"<<endl;
    else if(!letra)
        cout<<": numero entero"<<endl;
    else if(letra && primerNum)
        cout<<": Error, un identificador no puede iniciar con un numero"<<endl;
}

void compararPunto(string& cadena)
{
    int check, largo = cadena.length();
    bool letra = false;
    if(cadena == ".")
     {
        cout<<cadena<<": punto"<<endl;
        return;
    }
    if(cadena[largo-1] == '.' && largo > 1)
    {
        cout<<cadena<<": error, un identificador no puede contener punto"<<endl;
        return;
    }
    for(int i = 0; i < largo; i++)
    {
        check = isdigit(cadena[i]);
        if(cadena[0] == '.' && cadena.length() == 0)
        {
            cout<<cadena<<": punto"<<endl; 
            return;
        }

        else if(cadena[0] == '.' && cadena.length() > 0) //puros numeros
        {
            cout<<cadena<<cadena<<" : error, un identificador no puede iniciar con un punto"<<endl;
            return;
        }
        
        else if(check == 0 && cadena[i] != '.')
            letra = true;
    }

    if(letra)
    {
        cout<<cadena<<" : error, un identificador no puede contener punto"<<endl;
        return;
    }
    cout<<cadena<<": numero real"<<endl;
}