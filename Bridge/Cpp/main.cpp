#include <iostream>
#include "character.h"

int main()
{
	std::shared_ptr<character> character = std::make_shared<human>(0, "Jack", 100, 100);
	character->cast_spell();
	character->set_spell(new fire_spell(30, 100, 20));
	character->cast_spell();
	character->set_spell(new ice_spell(30, 50, 20));
	character->cast_spell();
	character->set_spell(new curse_spell(40, 60, 20));
	character->cast_spell();

	character = std::make_shared<orc>(1, "Gary", 100, 100);
	character->cast_spell();
	character->set_spell(new fire_spell(30, 100, 20));
	character->cast_spell();
	character->set_spell(new ice_spell(30, 50, 20));
	character->cast_spell();
	character->set_spell(new curse_spell(40, 60, 20));
	character->cast_spell();

	character = std::make_shared<vampire>(3, "Prince", 100, 100);
	character->cast_spell();
	character->set_spell(new fire_spell(30, 100, 20));
	character->cast_spell();
	character->set_spell(new ice_spell(30, 50, 20));
	character->cast_spell();
	character->set_spell(new curse_spell(40, 60, 20));
	character->cast_spell();

	return 0;
}