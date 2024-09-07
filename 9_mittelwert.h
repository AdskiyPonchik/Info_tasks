#ifndef INFORMATIK_9_MITTELWERT_H
#define INFORMATIK_9_MITTELWERT_H

#include <string>
#include <sstream>
#include <cmath>

void init(int a[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100;
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

double getAverage(int a[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum / n;
}

double getStandardDeviation(int a[],
                            int n) { // Standardabweichung der Grundgesamtheit S=sqrt(1/n*Summe aus(x-M)²), M ist der Mittelwert
    double m = getAverage(a, n);
    double sumSquares = 0;
    for (int i = 0; i < n; i++) {
       sumSquares += (a[i] - m) * (a[i]-m);
    }
    return sqrt(sumSquares/n);
}

#endif //INFORMATIK_9_MITTELWERT_H
