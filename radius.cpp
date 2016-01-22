// Write functions that will do the following:
// 
// -> get a positive integer value from the user and return that value
// -> calculate the area of a circle based on a radius
// ->calculate the volume of a sphere based on a radius

#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;

const double pi = M_PI;

int getPosInt(string msg)
{
	int num = 0;
	
	do
	{
		cout << msg << endl;
		cin >> num;
	}while(num <= 0);
	
	return num;
}

double areaOfCircle(int r)
{
	return pi * pow(r,2);
}

double volOfSphere(int r)
{
	return 4/3.0 * pi * pow(r,3);
}

int main()
{
	int radius = getPosInt("Enter a positive integer for the radius of a circle/sphere: ");
	
	double area = areaOfCircle(radius);
	
	double vol = volOfSphere(radius);
	
	cout << "\nThe area of the circle of radius " << radius << " is " << area << endl;
	cout << "\nThe volume of the sphere of radius " << radius << " is " << vol << "\n\n";
	
}