#include <iostream>
#include <sstream>
using namespace std;
const int MAX = 10;

//----------------------- class declaration -------------------------
class Stack
{
private:
    int data[MAX];
    int size;

public:
    Stack();  // Constructor
    ~Stack(){}; // Destructor
    int top();
    void push(int d);
    void pop();
    string toString();
};

//---------------------- Definition/Implementation of Methods -------
// default/parameterless constructor
Stack::Stack() // Constructor
{       
    size = 0;
}

int Stack::top()
{
    if (size == 0)
    {
        throw (char*) "Error: stack empty";
    }
    return data[size-1];
}

void Stack::push(int d)
{
    if (size < MAX)
        data[size++] = d;
    else
        throw (char*) "Error: stack full";
}

void Stack::pop()
{
    if (size == 0)
    {
        throw (char*) "Error: stack empty";
    }
    data[--size] = 0;
}

// returns a "nice" string consisting of all elements
string Stack::toString()
{
    stringstream s;
    s << "[";
    for(int i = 0; i < size; i++)
    {
        s << data[i];
        if (i < size-1)
            s << ", ";
    }
    s << "]" << endl;
    return s.str();    // convert stream s into a string
}