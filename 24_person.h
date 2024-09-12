#include <iostream>
#include <sstream>
#include <string>

//----------------------- class declaration -------------------------
class Person
{	
	friend class Student;
	friend class Staff;	

private: 
	std::string name;
	int yearOfBirth;

public: 
	Person(std::string n, int y):name(n), yearOfBirth(y){};
	virtual std::string toString() = 0;  // virtual --> late binding 

};

//----------------------- class declaration -------------------------
class Student: public Person
{
private:

	std::string course;
public:
	Student(std::string n, int y, std::string c);
	std::string toString();
};

//---------------------- Definition/Implementation of Methods -------
// complete Constructor
Student::Student(std::string n, int y, std::string c):Person(n, y), course(c)
{ 
	 // Initialization is done in the initializer list

}

// returns a "nice" string consisting of attributes
std::string Student::toString()
{  
	std::stringstream s;
    s << "Name: " << name << ", Year of Birth: " << yearOfBirth << ", Course: " << course;
    return s.str();    // convert stream s into a string
}

//----------------------- class declaration -------------------------
class Staff: public Person
{
private:

	std::string payment;

public:

	Staff(std::string n, int y, std::string p);
	std::string toString();

};

//---------------------- Definition/Implementation of Methods -------
// complete Constructor
Staff::Staff(std::string n, int y, std::string p): Person(n, y), payment(p){};

// returns a "nice" string consisting of attributes
std::string Staff::toString()
{  
	std::stringstream s;
    s << "Name: " << name << ", Year of Birth: " << yearOfBirth << ", Payment: " << payment;
    return s.str();  // convert stream s into a string 
	return s.str(); 

}

