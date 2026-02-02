#include <iostream>
#include "HealthSys.hpp"

HealthSys::HealthSys()
{
    _maxHealth = 100.0;
    _currentHealth = _maxHealth;
}

HealthSys::HealthSys(double amount)
{
    _maxHealth = amount;
    _currentHealth = _maxHealth;
}

const double HealthSys::GetCurrentHealth() { return _currentHealth; } 