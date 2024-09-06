#ifndef INFORMATIK_5_PRIME_NUMBER_H
#define INFORMATIK_5_PRIME_NUMBER_H

bool isPrimeNumber(int a) {
    if (a < 2) { return false; }
    else {
        for (int i = 2; i < a; i++) {
            if (a % i==0) { return false; }
        }
    }
    return true;
}

#endif //INFORMATIK_5_PRIME_NUMBER_H
