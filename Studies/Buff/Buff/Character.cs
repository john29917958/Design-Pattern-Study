using System.Collections.Generic;
using BuffPattern.Attributeses;
using BuffPattern.Buffs;

namespace BuffPattern
{
    public class Character : IAttributes
    {
        public int Level { get; protected set; }

        public int MaxHealth => Attributes.MaxHealth;
        public int MaxMana => Attributes.MaxMana;
        public int Attack => Attributes.Attack;
        public int Defense => Attributes.Defense;
        public int Critical => Attributes.Critical;

        public BaseAttributes BaseAttributes { get; protected set; }

        public readonly List<Buff> Buffs;

        protected IAttributes Attributes
        {
            get
            {
                Attributes attributes = new Attributes(BaseAttributes);

                foreach (Buff buff in Buffs)
                {
                    buff.Applies(attributes, BaseAttributes);
                }

                return attributes;
            }
        }        

        public Character(int level, BaseAttributes attributes)
        {
            Level = level;
            BaseAttributes = attributes;
            Buffs = new List<Buff>();
        }
    }
}
