#include <iostream>
#include <sstream>
using namespace std;

class R3
{
private:
    
public:
    R3(/* args */);
    ~R3();

    int cantidadTokens = 2;
    string forma = "R3 <Definicion> <Definiciones>";//Vacío
    string id = "R3";
    int tipo = 25;
    string tipoS = "<Definiciones>";

    int getCantidadTokens();
    void setCantidadTokens(int value);
    string getForma();
    void setForma(string& value);
    string getID();
    void setID(string& value);
    int getTipo();
    void setTipo(int value);
    string getTipoS();
    void setTipoS(string& value);

    string toString();
};

R3::R3(/* args */)
{
}

R3::~R3()
{
    
}

int R3::getCantidadTokens()
{
    /*cantidadTokens = 0;
    int largo = forma.length();
    for(int i = 0; i<largo; i++)
    {
        if(forma[i] == ' ')
            cantidadTokens++;
    }*/
    return cantidadTokens;
}
void R3::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R3::getForma()
{
    return forma;
}
void R3::setForma(string& value)
{
    forma = value;
}

string R3:: getID()
{
    return id;
}
void R3::setID(string& value)
{
    id = value;
}
int R3::getTipo()
{
    return tipo;
}
void R3::setTipo(int value)
{
    tipo = value;
}
string R3::getTipoS()
{
    return tipoS;
}
void R3::setTipoS(string& value)
{
    tipoS = value;
}

string R3::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}