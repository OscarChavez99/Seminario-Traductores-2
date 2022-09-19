#include <iostream>
#include <sstream>
using namespace std;

class R7
{
private:
    /*int cantidadTokens = 0;
    string forma = "\e";//Vacío
    string id = "R7";
    int tipo = 28;
    string tipoS = "<ListaVar>";*/
public:
    R7(/* args */);
    ~R7();

    int cantidadTokens = 0;
    string forma = "R7 \\e";//Vacío
    string id = "R7";
    int tipo = 28;
    string tipoS = "<ListaVar>";

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

R7::R7(/* args */)
{
}

R7::~R7()
{
    
}

int R7::getCantidadTokens()
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
void R7::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R7::getForma()
{
    return forma;
}
void R7::setForma(string& value)
{
    forma = value;
}

string R7:: getID()
{
    return id;
}
void R7::setID(string& value)
{
    id = value;
}
int R7::getTipo()
{
    return tipo;
}
void R7::setTipo(int value)
{
    tipo = value;
}
string R7::getTipoS()
{
    return tipoS;
}
void R7::setTipoS(string& value)
{
    tipoS = value;
}

string R7::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}