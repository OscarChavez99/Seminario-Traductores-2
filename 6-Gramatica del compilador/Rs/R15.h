#include <iostream>
#include <sstream>
using namespace std;

class R15
{
private:
    
public:
    R15(/* args */);
    ~R15();

    int cantidadTokens = 0;
    string forma = "R15 \\e";//Vacío
    string id = "R15";
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

R15::R15(/* args */)
{
}

R15::~R15()
{
    
}

int R15::getCantidadTokens()
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
void R15::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R15::getForma()
{
    return forma;
}
void R15::setForma(string& value)
{
    forma = value;
}

string R15:: getID()
{
    return id;
}
void R15::setID(string& value)
{
    id = value;
}
int R15::getTipo()
{
    return tipo;
}
void R15::setTipo(int value)
{
    tipo = value;
}
string R15::getTipoS()
{
    return tipoS;
}
void R15::setTipoS(string& value)
{
    tipoS = value;
}

string R15::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}