
#include <iostream>
#include <stdexcept>

using namespace std;

class Person::Person()
{
	name = "";
	age = 0;
}

Person::Person (string pname, int page)
{
	name = pname;

	if( page >= 0 && page < 120 ) {
        age = page;
	}
	else {
        throw std::invalid_argument( "Invalid Age" );
	}
}

string Person::getName() const
{
	return name;
}

int Person::getAge() const
{
	return age;
}

void Person::print() const
{
	cout << "Name : " << name << endl;
	cout << "Age : " << age << endl;
}

void Person::setName( string name )
{
	this->name = name;
}

void Person::setAge( int age )
{
    if( age >= 0 && age < 120 ) {
        this->age = age;
    }
    else {
        throw std::invalid_argument( "Invalid Age" );
    }
}
