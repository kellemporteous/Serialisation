#pragma once
#include "CharacterType.h"
#include <vector>
class GameManager
{
public:
	static GameManager& Instance();

	void BeginPlay();
	void EndPLay();

private:
	GameManager();
	~GameManager();

	std::vector<CharacterType*> objects;
	std::vector<CharacterType*> listObjects;

};
#define GameManagerInstance (GameManager::Instance())


