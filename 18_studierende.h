#ifndef INFORMATIK_18_STUDIERENDE_H
#define INFORMATIK_18_STUDIERENDE_H

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

//----------------------- class declaration -------------------------
class Studi {
private:
    string firstName;
    string familyName;
    string domicile;
    string street;

public:
//---------------------- Definition/Implementation of Methods -------
// default/parameterless constructor
    Studi() {
        firstName = "Vorname";
        familyName = "Nachname";
        domicile = "1234 Musterstadt";
        street = "Musterstraße 10";
    }

// complete Constructor
    Studi(string famN, string firstN, string dom, string street) {
// TODO
        firstName = firstN;
        familyName = famN;
        domicile = dom;
        street = street;
    }

// all attrubutes are reading of keyboard
    void read() {
        cout << "Eingabe der Studierendendaten:" << endl;
        cout << "Vorname: ";
        getline(cin, firstName);
        cout << "Nachname: ";
        getline(cin, familyName);
        cout << "Ort (inkl. PLZ): ";
        getline(cin, domicile);
        cout << "Straße (inkl. Hausnr.): ";
        getline(cin, street);
    }

// returns a "nice" string consisting of attributes
    string toString() {
        stringstream s; // stream from sstream.h
        s << endl
          << "____________ Person___________" << endl
          << firstName << endl
          << familyName << endl
          << domicile << endl
          << street << endl
          << "______________________________" << endl;
        return s.str(); // convert stream ss into a string
    }
};
//---------------------- main()-function ----------------------------

#endif //INFORMATIK_18_STUDIERENDE_H
