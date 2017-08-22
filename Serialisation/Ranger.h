#pragma once
#include "CharacterType.h"
class Ranger:
	public CharacterType
{
public:
	Ranger();
	~Ranger();

protected:
	virtual void SaveAsText_Internal(std::ostream& outputStream);
	virtual void LoadFromText_Internal(std::istream& inputStream);
};


