#pragma once
#include "CharacterType.h"
class Warrior:
	public CharacterType
{
public:
	Warrior();
	~Warrior();

protected:
	virtual void SaveAsText_Internal(std::ostream& outputStream);
	virtual void LoadFromText_Internal(std::istream& inputStream);
};

