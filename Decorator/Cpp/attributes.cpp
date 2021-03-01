#include "attrubutes.h"

attributes::~attributes() = default;

int attributes::get_max_mana()
{
	return max_mana_;
}

int attributes::get_max_health()
{
	return max_health_;
}

int attributes::get_attack()
{
	return attack_;
}

int attributes::get_defense()
{
	return defense_;
}

int attributes::get_critical()
{
	return critical_;
}

base_attributes::base_attributes(int max_health, int max_mana, int attack, int defense, int critical)
{
	
}
