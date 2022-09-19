#include <iostream>
#include <sstream>
using namespace std;

class R1
{
private:
    
public:
    R1(/* args */);
    ~R1();

    int cantidadTokens = 1;
    string forma = "R1 <Definiciones>";//Vacío
    string id = "R1";
    int tipo = 24;
    string tipoS = "<programa>";

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

R1::R1(/* args */)
{
}

R1::~R1()
{
    
}

int R1::getCantidadTokens()
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
void R1::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R1::getForma()
{
    return forma;
}
void R1::setForma(string& value)
{
    forma = value;
}

string R1:: getID()
{
    return id;
}
void R1::setID(string& value)
{
    id = value;
}
int R1::getTipo()
{
    return tipo;
}
void R1::setTipo(int value)
{
    tipo = value;
}
string R1::getTipoS()
{
    return tipoS;
}
void R1::setTipoS(string& value)
{
    tipoS = value;
}

string R1::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}