#include "token.h"
using namespace std;

class noTerminal: public Token
{
private:

public:
    noTerminal(/* args */);
    ~noTerminal();
};

noTerminal::noTerminal(/* args */)
{
}

noTerminal::~noTerminal()
{
}
