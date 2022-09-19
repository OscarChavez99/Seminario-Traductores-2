#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "funciones.h"
#include "token.h"
#include "tabla.h"
#include "pila.h"
using namespace std;

string cortarEntrada(string &cadena1);
void desplazamiento();
void redu();
static void analizadorLexico();
static void analizadorSintactico(Token &token, string &cadena1);
Token token;
// Pila de elementos Token
Pila<Token> pila;
int contador = 0, fila = 0, columna = 0, largoAux2;
bool comparacion = false, red = false;
string salida, aux2, aux3, pilaBuf1 = "", pilaBuf2 = "", auxPeso = "";
auto t = TablaF();
ofstream fout;
R reduccion;

int main()
{
    cout << "\n\t\tAnalizador Lexico con pila de Elementos Token\n";
    analizadorLexico();
    cout << "\n\n";
    cout << "\nLo hicimos muy bien!" << endl;
    return 0;
}

string cortarEntrada(string &cadena1)
{
    stringstream leerArchivo;
    if (contador == 0)
    {
        cadena1 += "$";
        fout.open("archivo.txt");
        fout << cadena1;
        fout.close();
        contador++;
    }
    ifstream fin("archivo.txt");
    leerArchivo << fin.rdbuf();
    return leerArchivo.str();
}

static void analizadorLexico()
{
    // string cadena1 = "hola + mundo";
    // string cadena1 = "a + b + c + d + e + f";
    //  cout<<"Cadena: ";
    //  getline(cin, cadena1);
    string cadena1 = "int a ; int main ( ) { int b ; }";
    string cadena2 = "";
    int largo1 = cadena1.length();
    int largo2;
    bool especial = false;
    int tipo;

    for (int i = 0; i < largo1; i++)
    {
        if (cadena1[i] == ' ')
        {
            largo2 = cadena2.length();
            for (int j = 0; j < largo2; j++)
            {
                if (!isalnum(cadena2[j]))
                    especial = true;
            }
            if (!especial)
                tipo = letraONum(cadena2);
            else if (especial)
                tipo = caracterEspecial(cadena2);
            // Analisis sintactico
            token.setTipo(tipo);
            token.setContenido(cadena2);
            analizadorSintactico(token, cadena1);
            cadena2 = "";
            especial = false;
        }
        else
            cadena2 += cadena1[i];
    }
    largo2 = cadena2.length();
    for (int i = 0; i < largo2; i++)
    {
        if (!isalnum(cadena2[i]))
            especial = true;
    }
    if (!especial)
        tipo = letraONum(cadena2);
    else if (especial)
        tipo = caracterEspecial(cadena2);
    // Analisis sintactico
    //cadena2 += "$";
    token.setTipo(tipo);
    token.setContenido(cadena2);
    analizadorSintactico(token, cadena1);
    token.setTipo(23);
    token.setContenido("$");
    analizadorSintactico(token, cadena1);
}
static void analizadorSintactico(Token &token, string &cadena1)
{
    string peso = "$";
    aux2 = cortarEntrada(cadena1);
    Token tokenFinal;
    if (pila.empty())
    {
        Token tokenAux;
        tokenAux.setContenido("$");
        tokenAux.setSalida(0);
        pila.push(tokenAux);
        tokenAux.setContenido("0");
        tokenAux.setSalida(0);
        pila.push(tokenAux);
    }

    string aux = token.getContenido();
    int largoAux = aux2.length();
    aux3 = pila.top().getContenido();
    if (isdigit(aux3[0]))
        fila = stoi(pila.top().getContenido());
    else
        fila = (pila.top().getSalida());
    columna = token.getTipo();
    if(auxPeso == "$")
    {
        aux2 = "$";
        redu();
    }
    else
    {
        // Casos comunes (no negativos)
        if (t[fila][columna] > 0)
        {
            desplazamiento();
        }
        else if (t[fila][columna] < 0)
        {
            redu();
        }
    }
}

void desplazamiento()
{
    string aux3 = pila.top().getContenido();
    if (isdigit(aux3[0]))
        fila = stoi(pila.top().getContenido());
    else
        fila = (pila.top().getSalida());
    columna = token.getTipo();
    if(t[fila][columna] < 0)
    {
        redu();
    }
    else
    {
        int largoToken = token.getContenido().length() + 1;
        cout << "\t\nPila: " << pila.imprime();
        cout << "\tEntrada: " << aux2;
        token.setSalida(t[fila][columna]);
        pila.push(token);
        aux2.erase(0, largoToken);
        fout.open("archivo.txt");
        fout << aux2;
        fout.close();
        if(aux2.length() == 0)
        {
            auxPeso = "$";
        }
        salida = to_string(t[fila][columna]);
        cout << "\tSalida: d" << salida << " ";
    }    
}

void redu()
{
    red = true;
    aux3 = pila.top().getContenido();
    if (isdigit(aux3[0]))
        fila = stoi(aux3);
    else
        fila = (pila.top().getSalida());
    
    reduccion = reglasTabFinal(t[fila][columna]);
    salida = reduccion.forma;
    pilaBuf1 += "\t\nPila: " + pila.imprime() + "\tEntrada: " + aux2 + "\tSalida: " + salida + " ";
    //cout<<"\npilaBuf1: "<<pilaBuf1<<endl;

    if(pilaBuf1 != pilaBuf2)
    {
        cout << "\t\nPila: " << pila.imprime();
        cout << "\tEntrada: " << aux2;
        cout << "\tSalida: " << salida << " ";
    }
    pilaBuf1 = "";
    pilaBuf2 = "";     
    comparacion = true;
    if (reduccion.forma != "")
    {
        int tokens;
        Token tokenPush;
        while (red)
        {
            aux3 = pila.top().getContenido();
            if (isdigit(aux3[0]))
                fila = stoi(aux3);
            else
                fila = (pila.top().getSalida());

            if (comparacion)
            {
                columna = reduccion.tipo;
                //cout << "\nFila: " << fila << "\nCol: " << columna;
                if (reduccion.forma != "\\e")
                {
                    tokens = reduccion.cantidadTokens;
                }
                else
                {
                    tokens = 0;
                }
                while (tokens > 0)
                {
                    pila.pop();
                    tokens--;
                }
                aux3 = pila.top().getContenido();
                if (isdigit(aux3[0]))
                    fila = stoi(pila.top().getContenido());
                else
                    fila = (pila.top().getSalida());
                tokenPush.setContenido(reduccion.tipoS);
                tokenPush.setSalida(t[fila][columna]);
                pila.push(tokenPush);
                comparacion = false;
            }
            else if (reduccion.forma != "r0(acept)")
            {
                columna = token.getTipo();
                if(t[fila][columna] < 0)
                {
                    reduccion = reglasTabFinal(t[fila][columna]);
                    cout << "\t\nPila: " << pila.imprime();
                    cout << "\tEntrada: " << aux2;
                    salida = reduccion.forma;
                    cout << "\tSalida: " << salida << " ";
                    pilaBuf2 += "\t\nPila: " + pila.imprime() + "\tEntrada: " + aux2 + "\tSalida: " + salida + " ";
                    comparacion = true;
                    red = false;
                }
                else if(t[fila][columna] > 0)
                {
                    red = false;
                    //break;
                }
            }
            else if (reduccion.forma == "r0(acept)")
            {
                red = false;
                return;
            }
        }
        desplazamiento();
    }
}
