#include <iostream>
#include "Character.h"
#include "Jedi.h"
#include "Sith.h"

//Prototype functions here
void DisplayIntro();
void Scenario();

//Create character objects
Jedi jedi;
Sith sith;

//Main function
int main()
{
	//Set Character values
	jedi.SetName("Luke Skywalker");
	jedi.SetHealth(100);
	jedi.SetLightsaberColor("green");

	sith.SetName("Darth Vader");
	jedi.SetHealth(150);
	sith.SetLightsaberColor("red");

	//Call DisplayIntro()
	DisplayIntro();

	//Call Scenario function
	Scenario();

	//Because it is an int function, it needs to return an int value
	//Standard practice is to have int functions return zero
	return 0;
}

//Function to run an Introduction for the user
void DisplayIntro()
{
	std::cout << "\n\nWelcome to Jedi vs. Sith!\n";
	std::cout << "Prepare to fight for the fate of the galaxy!" << std::endl;

	//Build scenario
	std::cout << "\nThis is a battle between the evil Sith Lord, " << sith.GetName() << " and the Jedi Knight " << jedi.GetName() << std::endl;
}

void Scenario()
{
	//Access the Jedi Force power
	jedi.ForcePush();

	//The Jedi dealt damage, so the Sith's health is reduced
	sith.SetHealth(100);

	//Print out health change through the story scenario
	std::cout << "\n\n'You may be a powerful Jedi, " << jedi.GetName() << " but I am stronger!' " 
		<< sith.GetName() << "'s health is now at: " << sith.GetHealth() << std::endl;

	//Access the Sith Force power
	sith.ForceChoke();

	//The Sith dealt damage, so the Jedi's health is reduced
	jedi.SetHealth(50);

	//Print out health change through the story scenario
	std::cout << "\n\n'You were once a Jedi, " << sith.GetName() << " and I can still feel the good in you!' "
		<< jedi.GetName() << "'s health is now at: " << jedi.GetHealth() << std::endl;

	//Continue scenario
	std::cout << "\n\nThe two powerful Force-users continued to battle for the fate of the galaxy, " << sith.GetName() << "'s " << sith.GetLightsaberColor()
		<< " blade repeatedly struck " << jedi.GetName() << "'s " << jedi.GetLightsaberColor() << " blade in a duel that would echo across the galaxy.";

	//Ending statement and thanks to the player
	std::cout << "\n\nCan " << jedi.GetName() << " return " << sith.GetName() << " to the Light Side of the Force? Only you can decide!" << std::endl;
	std::cout << "Thanks for playing!" << std::endl;
}