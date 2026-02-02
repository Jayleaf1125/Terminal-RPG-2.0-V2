class HealthSys
{
    private:
        double _currentHealth;
        double _maxHealth;
    public:
        HealthSys();
        HealthSys(double health);
        const double GetCurrentHealth();
        void ReceiveDamage(double amount);
        void ReceiveHealing(double amount);
};