#ifndef INFORMATIK_11_DYNAFELD_H
#define INFORMATIK_11_DYNAFELD_H

#include <sstream>

const int MAX_RAND_SIZE = 10;

void init(int a[], int b[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = std::rand() % MAX_RAND_SIZE;
        b[i] = std::rand() % MAX_RAND_SIZE;
    }
}

std::string toString(int a[], int n) {
    std::stringstream s;
    s << "[";
    for (int i = 0; i < n; i++) {
        if (i == n - 1) { s << a[i]; }
        else { s << a[i] << ", "; }
    }
    s << "]";
    return s.str();
}

int scalar(int a[], int b[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result += a[i] * b[i];
    }
    return result;
}


#endif //INFORMATIK_11_DYNAFELD_H
