#include "stdafx.h"
#include "GameManager.h"
#include "Warrior.h"
#include "Ranger.h"
#include "Wizard.h"
#include <fstream>


GameManager& GameManager::Instance()
{
	static GameManager instance;
	return instance;
}

GameManager::GameManager()
{
}


GameManager::~GameManager()
{
}

void GameManager::BeginPlay()
{
	Warrior* warrior = new Warrior();
	Ranger* ranger = new Ranger();
	Wizard* wizard = new Wizard();

	listObjects.push_back(warrior);
	listObjects.push_back(ranger);
	listObjects.push_back(wizard);

	std::ofstream outputFile("objects.csv");
	outputFile << listObjects.size() << std::endl;

	for (CharacterType* objectPtr : listObjects)
	{
		objectPtr->SaveAsText(outputFile);
	}
	outputFile.close();

	delete warrior;
	delete ranger;
	delete wizard;

	std::ifstream inputFile("objects.csv");
	int numOfObjects = listObjects.size();
	inputFile >> numOfObjects;

	objects.reserve(numOfObjects);
	for (int index = 0; index < numOfObjects; index++)
	{
		int typeValue;
		inputFile >> typeValue;
		CharacterList type = (CharacterList)typeValue;

		CharacterType* loadedCharacterPtr = nullptr;
		switch(type)
		{
		case ectBase:
			break;
		case ectWarrior:
			loadedCharacterPtr = new Warrior();
			break;
		case ectRanger:
			loadedCharacterPtr = new Ranger();
			break;
		case ectWizard:
			loadedCharacterPtr = new Wizard();
			break;
		}

		loadedCharacterPtr->LoadFromText(inputFile);
		objects.push_back(loadedCharacterPtr);
	}
}

void GameManager::EndPLay()
{
	std::vector<CharacterType*>::iterator objectIt;
	for (objectIt = objects.begin(); objectIt != objects.end(); objectIt++)
	{
		CharacterType* objectPtr = *objectIt;
		delete objectPtr;
	}
	objects.clear();
}
