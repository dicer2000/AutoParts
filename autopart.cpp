
#include <iostream>
#include "autopart.h"
#include "basepart.h"

using namespace std;


// Implementation of AutoPart Class

AutoPart::AutoPart(int PartNumber, string PartDescription, int PartMaker) : BasePart(PartNumber)
{
    cout << "In AutoPart Constructor: " << _PartNo << endl;

    // Initialize Locals
    _PartDescription = PartDescription;
    _PartMaker = PartMaker;
}

AutoPart::~AutoPart()
{
    cout << "In AutoPart Destructor: " << _PartNo << endl;
}


void AutoPart::PrintPart()
{
    cout << _PartNo << "\t" << _PartDescription << endl;
}
