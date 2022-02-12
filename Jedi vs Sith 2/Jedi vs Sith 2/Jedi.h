#pragma once
#include "Character.h"


class Jedi : public Character
{
public:
	void ForcePush();

	void Help() override;

	//Set Character name and lightsaber color
	std::string name = Character().Name;
	std::string lightsaberColor = Character().LightsaberColor;

};

