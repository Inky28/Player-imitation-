#include "Weapon.h"

Weapon::Weapon(string name, size_t damage)
{
	SetName(name);
	SetDamage(damage);
	bullets = 30;
}

void Weapon::SetDamage(size_t damage)
{
	if (damage <= 100)
		this->damage = damage;
}

void Weapon::SetName(string name)
{
	if (!name.empty())
		this->name = name;
}

size_t Weapon::GetDamage()
{
	return damage;
}

string Weapon::GetName()
{
	return name;
}

void Weapon::Shoot()
{
	if (bullets > 0)
		bullets -= 1;
}

void Weapon::Reload()
{
	bullets += 30;
}