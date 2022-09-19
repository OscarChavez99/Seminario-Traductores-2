#include <iostream>
#include <sstream>
using namespace std;

class R4
{
private:
    
public:
    R4(/* args */);
    ~R4();
    int cantidadTokens = 1;
    string forma = "R4 <DefVar>";//Vacío
    string id = "R4";
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

R4::R4(/* args */)
{
}

R4::~R4()
{
    
}

int R4::getCantidadTokens()
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
void R4::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R4::getForma()
{
    return forma;
}
void R4::setForma(string& value)
{
    forma = value;
}

string R4:: getID()
{
    return id;
}
void R4::setID(string& value)
{
    id = value;
}
int R4::getTipo()
{
    return tipo;
}
void R4::setTipo(int value)
{
    tipo = value;
}
string R4::getTipoS()
{
    return tipoS;
}
void R4::setTipoS(string& value)
{
    tipoS = value;
}

string R4::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}