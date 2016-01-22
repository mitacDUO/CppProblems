//problem statement:
//create a program that displays the average score from metacritic's Metascore and Rotten Tomatoes' Tomatometer
//fro a particular movie. the average score must be displayed on a 10 point scale. the movie title and scores will
//be inputted by the user.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	//get the name of the movie
	string movie = "";
	cout << "What is the name of the movie: \n";
	getline(cin, movie);
	
	//get the Metascore
	int metascore = 0;
	cout << "What is the metascore rating for " << movie << "?\n";
	cin >> metascore;
	
	//get the Tomatometer scores
	int tomatometer = 0;
	cout << "What is the Tomatometer rating for " << movie << "?\n";
	cin >> tomatometer;
	
	//calculate the avreage
	double avg = /*(double)*/(metascore + tomatometer)/2.0;	/*can do either writing the double in 
									front of the parentheses or the 2.0 
									(for the 2, wrintg it as 2.0 is
									recognised by the compiler as a
									double*/
	
	//rescale average
	double rescaledScore = avg/10;
	
	//display the result of our calculations
	cout << "Our calculated average on the 10 point scale for "
	<< movie << " is " << rescaledScore << "\n";
	
	return 0;
	
}