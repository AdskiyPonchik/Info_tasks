#include <iostream>
#include <sstream>
#include <string>
using namespace std;

//----------------------- class declaration -------------------------
class Person
{	
	friend class Student;
	friend class Staff;	

private: 
	// TODO: attributs

public: 
	virtual string toString() = NULL;  // virtual --> late binding 

};

//----------------------- class declaration -------------------------
class Student: public Person
{
private:

	// TODO: attribut

public:

	// TODO: signaturs for constructor and toString

};

//---------------------- Definition/Implementation of Methods -------
// complete Constructor
Student::Student(string n, int y, string course)
{ 
	// TODO

}

// returns a "nice" string consisting of attributes
string Student::toString()
{  
	stringstream s;
	// s << ...        // complete code line with the attributes

	return s.str();    // convert stream s into a string
}

//----------------------- class declaration -------------------------
class Staff: public Person
{
private:

	// TODO: attribut

public:

	// TODO: signaturs for constructor and toString

};

//---------------------- Definition/Implementation of Methods -------
// complete Constructor
Staff::Staff(string n, int y, string payment)
{ 
	// TODO

}

// returns a "nice" string consisting of attributes
string Staff::toString()
{  
	stringstream s;
	// s << ...      // complete code line with the attributes
	return s.str();  // convert stream s into a string	

}