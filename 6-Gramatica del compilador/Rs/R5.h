#include <iostream>
#include <sstream>
using namespace std;

class R5
{
private:
    
public:
    R5(/* args */);
    ~R5();

    int cantidadTokens = 1;
    string forma = "R5 <DefFunc>";//Vacío
    string id = "R5";
    int tipo = 26;
    string tipoS = "<Definicion>";

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

R5::R5(/* args */)
{
}

R5::~R5()
{
    
}

int R5::getCantidadTokens()
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
void R5::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R5::getForma()
{
    return forma;
}
void R5::setForma(string& value)
{
    forma = value;
}

string R5:: getID()
{
    return id;
}
void R5::setID(string& value)
{
    id = value;
}
int R5::getTipo()
{
    return tipo;
}
void R5::setTipo(int value)
{
    tipo = value;
}
string R5::getTipoS()
{
    return tipoS;
}
void R5::setTipoS(string& value)
{
    tipoS = value;
}

string R5::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}