#include <iostream>
#include "character.h"

int main()
{
	character* character = new human(0, "Jack", 100, 100);
	character->cast_spell();
	character->set_spell(new fire_spell(30, 100, 20));
	character->cast_spell();
	character->set_spell(new ice_spell(30, 50, 20));
	character->cast_spell();
	character->set_spell(new curse_spell(40, 60, 20));
	character->cast_spell();

	delete character;
	character = new orc(1, "Gary", 100, 100);
	character->cast_spell();
	character->set_spell(new fire_spell(30, 100, 20));
	character->cast_spell();
	character->set_spell(new ice_spell(30, 50, 20));
	character->cast_spell();
	character->set_spell(new curse_spell(40, 60, 20));
	character->cast_spell();

	delete character;
	character = new vampire(3, "Prince", 100, 100);
	character->cast_spell();
	character->set_spell(new fire_spell(30, 100, 20));
	character->cast_spell();
	character->set_spell(new ice_spell(30, 50, 20));
	character->cast_spell();
	character->set_spell(new curse_spell(40, 60, 20));
	character->cast_spell();

	return 0;
}