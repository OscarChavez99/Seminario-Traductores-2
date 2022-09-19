#include <iostream>
#include <sstream>
using namespace std;

class R10
{
private:
    
public:
    R10(/* args */);
    ~R10();

    int cantidadTokens = 0;
    string forma = "R10 \\e";//Vacío
    string id = "R10";
    int tipo = 30;
    string tipoS = "<Parametros>";

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

R10::R10(/* args */)
{
}

R10::~R10()
{
    
}

int R10::getCantidadTokens()
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
void R10::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R10::getForma()
{
    return forma;
}
void R10::setForma(string& value)
{
    forma = value;
}

string R10:: getID()
{
    return id;
}
void R10::setID(string& value)
{
    id = value;
}
int R10::getTipo()
{
    return tipo;
}
void R10::setTipo(int value)
{
    tipo = value;
}
string R10::getTipoS()
{
    return tipoS;
}
void R10::setTipoS(string& value)
{
    tipoS = value;
}

string R10::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}