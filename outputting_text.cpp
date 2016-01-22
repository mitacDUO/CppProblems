//playing around with cout text a.k.a outputting text

//#include libraries
#include <iostream>
#include <stdio.h>
using namespace std;

//start integer main code
int main()
{
    //use cout and flush (removes data from memory and
    //moves on to next instruction)
    std::cout << "Starting program..." << std::flush;

    //in atom cout feature is memorised to ouput:
    //std::cout << "/* message */" << std::endl; so thats what i'll use
    std::cout << "This is some text" << std::endl;

    //outputting some more
    std::cout << "This is some more text ;)" << std::endl;

    //random output (sort of)
    cout << "Banana. " << "Apple. " << "Orange." << endl;

    //finish off main code with getchar and return
    getchar();
    return 0;
}
