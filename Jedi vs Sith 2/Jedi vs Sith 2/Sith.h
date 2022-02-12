#pragma once
#include "Character.h"


class Sith : public Character
{
public:
	void ForceChoke();

	void Help() override;

	//Set Character name and lightsaber color
	std::string name = Character().Name;
	std::string lightsaberColor = Character().LightsaberColor;

};

