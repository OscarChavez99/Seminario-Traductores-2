#include <iostream>
#include <sstream>
using namespace std;

class R17
{
private:
    
public:
    R17(/* args */);
    ~R17();

    int cantidadTokens = 1;
    string forma = "R17 <DefVar>";//Vacío
    string id = "R17";
    int tipo = 34;
    string tipoS = "<DefLocal>";

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

R17::R17(/* args */)
{
}

R17::~R17()
{
    
}

int R17::getCantidadTokens()
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
void R17::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R17::getForma()
{
    return forma;
}
void R17::setForma(string& value)
{
    forma = value;
}

string R17:: getID()
{
    return id;
}
void R17::setID(string& value)
{
    id = value;
}
int R17::getTipo()
{
    return tipo;
}
void R17::setTipo(int value)
{
    tipo = value;
}
string R17::getTipoS()
{
    return tipoS;
}
void R17::setTipoS(string& value)
{
    tipoS = value;
}

string R17::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}