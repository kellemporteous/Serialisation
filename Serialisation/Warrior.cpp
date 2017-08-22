#include "stdafx.h"
#include "Warrior.h"


Warrior::Warrior():
	CharacterType()
{
	type = ectWarrior;
	name = "Sigfreid";
	vitality = 100;
	strength = 50;
	dexterity = 10;
	magic = 25;
}


Warrior::~Warrior()
{
}

void Warrior::SaveAsText_Internal(std::ostream & outputStream)
{
	outputStream << "," << vitality;
	outputStream << "," << strength;
	outputStream << "," << dexterity;
	outputStream << "," << magic;
}

void Warrior::LoadFromText_Internal(std::istream & inputStream)
{
	char dummyChar;
	inputStream >> dummyChar >> vitality;
	inputStream >> dummyChar >> strength;
	inputStream >> dummyChar >> dexterity;
	inputStream >> dummyChar >> magic;
}
