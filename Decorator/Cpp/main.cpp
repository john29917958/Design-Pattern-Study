#include <iostream>
#include "character.h"
#include "attributes_decorator.h"

void print_character_attributes(character& character)
{
	std::cout << "Max health: " << character.get_attributes()->get_max_health() << std::endl;
	std::cout << "Max mana: " << character.get_attributes()->get_max_mana() << std::endl;
	std::cout << "Attack: " << character.get_attributes()->get_attack() << std::endl;
	std::cout << "Defense: " << character.get_attributes()->get_defense() << std::endl;
	std::cout << "Critical: " << character.get_attributes()->get_critical() << std::endl;
}

int main()
{
	character character(std::make_shared<base_attributes>(100, 50, 10, 5, 1));
	std::cout << "Initial attributes:" << std::endl;
	print_character_attributes(character);
	std::cout << "=========================" << std::endl;	
}
