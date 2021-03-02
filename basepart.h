#pragma once

#include <string>
#include <iostream>

using namespace std;

class BasePart
{
protected:
	int _PartNo;

public:
	BasePart(int PartNo) 
	{ 
		_PartNo = PartNo; 
		cout << "In BasePart Constructor: " << _PartNo << endl;
	}

	virtual ~BasePart()
	{
		cout << "In BasePart Destructor: " << _PartNo << endl;
	}
	/// <summary>
	/// Function to print the part info
	/// </summary>
	virtual void PrintPart() = 0;
    virtual void Make() { _PartNo *= 1000; cout << "Made: " << _PartNo; }
};