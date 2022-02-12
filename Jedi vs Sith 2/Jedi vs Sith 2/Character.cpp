#include "Character.h"
#include <iostream>


std::string Character::GetName()
{
	return Name;
}

void Character::SetName(std::string n)
{
	Name = n;
}

void Character::SetHealth(int health)
{
	Health = health;
}

int Character::GetHealth()
{
	return Health;
}

std::string Character::GetLightsaberColor()
{
	return LightsaberColor;
}

void Character::SetLightsaberColor(std::string lightsaberColor)
{
	LightsaberColor = lightsaberColor;
}

void Character::Help()
{
}