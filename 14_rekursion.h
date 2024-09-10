#ifndef INFORMATIK_14_REKURSION_H
#define INFORMATIK_14_REKURSION_H

int rek(int x, int y) {
    if (y == 0) {
        return x;
    } else if (y > 0) {
        return rek(x - 1, y - 1);
    } else { // y < 0
        return rek(x + 1, y + 1);
    }
}

#endif //INFORMATIK_14_REKURSION_H
