#include <iostream>
#include <string>
#include "Animal.cpp"


using namespace::std;
class Dog : public Animal
{
 public:
 	Dog ( int aAge, string aBreed ): Animal(aAge), breed(aBreed) {}
	Dog ( const Dog& rhs ):
	    Animal ( rhs ),
		breed(rhs.breed)
	{
	
	}
	Dog& operator= ( const Dog& rhs )
	{
		Animal::operator=(rhs);
		breed = rhs.breed;
		return *this;
	}
	
	void ToString ( )
	{
	cout << "Age: " << getAge() << "; Breed: " << breed << endl; 
	}
 private:
 	string breed;	 
};



