#include "enginepart.h"

/// <summary>
/// Special Constructor for Engines
/// </summary>
/// <param name="PartNo"></param>
/// <param name="PartDescription"></param>
/// <param name="PartMaker"></param>
/// <param name="EngineSpecNo"></param>
EnginePart::EnginePart(int PartNo, string PartDescription, int PartMaker, int EngineSpecNo)
	:AutoPart(PartNo, PartDescription, PartMaker)
{
	_EngineSpecNo = EngineSpecNo;
	cout << "In EnginePart Constructor: " << _PartNo << endl;
}

/// <summary>
/// Destructor
/// </summary>
EnginePart::~EnginePart()
{
	cout << "In EnginePart Destructor: " << _PartNo << endl;
}

/// <summary>
/// Prints the part info + special engine print info
/// </summary>
void EnginePart::PrintPart()
{
	AutoPart::PrintPart();
	cout << "\tEngine Part: " << this->_EngineSpecNo << "\n";
}
