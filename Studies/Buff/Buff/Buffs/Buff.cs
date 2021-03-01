using BuffPattern.Attributeses;

namespace BuffPattern.Buffs
{
    public abstract class Buff
    {
        public abstract void Applies(Attributes attributes, IAttributes baseAttributes);
    }
}
