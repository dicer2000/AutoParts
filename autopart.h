#pragma once

#include <iostream>
#include "basepart.h"

using namespace std;

class AutoPart : public BasePart
{
    private:
        string _PartDescription;
        int _PartMaker;

    public:
        AutoPart(int PartNumber, string PartDescription, int PartMaker);

        ~AutoPart();

        // Member function
        void PrintPart();
};