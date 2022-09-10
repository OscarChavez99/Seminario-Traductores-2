#include <iostream>
#include <sstream>
using namespace std;

class Token
{
private:
    int tipo;
    string contenido;
    int salida = 0;
public:
    Token(/* args */);
    ~Token();
    int getTipo() const;
    void setTipo(const int value);
    string getContenido() const;
    void setContenido(const string& value);
    int getSalida() const;
    void setSalida(const int value);

    string toString() const;
};

Token::Token(/* args */)
{
}

Token::~Token()
{
}

int Token::getTipo() const 
{
    return tipo;
}
void Token::setTipo(const int value)
{
    tipo = value;
}
string Token::getContenido() const 
{
    return contenido;
}
void Token::setContenido(const string& value)
{
    contenido = value;
}

string Token::toString() const
{
    stringstream ss;
    ss<<"Tipo: "<<tipo<<"Contenido: "<<contenido<<"Salida"<<salida<<endl;
    return ss.str();
}
int Token::getSalida() const 
{
    return tipo;
}
void Token::setSalida(const int value)
{
    tipo = value;
}