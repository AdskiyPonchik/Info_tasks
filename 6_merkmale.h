#ifndef INFORMATIK_6_MERKMALE_H
#define INFORMATIK_6_MERKMALE_H


void attributes(int x, bool &isPositive, bool &isEven, int &countFactors) {
    isPositive = x > 0;
    isEven = x % 2 == 0;
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) { countFactors++; }
    }
    std::cout << "Number " << x << " is " << (isPositive ? "Positive, " : "Negative, ");
    std::cout << (isEven ? "Even " : "Odd ") << "and divides " << countFactors << " times " << std::endl;
}

#endif //INFORMATIK_6_MERKMALE_H
