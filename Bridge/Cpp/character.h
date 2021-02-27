#pragma once

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "spell.h"

class spell;
class default_spell;

class character
{
public:
	virtual void set_spell(spell* spell);
	virtual void cast_spell();
	virtual void take_damage(int value);
protected:
	int id_;
	std::string name_;
	int health_;
	int mana_;
	spell* spell_;

	character(int id, std::string name, int health, int mana);
	virtual ~character() = 0;
};

class human : public character
{
public:
	human(int id, std::string name, int health, int mana);
	~human() = default;
	void set_spell(spell* spell) override;
	void cast_spell() override;
};

class orc : public character
{
public:
	orc(int id, std::string name, int health, int mana);
	~orc() = default;
	void take_damage(int value) override;
};

class vampire : public character
{
public:
	vampire(int id, std::string name, int health, int mana);
	~vampire() = default;
	void set_spell(spell* spell) override;
private:
	static bool is_curse_spell(spell* the_spell);
};

#endif