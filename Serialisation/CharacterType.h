#pragma once
#include <iostream>
#include<string>

enum CharacterList
{
	ectBase,
	ectWarrior,
	ectRanger,
	ectWizard,
};

class CharacterType
{
public:
	CharacterType();
	~CharacterType();

	virtual void SaveAsText(std::ostream& outputStream);
	virtual void LoadFromText(std::istream& inputStream);

public:
	CharacterList type;
	std::string name;
	int vitality;
	int strength;
	int dexterity;
	int magic;

protected:
	virtual void SaveAsText_Internal(std::ostream& outputStream);
	virtual void LoadFromText_Internal(std::istream& inputStream);
};

