#pragma once

#include <iostream>
#include "autopart.h"

using namespace std;

class EnginePart : public AutoPart
{
	int _EngineSpecNo;

public:
	EnginePart(int PartNo, string PartDescription, int PartMaker, int EngineSpecNo);
	~EnginePart();

	/// <summary>
	/// Prints the part information
	/// </summary>
	/// <returns>void</returns>
	void PrintPart();

};

