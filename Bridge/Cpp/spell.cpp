#include <iostream>
#include "spell.h"
#include <string>

spell::spell(int power, int speed, int cost)
{
	this->power = power;
	this->speed = speed;
	this->cost = cost;
}

spell::~spell() = default;

default_spell::default_spell(int power, int speed, int cost) : spell(power, speed, cost)
{
	
}

void default_spell::cast()
{
	std::cout << "Casts a default air spell with power " + std::to_string(power) + " and speed " + std::to_string(speed) + "." << std::endl;
}

fire_spell::fire_spell(int power, int speed, int cost) : spell(power, speed, cost)
{
	
}

void fire_spell::cast()
{	
	std::cout << "Casts a fire spell with power " + std::to_string(power) + " and speed " + std::to_string(speed) + ". Applies burning effect." << std::endl;
}

ice_spell::ice_spell(int power, int speed, int cost): spell(power, speed, cost)
{
	
}

void ice_spell::cast()
{
	std::cout << "Casts a ice spell with power " + std::to_string(power) + " and speed " + std::to_string(speed) + ". Freezes the enemy 3 seconds." << std::endl;
}

curse_spell::curse_spell(int power, int speed, int cost) : spell(power, speed, cost)
{
	
}

void curse_spell::cast()
{
	std::cout << "Casts a curse spell with power " + std::to_string(power) + " and speed " + std::to_string(speed) + ". Shows dark flame effect and keeps damage health of enemy for 10 seconds. Applies curse effect to every enemies who collide with the target enemy." << std::endl;
}