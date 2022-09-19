#include <iostream>
#include <sstream>
using namespace std;

class R6
{
private:
    
public:
    R6(/* args */);
    ~R6();
    int cantidadTokens = 4;
    string forma = "R6 tipo identificador <ListaVar> ;";//Vacío
    string id = "R6";
    int tipo = 27;
    string tipoS = "<DefVar>";

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

R6::R6(/* args */)
{
}

R6::~R6()
{
    
}

int R6::getCantidadTokens()
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
void R6::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R6::getForma()
{
    return forma;
}
void R6::setForma(string& value)
{
    forma = value;
}

string R6:: getID()
{
    return id;
}
void R6::setID(string& value)
{
    id = value;
}
int R6::getTipo()
{
    return tipo;
}
void R6::setTipo(int value)
{
    tipo = value;
}
string R6::getTipoS()
{
    return tipoS;
}
void R6::setTipoS(string& value)
{
    tipoS = value;
}

string R6::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}