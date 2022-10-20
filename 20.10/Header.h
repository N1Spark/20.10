#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Contact
{
	string name;
	int numer;
public:
	Contact()
	{
		name = "name";
		numer = 0;
	}
	Contact(const char* n, int N)
	{
		name = n;
		numer = N;
	}
	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "Number: " << numer<< endl;
	}
	void Init()
	{
		cout << "Name: ";
		cin >> name;
		cout << "Number: ";
		cin >> numer;
	}
	void Save()
	{
		fstream inout;
		inout.open("Phones.txt", ios::app);
		inout << "Name: " << name << '\n';
		inout << "Number: " << numer << "\n\n";
		inout.close();
	}
};