#include <iostream>
#include <string>
#include <ctime>
#include <sstream>

using namespace std;

class Customer
{
private:
  int m_number;
  string m_name;
  int m_post_code;
  string m_domicile;

public:
  Customer();
  Customer(int num, string name, int post, string domicile);

  void read();
  string toString();
};
////////////////////////////////////////////////////////////////////////////////
Customer::Customer()
{
  m_number = 123;
  m_name = "Pedro";
  m_post_code = 12345;
  m_domicile = "Hauptstadt";
}

Customer::Customer(int num, string name, int post, string domicile)
    : m_name(name), m_number(num), m_domicile(domicile), m_post_code(post)
{
}
////////////////////////////////////////////////////////////////////////////////
void Customer::read()
{
  cout << "Give Number: ";
  cin >> m_number;
  cin.ignore();
  cout << "Give Name: ";
  getline(cin, m_name);
  cout << "Give Post Code: ";
  cin >> m_post_code;
  cin.ignore();
  cout << "Give Domicile: ";
  getline(cin, m_domicile);
}

string Customer::toString()
{
  stringstream s;

  s << "_________________Person_________________" << endl
    << "Number: " << m_number << endl
    << "Name: " << m_name << endl
    << "Post code: " << m_post_code << endl
    << "Domicile: " << m_domicile << endl
    << "________________________________________" << endl
    << endl;

  return s.str();
}
////////////////////////////////////////////////////////////////////////////////

Customer get_winner(Customer dat[5])
{
  int x = rand() % 5;
  return dat[x];
}
////////////////////////////////////////////////////////////////////////////////
