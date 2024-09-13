#include <string>
#include <iostream>
#include <sstream>
using namespace std;
//----------------------- class declaration -------------------------
class Wine
{
private:
    string winery;
    string typeOfGrape;
    int year;

public:
    Wine();
    Wine(string, string, int);
    void read();
    string toString();
};

//---------------------- Definition/Implementation of Methods -------
// default/parameterless constructor
Wine::Wine()
{
    winery = "Pawis";
    typeOfGrape = "Riesling";
    year = 2005;
}

// complete Constructor
Wine::Wine(string name, string type, int y)
{
    winery = name;
    typeOfGrape = type;
    year = y;
}

// all attrubutes are reading of keyboard
void Wine::read()
{
    cout << "Winery name: ";
    getline(cin, winery);
    cout << "Type of grape: ";
    getline(cin, typeOfGrape);
    cout << "Year: ";
    cin >> year;
}

// returns a "nice" string consisting of attributes
string Wine::toString()
{
    stringstream s;
    s << "Winery: " << winery << ", Type of Grape: " << typeOfGrape << ", Year: " << year;
    return s.str();    // convert stream s into a string
}
