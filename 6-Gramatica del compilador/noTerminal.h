#include "token.h"

class NoTerminal: public Token
{
private:
    /* data */
public:
    NoTerminal(/* args */);
    ~NoTerminal();
};

NoTerminal::NoTerminal(/* args */)
{
}

NoTerminal::~NoTerminal()
{
}
