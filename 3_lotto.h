#ifndef INFORMATIK_3_LOTTO_H
#define INFORMATIK_3_LOTTO_H
// Lottery.cpp
#include <iostream>
#include <ctime>
const int SIZE = 6;

using namespace std;

//------------------- definition of functions -----------------------
bool check(int a[], int x) {
    int i = 0;
    while (a[i]) {
        if (a[i] == x) { return true; }
        i++;
    }
    return false;
}

void show(int a[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << a[i]  << ", ";
    }
    std::cout << std::endl;
}

void initArray(int a[]) {
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 49 + 1;
    }
}

int treffer(int a[], int tippschein[]) {
    int counter = 0;
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            if(a[i] == tippschein[j]){counter++;}
        }
    }
    return counter;
}

#endif
