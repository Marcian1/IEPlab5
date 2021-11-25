
#include "./Dog.cpp"
#include "./RealSafe.cpp"
#include <iostream>


int main(int argc, char *argv[])
{
 Dog d1(10,"Bull Dog");
 cout << "Dog d: " << endl;
 d1.ToString();
 
 // Age should be 10 but remains zero
 Dog d2(d1);
 cout << endl << "Dog d2: " << endl;
 d2.ToString();
 
 Dog d ( 13, "Alsasian");

 Dog d3 ( 10, "Labrador" );
 
 // Age should become 13 but remains 10
 d3 = d;
 cout << endl << "Dog d3: " << endl;
 d3.ToString();


 RealSafe a, b, c;
 c.pData = new Data();
 c.pData2 = new Data();
 a = c = b = a = b = b = c = c = a = a = b = a = c;
 
    
    
}