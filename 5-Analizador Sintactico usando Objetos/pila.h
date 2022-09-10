#ifndef PILA_H
#define PILA_H
#include <iostream>
#include <stdexcept>
#include "ldl.h"
#include <sstream>

using namespace std;

template <typename T>
class Pila // stack
{
public:
    Pila()
    {
    }
    ~Pila()
    {
        lista.clear();
    }

    bool empty() const;
    size_t size() const;
    const T &top() const;
    void push(const T &element);
    void pop();
    string buffer = "";
    string imprime();

private:
    LDL<T> lista;
};

template <typename T>
bool Pila<T>::empty() const
{
    return lista.empty();
}

template <typename T>
size_t Pila<T>::size() const
{
    return lista.size();
}

template <typename T>
const T &Pila<T>::top() const
{
    if (empty())
    {
        throw runtime_error("Trying top() from empty stack.");
    }
    return lista.front();
}

template <typename T>
void Pila<T>::push(const T &element)
{
    lista.push_front(element);
    
    // Buffer para mostrar la pila después de los push (sin afectar a la original).
    if (element.getSalida() == 0)
        buffer += element.getContenido();
    else
    {
        buffer += element.getContenido();
        buffer += to_string(element.getSalida());
    }
}

template <typename T>
void Pila<T>::pop()
{
    if (empty())
    {
        throw runtime_error("Trying pop() from empty stack.");
    }

    // Mostrar la pila después de los pop (sin afectar a la original).
    string aux = buffer;
    string aux_r(aux.rbegin(), aux.rend());
    int largo = top().getContenido().length() + 1;
    aux_r.erase(0, largo);
    string aux2(aux_r.rbegin(), aux_r.rend());
    buffer = aux2;

    // Pila pop()
    lista.pop_front();
}
#endif // PILA_H

template <typename T>
string Pila<T>::imprime()
{
    stringstream ss;
    ss << buffer;
    return ss.str();
}