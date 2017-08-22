#include "stdafx.h"
#include "Ranger.h"


Ranger::Ranger():
CharacterType()
{
	type = ectRanger;
	name = "Crow";
	vitality = 100;
	strength = 25;
	dexterity = 50;
	magic = 10;
}


Ranger::~Ranger()
{
}

void Ranger::SaveAsText_Internal(std::ostream & outputStream)
{
	outputStream << "," << vitality;
	outputStream << "," << strength;
	outputStream << "," << dexterity;
	outputStream << "," << magic;
}

void Ranger::LoadFromText_Internal(std::istream & inputStream)
{
	char dummyChar;
	inputStream >> dummyChar >> vitality;
	inputStream >> dummyChar >> strength;
	inputStream >> dummyChar >> dexterity;
	inputStream >> dummyChar >> magic;
}
