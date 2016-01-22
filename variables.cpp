//playing around with variables

//#include libraries
#include <iostream>
#include <stdio.h>
using namespace std;


//start integer main code
int main()
{
    //Going to stick with Camel casing from now on. Plus numbers can be used in
    //variable names but they can't be used at the beginning.
    int numberCats = 5;
    int numberDogs = 7;

    //output things to do with the variables
    std::cout << "Number of cats: " << numberCats << std::endl;
    std::cout << "Number of dogs: " << numberDogs << std::endl;

    //add varaibles together
    std::cout << "Total number of animals: " << numberCats + numberDogs << std::endl;

    //change a variable
    std::cout << "New dog acquired" << std::endl;

    //add 1 to the variable
    numberDogs = numberDogs + 1;

    //output the new variable change
    std::cout << "New number of dogs: " << numberDogs << std::endl;

    //end integer main code with return 0
    getchar();
    return 0;
}
