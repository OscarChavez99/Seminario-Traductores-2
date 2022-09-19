#include <iostream>
#include <sstream>
using namespace std;

class R9
{
private:
    
public:
    R9(/* args */);
    ~R9();

    int cantidadTokens = 6;
    string forma = "R9 tipo identificador ( <Parametros> ) <BloqFunc>";//Vacío
    string id = "R9";
    int tipo = 29;
    string tipoS = "<DefFunc>";

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

R9::R9(/* args */)
{
}

R9::~R9()
{
    
}

int R9::getCantidadTokens()
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
void R9::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R9::getForma()
{
    return forma;
}
void R9::setForma(string& value)
{
    forma = value;
}

string R9:: getID()
{
    return id;
}
void R9::setID(string& value)
{
    id = value;
}
int R9::getTipo()
{
    return tipo;
}
void R9::setTipo(int value)
{
    tipo = value;
}
string R9::getTipoS()
{
    return tipoS;
}
void R9::setTipoS(string& value)
{
    tipoS = value;
}

string R9::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}