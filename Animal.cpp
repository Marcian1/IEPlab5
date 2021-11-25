
#include <iostream>
#include <string>

using namespace::std;

class Animal
{
 public:
 	Animal ( int aAge ) : age ( aAge ) {};
	Animal ( const Animal& rhs ) : age ( rhs.age ) {};
	Animal& operator = ( const Animal& rhs )
    {
    age = rhs.age;
    return *this;
    }
	int getAge ( ) {return age;}
	
 private:
 	int age;
};



