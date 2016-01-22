//problem statement

//A red seed will grow into a flower when planted in soil temperatures above 75 degrees, otherwise it will
//grow into a mushroom. Assuming the temperature meets the conditions for growing a flower, planting a red
//seed in dry soil will produce dandelion.
//A blue seed will grow into a flower when planted in soil temperatures ranging from 60 to 70, otherwise it
//grow into a mushroom. Assuming the temperature meets the conditions for growing a flower, planting the blue 
//seed in wet soil will produce a dandelion and planting the blue seed in dry soil will producce a sunflower.
//Write a program that will ask the user to input the seed colour, the soil temperature and whether the soil
//is wet or dry and then output what will grow

#include <iostream>
#include <string>
using namespace std;

int main()
{

	//ask what the seed colour is
	string colour = "";
	cout << "What is the colour of the seed (red or blue): \n";
	cin >> colour;

	//if colour isn't red or blue
	if(colour != "red" && colour != "blue")
	{
		cout << "\nInvalid colour selected. Program terminated\n\n";
		return 0;
	}
	
	//ask what the soil temp. is
	int temp = 0;
	cout << "What is the temperature (F) of the soil: \n";
	cin >> temp;
	
	//if red seed
	if(colour == "red")	//has to be a boolean expression aka reults in a T/F output
	{
		//if temp >=75
		if(temp >= 75)
		{
			//ask whether the soil is wet or dry
			string wod = "";
			cout << "Is the soil wet or dry: \n";
			cin >> wod;
			
			//if soil isn't wet or dry
			if(wod != "dry" && colour != "wet")
			{
				cout << "\nInvalid colour selected. Program terminated\n\n";
				return 0;
			}
			
			//if soil is dry
			else if(wod == "dry")
			{
				//output dandelion
				cout << "\nA dandelion will grow.\n\n";
			}
			
			//if soil wet (otherwise)
			else
			{
				//output mushroom
				cout << "\nA mushroom will grow.\n\n'";
			}
		}
		//if temp <75	*(can say simply oherwise for simplicity)*
		
		else
		{
			//output mushroom
			cout << "\nA mushroom will grow.\n\n'";
		}
		
	}
	
	//if blue seed
	if(colour == "blue")
	{
		//if temp is between 60 and 70 inclusive
		if(temp >= 60 && temp <= 70)
		{
			//ask whether the soil is wet or dry
			string wod = "";
			cout << "Is the soil wet or dry: \n";
			cin >> wod;
			
			//if soil isn't wet or dry
			if(wod != "dry" && colour != "wet")
			{
				cout << "\nInvalid colour selected. Program terminated\n\n";
				return 0;
			}
			
			//if soil is wet
			else if(wod == "wet")
			{
				//output dandelion
				cout << "\nA dandelion will grow.\n\n";
			}
			//if soil is dry
			else
			{
				//output sunflower
				cout << "\nA sunflower will grow.\n\n";
			}
		}
		//if temp is <60 or >70 
		else
		{
			//output mushroom
			cout << "\nA mushroom will grow.\n\n'";
		}
	}
}

	//devise a condition statement that gives all possible outcomes:
		//	red - >75 - dry - dandelion
		//	red - <75 - mushroom (doesn't matter if it's wet or dry)
		//	blue - 60<=temp.<=70 - wet - dandelion
		//	blue - 60<=temp.<=70 - dry - sunflower
		//	blue - <60 or >70 - mushroom (doesn't matter if it's wet or dry)