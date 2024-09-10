#include <iostream>
#include <sstream>
#include <ctime>
#include <string>
#define LINE "___________________________________________\n"
using namespace std;

//----------------------- class declaration -------------------------
class Article
{
private:
    string name;
    int productCode;
    int number;
    double price;

public:
    Article();
    Article(string name);
    double getPrice();
    int getNumber();
    string toString();
};

//---------------------- Definition/Implementation of Methods -------
// default/parameterless constructor
Article::Article() : name("Unnamed"), productCode(0), number(0), price(0.0) {}

Article::Article(string name) : name{name}
{
    productCode = rand() % 10000;
    number = rand() % 100;
    price = (rand() % 10000) / 100.0;
}
// returns a "nice" string consisting of attributes

string Article::toString()
{
    stringstream s;
    s << "Name: " << name << "\nProduct Code: " << productCode
      << "\nNumber: " << number << "\nPrice: " << price << "\n"
      << LINE;
    return s.str(); // Convert stream s into a string
}

//------------------- definition of functions -----------------------
Article maxPreis(int n, Article dat[])
{
    Article maxArticle = dat[0];
    for (int i = 0; i < n; i++)
    {
        if (dat[i].getPrice() > maxArticle.getPrice())
        {
            maxArticle = dat[i];
        }
    }
    return maxArticle;
}

double Article::getPrice() { return price; }
int Article::getNumber() { return number; }

void printAll(int n, Article dat[])
{
    for (int i = 0; i < n; i++)
    {
        std::cout << dat[i].toString() << std::endl;
    }
};
double getCapital(int n, Article dat[])
{
    double capital = 0;
    for (int i = 0; i < n; i++)
    {
        capital += dat[i].getPrice() * dat[i].getNumber();
    }
    return capital;
};

//---------------------- main()-function ----------------------------