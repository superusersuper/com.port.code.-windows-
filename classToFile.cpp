#include "classToFile.h"
#include <iostream>

using namespace std;

classToFile::classToFile()
{
    cout << "\nConstructor." << endl;
}

    /*
    Since destructor can`t take
    parameters, they also can`t be
    overloaded.
    Each class will have just ONE
    destructor.

    Defining a destructor is not
    mandatory; if you don`t need one,
    you don`t have to define one.
    */
classToFile::~classToFile()
{
    cout << "\nDestructor." << endl;
}

void classToFile::myPrint() const
{
    cout << "\nHello." << endl;
}
