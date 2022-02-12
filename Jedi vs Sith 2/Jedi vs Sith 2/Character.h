#pragma once
#include <string>
#include "Game_Structure.h"

class Character : public Game_Structure
{
public:
	//Create a public property in the Character class and call it Name
	std::string Name;
	std::string LightsaberColor;

	//Getter and Setter methods for Name
	std::string GetName();
	void SetName(std::string n);

	//Getter and Setter methods for Health
	int GetHealth();
	void SetHealth(int health);

	//Getter and Setter methods for LightsaberColor
	std::string GetLightsaberColor();
	void SetLightsaberColor(std::string lightsaberColor);

	//Help function
	void Help() override;

private:
	//Create one private property called Health in the Character superclass.
	int Health = 10;


};

