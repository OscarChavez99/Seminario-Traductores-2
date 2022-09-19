#include <iostream>
#include <sstream>
using namespace std;
class R
{
private:
    
public:
    R();
    ~R();
    R Constructor(int, string&, string&, int, string&);
    int cantidadTokens;
    string forma = "";//Vacío
    string id;
    int tipo;
    string tipoS;
};

R R::Constructor(int value1, string& value2, string& value3, int value4, string& value5)
{
    R rC;
    rC.cantidadTokens = value1;
    rC.forma = value2;//Vacío
    rC.id = value3;
    rC.tipo = value4;
    rC.tipoS = value5;
    return rC;
}

R::R()
{

}
R::~R()
{
}
