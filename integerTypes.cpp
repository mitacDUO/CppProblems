//playing around with integer types

//#include libraries
#include <iostream>
#include <stdio.h>
#include <limits.h>         //a new library added

using namespace std;

//start integer main code
int main()
{
    //type in an integer value that's not too long. however to the limits
    //of int, type in a big integer
    int value = 35287;
    std::cout << value << std::endl;

    //find out the max and min length an int can take
    std::cout << "Max int value: " << INT_MAX << std::endl;
    std::cout << "Min int value: " << INT_MIN << std::endl;

    //use a long long integer and find out it's limits
    long long int longValue = 592879836587356;
    cout << longValue << endl;
    std::cout << "Max long value: " << LONG_MAX << std::endl;

    //use a short integer
    short int shortValue = 8472;
    std::cout << shortValue << std::endl;

    //find out the size can integer and short integer can take
    std::cout << "Size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of short int: " << sizeof(short int) << std::endl;

    //used an unsigend integer
    unsigned int unsignedValue = 82395623;
    std::cout << unsignedValue << std::endl;

    //finishe main(integer) code with getchar() and return 0
    getchar();
    return 0;
}
