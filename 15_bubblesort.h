#ifndef INFORMATIK_15_BUBBLESORT_H
#define INFORMATIK_15_BUBBLESORT_H

#include <string>
#include <sstream>


void bubbleSort(int a[], int n, int &comp) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (a[j] > a[j + 1]) {
                std::swap(a[j], a[j + 1]);
                comp++;
            }
        }
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

void initRandom(int a[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100;
    }
}

void initUpSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (a[j] > a[j + 1]) {
                std::swap(a[j], a[j + 1]);
            }
        }
    }
}

void initDownSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (a[j] < a[j + 1]) {
                std::swap(a[j], a[j + 1]);
            }
        }
    }
}

#endif //INFORMATIK_15_BUBBLESORT_H
