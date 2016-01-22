// problem statement

// Write a program that will ask the user to input a word that is at least 5 characters in length. Once a 
// valid word has been in putted, ask the user to input a character. The program will then calculate the 
// number of times this inputted character appears in the word and output the result.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// ask for word
	string word = "";
	
	do	// validate that it is at least 5 characters long (while the word is < 5)
	{
	cout << "Enter a word that's at least 5 characters: " << endl;
	cin >> word;
	}while(word.size() < 5);

	// get input character
	char search = '0';
	cout << "Enter a character and the program will tell you how many times that character appears " 
	"in the word " << word << endl;
	cin >> search;

	int counter = 0;

	// look through word and find where character pops up (iterate over word)
	for(int i = 0; i < word.size(); i++)
	{
		//get a character
		char ch = word.at(i);

		//if character matches the character we're looking for
		if(search == ch)
		{
			//increment a counter (counter = counter + 1)
			counter++;
		}
	}

	// output the number of times that character pops up
	cout << "\nThe number of " << search << "'s is in the word "<< word << " is " << counter 
	<< endl << endl;

}