using System;
using Visitor.Equipments;

namespace Visitor.Visitors
{
    public class DropEquipmentVisitor : EquipmentVisitor
    {
        private readonly Equipment _equipment;
        private readonly Backpack _backpack;

        public DropEquipmentVisitor(Equipment equipment, Backpack backpack)
        {
            _equipment = equipment;
            _backpack = backpack;
        }

        public override void VisitEquipment(Equipment equipment)
        {
            if (equipment == _equipment)
            {
                Console.WriteLine($"Drops equipment \"{equipment.Name}\".");
                _backpack.Remove(equipment);
                GameSystem.Instantiate(equipment);
            }
        }

        public override void VisitArmor(Armor armor)
        {
            VisitEquipment(armor);
        }

        public override void VisitWeapon(Weapon weapon)
        {
            VisitEquipment(weapon);
        }
    }
}
