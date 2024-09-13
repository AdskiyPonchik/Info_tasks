#include <iostream>
#include <sstream>
using namespace std;

//----------------------- class declaration -------------------------
class RatNumber
{
private:
    int numerator,   // Zähler
        denominator; // Nenner
    int gcd(int, int);
    void normalize();

public:
    RatNumber();
    RatNumber(int n, int d);

    RatNumber operator*(RatNumber);
    RatNumber operator+(RatNumber);
    bool operator<(RatNumber);
    string toString();
};

//---------------------- Definition/Implementation of Methods -------
// default/parameterless constructor
RatNumber::RatNumber()
{
    numerator = 0;
    denominator = 1;
}

// complete Constructor
RatNumber::RatNumber(int n, int d)
{
    numerator = n;
    denominator = d;
    normalize();
}

// returns a "nice" string consisting of attributes
string RatNumber::toString()
{
    stringstream s;
    s << numerator << "/" << denominator;
    return s.str();
}

int RatNumber::gcd(int x, int y)
{ // Euklid
    while (x != y)
    {
        if (x > y)
            x -= y;
        else
            y -= x;
    }
    return x;
}
void RatNumber::normalize()
{
    if (denominator == 0)
        throw (char *)"Error: denominator Null";
    numerator = denominator > 0 ? numerator : -numerator; // Vorzeichen gehört an Zähler
    denominator = abs(denominator);                       // Nenner hat grundsätzlich kein Vorzeichen
    if (numerator == 0)
        return;
    int tmp = gcd(abs(numerator), denominator);
    numerator = numerator / tmp;
    denominator = denominator / tmp;
}

// less than - call: RatNumber b,c; bool less = b<c;
bool RatNumber::operator<(RatNumber r2)
{
    normalize();
    r2.normalize();
    return numerator * r2.denominator < denominator * r2.numerator;
}
// addition - call: RatNumber mult = b+c;
RatNumber RatNumber::operator+(RatNumber r2)
{
    int commonDenominator = denominator * r2.denominator;
    int newNumerator1 = numerator * r2.denominator;
    int newNumerator2 = r2.numerator * denominator;
    RatNumber result(newNumerator1 + newNumerator2, commonDenominator);
    result.normalize();
    return result;
}

// multiplication - call: RatNumber mult = b*c;
RatNumber RatNumber::operator*(RatNumber r2)
{
    int newNumerator = numerator * r2.numerator;
    int newDenominator = denominator * r2.denominator;
    RatNumber result(newNumerator, newDenominator);
    result.normalize();
    return result;
}