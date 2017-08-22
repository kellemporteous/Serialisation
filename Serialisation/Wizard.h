#pragma once
#include "CharacterType.h"
class Wizard:
	public CharacterType
{
public:
	Wizard();
	~Wizard();

protected:
	virtual void SaveAsText_Internal(std::ostream& outputStream);
	virtual void LoadFromText_Internal(std::istream& inputStream);
};


