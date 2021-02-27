namespace Bridge.Characters
{
    public class Orc : Character
    {
        public Orc(int id, string name, int initHealth, int initMana) : base(id, name, initHealth, initMana)
        {

        }

        public override void TakeDamage(int value)
        {
            value -= 3;
            if (value <= 0) value = 0;

            base.TakeDamage(value);
        }
    }
}
