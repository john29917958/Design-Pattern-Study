#include "backpack.h"

backpack::backpack(int max_loading)
{
	max_loading_ = max_loading;
}

void backpack::add(std::shared_ptr<equipment> equipment)
{
	equipments_.push_back(equipment);
}

void backpack::remove(std::shared_ptr<equipment> equipment)
{
	auto iterator = std::find(equipments_.begin(), equipments_.end(), equipment);
	if (iterator != equipments_.end())
	{
		equipments_.erase(iterator);
	}
}

void backpack::run_visitor(std::shared_ptr<equipment_visitor> visitor)
{
	for (std::shared_ptr<equipment> equipment : equipments_)
	{
		equipment->run_visitor(visitor);
	}
}
