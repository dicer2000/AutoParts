
#include <iostream>
#include "basepart.h"
#include "autopart.h"
#include "enginepart.h"

using namespace std;

int main()
{

    cout << "Starting a new Auto Part" << endl;

    AutoPart p(100, "Turn Signal", 702);
    p.PrintPart();
    p.Make();
    p.PrintPart();
cout << "-----" << endl;
    EnginePart e(200, "Radiator", 120, 401);
    e.PrintPart();
    e.Make();
    e.PrintPart();
cout << "-----" << endl;

	// Polymorphism => One symbol many types
	// This kind of Polymorphism is called Subtyping

	BasePart* newPart = NULL;

	cout << "What kind of part? 1=Autopart 2=Enginepart" << endl;
	int nInput = 0;
	cin >> nInput;

	if(nInput==1)
		newPart = new AutoPart(123, "Tire", 34);
	else
		newPart = new EnginePart(123, "Spark Plug", 121, 23948472);

	newPart->PrintPart();	// use pointer notation
    newPart->Make();
	newPart->PrintPart();	// use pointer notation
	delete newPart;

cout << "-----" << endl;

    return 0;
}