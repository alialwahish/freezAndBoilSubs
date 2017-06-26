// Name: Ali Bayati
//Freezing and Boiling Points

#pragma once
#include<iostream>

using namespace std;

class points
{
public:
	// constructor
	points()
	{
		temp = 0;
	}
	
	// deconstructor
	~points();

	// sets and gets 
	void settemp(int);
	int  gettemp();
	bool isAlcfreez(int);
	bool isAlcboil(int);
	bool isO2freez(int);
	bool isO2boil(int);
	bool iswaterfreez(int);
	bool iswaterboil(int);


private:
	int temp;

};

points::~points()
{

}

// function implemntation 
void points::settemp(int t)
{
	temp = t;
}

int points::gettemp()
{
	return temp;
}

bool points::isAlcboil(int t)
{
	if (t >= 172)
		cout << "Ethyl Alcohol will boil\n";
	else
		return false;
}
bool points::isAlcfreez(int t)
{
	if (t <= -172)
		cout << "Ethyl Alcohol will freeze\n";
	else
		return false;
}
bool points::isO2boil(int t)
{
	if(t>=-306)
		cout << "Oxygen will boil\n";
	else
		return false;
}

bool points::isO2freez(int t)
{
	if(t<=-362)
	cout << "Oxygen will freeze\n";
	else
		return false;
}
bool points::iswaterboil(int t)
{
	if(t>=212)
		cout << "Water will boil\n";
	else
		return false;
}
bool points::iswaterfreez(int t)
{
	if(t<=32)
		cout << "Water will freeze\n";
	else
		return false;

}