//playing around with strings

//#include libraries
#include <iostream>
#include <stdio.h>
using namespace std;

//start integer main code
int main()
{
    //type out some strings
    string text1 = "Hello ";
    string text2 = "Fred";

    //add the strings together to create another string
    string text3 = text1 + text2;

    //output the first 2 strings on the same line
    std::cout << text1 << text2 << std::endl;

    //output the thrid string and see if it matches the
    //output above
    std::cout << text3 << std::endl;

    //end integer code with getchar() and return 0
    getchar();
    return 0;
}
