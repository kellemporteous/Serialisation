#include "stdafx.h"
#include "Wizard.h"


Wizard::Wizard():
CharacterType()
{
	type = ectWizard;
	name = "Wicka";
	vitality = 100;
	strength = 10;
	dexterity = 25;
	magic = 50;
}


Wizard::~Wizard()
{
}

void Wizard::SaveAsText_Internal(std::ostream & outputStream)
{
	outputStream << "," << vitality;
	outputStream << "," << strength;
	outputStream << "," << dexterity;
	outputStream << "," << magic;
}

void Wizard::LoadFromText_Internal(std::istream & inputStream)
{
	char dummyChar;
	inputStream >> dummyChar >> vitality;
	inputStream >> dummyChar >> strength;
	inputStream >> dummyChar >> dexterity;
	inputStream >> dummyChar >> magic;
}
