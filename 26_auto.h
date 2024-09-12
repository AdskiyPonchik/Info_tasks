#include <string>
#include <iostream>
#include <sstream>
using namespace std;

//----------------------- class declaration -------------------------
class Auto
{
private:
    string hersteller;
    int alter;
    double neuPreis;

public:
    Auto();
    Auto(string, int, double);
    void read();
    string toString();
    double gebrauchtPreis();
};

//---------------------- Definition/Implementation of Methods -------
// default/parameterless constructor
Auto::Auto()
{
    this->hersteller = "Mersedes-Benz";
    this->alter = 2016;
    this->neuPreis = 50000;
}

// complete Constructor
Auto::Auto(string herst, int alter, double pr)
{
    this->hersteller = herst;
    this->alter = alter;
    this->neuPreis = pr;
}
// all attrubutes are reading of keyboard
void Auto::read()
{
    cout << "Hersteller: ";
    getline(cin, this->hersteller);

    cout << "Alter: ";
    cin >> this->alter;

    cout << "NeuPreis: ";
    cin >> this->neuPreis;
}

// returns a "nice" string consisting of attributes
std::string Auto::toString()
{
    std::stringstream s;
    s << "Hersteller: " << hersteller << "\n";
    s << "Alter: " << alter << " Jahre\n";
    s << "Neupreis: " << neuPreis << " EUR\n";

    return s.str();
}

//------------------- definition of functions -----------------------
double Auto::gebrauchtPreis()
{
    return (alter > 0) ? neuPreis / alter : neuPreis;
}

Auto teuerstesAuto(Auto a[], int n)
{
    if (n == 0)
    {
        return Auto();
    }
    Auto teuerstesAuto = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i].gebrauchtPreis() > teuerstesAuto.gebrauchtPreis())
        {
            teuerstesAuto = a[i];
        }
    }
    return teuerstesAuto;
}
double kapital(Auto a[], int n)
{
    if (n == 0)
    {
        return 0.0;
    }
    double summe = a[0].gebrauchtPreis();
    for (int i = 1; i < n; i++)
    {
        summe += a[i].gebrauchtPreis();
    }
    return summe;
}