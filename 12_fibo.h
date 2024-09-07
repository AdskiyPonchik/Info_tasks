#ifndef INFORMATIK_12_FIBO_H
#define INFORMATIK_12_FIBO_H
#include <string>
#include <sstream>
using namespace std;

string toString(int f[], int n) // put all elements in a "nice" string
{
    stringstream s; // stream from sstream.h
    for (int i = 0; i < n; ++i) {
        s << f[i];
        if (i < n - 1) {
            s << ", "; // add a comma and space between elements
        }
    }
    return s.str(); // convert stream s into a string
}

void fib(int f[], int n)
{
    if (n <= 0) return; // handle edge case where n <= 0
    if (n > 0) f[0] = 0; // first Fibonacci number
    if (n > 1) f[1] = 1; // second Fibonacci number

    for (int i = 2; i < n; ++i) {
        f[i] = f[i - 1] + f[i - 2]; // compute next Fibonacci number
    }
}

#endif //INFORMATIK_12_FIBO_H
