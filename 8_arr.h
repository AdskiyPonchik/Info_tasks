#ifndef INFORMATIK_8_ARR_H
#define INFORMATIK_8_ARR_H

#include <sstream>
#include <string>
#include <ctime>

void init(int a[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100;
    }
}

std::string toString(int a[], int n) // put all elements in a "nice" string
{
    std::stringstream s;
    s << "["; // stream from  sstream.h
    for (int i = 0; i < n - 1; i++) {
        s << a[i] << ", ";
    }
    s << a[n - 1] << "]";  // last element
    return s.str();       // convert stream s into a string
}

int posMin(int a[], int n) {
    int min = 0;
    for (int i = 1; i < n; i++) {
        if (a[min] > a[i]) {
            min = i;
        }
    }
    return min;
}

#endif //INFORMATIK_8_ARR_H
