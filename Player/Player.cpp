#include "Player.h"

Player::Player(string name, size_t health, size_t damage)
{
	SetName(name);
	SetHealth(health);
	SetDamage(damage);
}

void Player::SetHealth(size_t health)
{
	if (health <= 100)
		this->health = health;
}

void Player::SetDamage(size_t damage)
{
	if (damage <= 100)
		this->damage = damage;
}

void Player::SetName(string name)
{
	if (!name.empty())
		this->name = name;
}

size_t Player::GetHealth()
{
	return health;
}

size_t Player::GetDamage()
{
	return damage;
}

string Player::GetName()
{
	return name;
}

void Player::Print()
{
	cout << "Name: " << GetName() << ": ";

	cout << GetHealth() << " HP, ";
	cout << GetDamage() << " DMG\n";
}

void Player::Play()
{
	cout << GetName() << " is playing...\n";
}