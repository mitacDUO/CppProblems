//playing around with floating point types

//#include libraries
#include <iostream>
#include <iomanip>          //a new library added
#include <stdio.h>
#include <limits.h>
using namespace std;

//start integer main code
int main()
{
    //ssee what the limit of floats is
    std::cout << sizeof(float) << std::endl;

    //output a floating value and set the pecision to a value
    float floatValue = 92.7;
    std::cout << floatValue << std::endl;

    //ouput a double value and set the precison to a value
    double doubleValue = 92.7;
    std::cout << doubleValue << std::endl;

    //ouput a long double value and set the precison to a value
    long double longDoubleValue = 123.456789876;  //the ouput here is VERY WRONG
    std::cout << longDoubleValue << std::endl;

    //finishe main(integer) code with getchar() and return 0
    getchar();
    return 0;
}
