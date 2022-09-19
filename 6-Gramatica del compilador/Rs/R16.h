#include <iostream>
#include <sstream>
using namespace std;

class R16
{
private:
    
public:
    R16(/* args */);
    ~R16();

    int cantidadTokens = 2;
    string forma = "R16 <DefLocal> <DefLocales>";//Vacío
    string id = "R16";
    int tipo = 33;
    string tipoS = "<DefLocales>";

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

R16::R16(/* args */)
{
}

R16::~R16()
{
    
}

int R16::getCantidadTokens()
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
void R16::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R16::getForma()
{
    return forma;
}
void R16::setForma(string& value)
{
    forma = value;
}

string R16:: getID()
{
    return id;
}
void R16::setID(string& value)
{
    id = value;
}
int R16::getTipo()
{
    return tipo;
}
void R16::setTipo(int value)
{
    tipo = value;
}
string R16::getTipoS()
{
    return tipoS;
}
void R16::setTipoS(string& value)
{
    tipoS = value;
}

string R16::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}