//playing around with user input

//#include libraries
#include <iostream>
#include <stdio.h>
using namespace std;

//start integer main code
int main()
{
    //Output a statement that asks the user to type
    //something into the computer
    std::cout << "Enter your name: " << std::flush;

    //Use cin to used a declared string as the input
    string input;
    std::cin >> input;

    //Output whatever was typed by the user
    std::cout << "You entered: " << input << std::endl;

    //Do the same as a above but instead ask for a
    //number. The input must be an integerthis time
    //and not a string
    std::cout << "Enter a number: " << std::flush;
    int number;
    std::cin >> number;

    /*if(cin >> string)
    {
        return "Did not type a number";
    }*/

    std::cout << "You entered: " << number << std::endl;

    //End integer main code with 2 getchar()'s'
    //and return 0. A second is needed because when the
    //first input is entered, the output will appear 
    //then the command prompt window will disappear
    getchar();
    getchar();
    return 0;
}
