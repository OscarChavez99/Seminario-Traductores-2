#include <iostream>
#include <sstream>
using namespace std;

class R2
{
private:
    
public:
    R2(/* args */);
    ~R2();

    int cantidadTokens = 0;
    string forma = "R2 \\e";//Vacío
    string id = "R2";
    int tipo = 25;
    string tipoS = "<Definiciones>";

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

R2::R2(/* args */)
{
}

R2::~R2()
{
    
}

int R2::getCantidadTokens()
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
void R2::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R2::getForma()
{
    return forma;
}
void R2::setForma(string& value)
{
    forma = value;
}

string R2:: getID()
{
    return id;
}
void R2::setID(string& value)
{
    id = value;
}
int R2::getTipo()
{
    return tipo;
}
void R2::setTipo(int value)
{
    tipo = value;
}
string R2::getTipoS()
{
    return tipoS;
}
void R2::setTipoS(string& value)
{
    tipoS = value;
}

string R2::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}