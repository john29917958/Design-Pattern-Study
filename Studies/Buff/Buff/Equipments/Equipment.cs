namespace BuffPattern.Equipments
{
    public abstract class Equipment
    {
        public string Name { get; protected set; }
        public int Level { get; protected set; }
        public int Loading { get; protected set; }
        public int Endurance { get; protected set; }

        protected Equipment(string name, int level, int loading, int endurance)
        {
            Name = name;
            Level = level;
            Loading = loading;
            Endurance = endurance;
        }
    }
}
