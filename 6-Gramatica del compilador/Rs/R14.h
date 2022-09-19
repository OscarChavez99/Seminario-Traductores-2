#include <iostream>
#include <sstream>
using namespace std;

class R14
{
private:
    
public:
    R14(/* args */);
    ~R14();

    int cantidadTokens = 3;
    string forma = "R14 { <DefLocales> }";//Vacío
    string id = "R14";
    int tipo = 32;
    string tipoS = "<BloqFunc>";

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

R14::R14(/* args */)
{
}

R14::~R14()
{
    
}

int R14::getCantidadTokens()
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
void R14::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R14::getForma()
{
    return forma;
}
void R14::setForma(string& value)
{
    forma = value;
}

string R14:: getID()
{
    return id;
}
void R14::setID(string& value)
{
    id = value;
}
int R14::getTipo()
{
    return tipo;
}
void R14::setTipo(int value)
{
    tipo = value;
}
string R14::getTipoS()
{
    return tipoS;
}
void R14::setTipoS(string& value)
{
    tipoS = value;
}

string R14::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}