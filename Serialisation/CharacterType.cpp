#include "stdafx.h"
#include "CharacterType.h"


CharacterType::CharacterType()
{
	type = ectBase;
}


CharacterType::~CharacterType()
{
}

void CharacterType::SaveAsText(std::ostream & outputStream)
{
	outputStream << type << "," 
				 << name << ","
				 << vitality << "," 
				 << strength << "," 
				 << dexterity << ","
				 << magic;

	SaveAsText_Internal(outputStream);

	outputStream << std::endl;
}

void CharacterType::LoadFromText(std::istream & inputStream)
{
	char dummyValue;
	inputStream >> dummyValue;

	inputStream >> vitality;
	inputStream >> dummyValue;

	inputStream >> strength;
	inputStream >> dummyValue;

	inputStream >> dexterity;
	inputStream >> dummyValue;

	inputStream >> magic;
	inputStream >> dummyValue;

	std::getline(inputStream, name, ',');
	LoadFromText_Internal(inputStream);
}

void CharacterType::SaveAsText_Internal(std::ostream & outputStream)
{
}

void CharacterType::LoadFromText_Internal(std::istream & inputStream)
{
}
