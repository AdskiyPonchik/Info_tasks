#ifndef INFORMATIK_17_CONTINUE_H
#define INFORMATIK_17_CONTINUE_H
#include <iostream>
#include <sstream>
using namespace std;
//------------------- Definition der Funktionen -----------------------

void initField(int a[], int n) {
    cout << "Geben Sie " << n << " Zahlen ein:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
}

string toString(int a[], int n) // Alle Elemente in einen "schönen" String packen
{
    stringstream s; // Stream aus sstream.h
    for (int i = 0; i < n; ++i) {
        s << a[i];
        if (i < n - 1) {
            s << ", ";
        }
    }
    return s.str(); // Konvertiert den Stream s in einen String
}

void calculateSum(int a[], int n, long &result) {
    result = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] % 3 == 0) {
            continue; // Überspringen, wenn durch 3 teilbar
        }
        if (a[i] % 7 == 0) {
            std::cout << "Teilsumme (abgebrochen bei " << a[i] << "): " << result << std::endl;
            return; // Abbrechen, wenn durch 7 teilbar
        }
        result += a[i];
    }
}

#endif //INFORMATIK_17_CONTINUE_H
