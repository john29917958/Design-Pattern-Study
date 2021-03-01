using System;
using System.Threading;
using BuffPattern.Attributeses;
using BuffPattern.Buffs;
using BuffPattern.Equipments;

namespace BuffPattern
{
    class Program
    {
        private static bool _shouldUpdate = true;
        private static readonly object Lck = new object();

        static void Main(string[] args)
        {
            Character character = new Character(1, new BaseAttributes(100, 50, 10, 5, 1));
            character.Buffs.Add(new LevelBuff(character));
            new Thread(UpdateCharacter) {IsBackground = true}.Start(character);

            Thread.Sleep(1000);

            lock (Lck) character.Level += 1;
            Thread.Sleep(1000);

            lock (Lck) character.Level += 1;
            Thread.Sleep(1000);

            Weapon weapon = new FairyGunIWeapon("Fairy Gun I", 1, 5, 10);
            lock (Lck) weapon.AttachTo(character);
            Thread.Sleep(1000);

            weapon.Level += 1;
            Thread.Sleep(1000);

            weapon.Level += 1;
            Thread.Sleep(1000);

            Armor flashArmor = new FlashArmor("Flash armor", 1, 10, 50);
            lock (Lck) flashArmor.AttachTo(character);
            Thread.Sleep(4000);

            lock (Lck) flashArmor.Detach();
            Thread.Sleep(1000);

            lock(Lck) weapon.Detach();
            Thread.Sleep(3000);
        }

        private static void UpdateCharacter(object param)
        {
            Character character = (Character) param;

            while (_shouldUpdate)
            {
                lock (Lck)
                {
                    character.Update();

                    Console.Clear();
                    Console.WriteLine($@"Max health: {character.MaxHealth}
Max mana: {character.MaxMana}
Attack: {character.Attack}
Defense: {character.Defense}
Critical: {character.Critical}");
                }

                Thread.Sleep(100);
            }
        }
    }
}
