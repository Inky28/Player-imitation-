#pragma once

#include <iostream>

using namespace std;

class Weapon
{
private:
	string name;
	size_t damage;
	size_t bullets;

public:
	Weapon(string name, size_t damage);
	void SetDamage(size_t damage);
	void SetName(string name);
	size_t GetDamage();
	string GetName();
	void Shoot();
	void Reload();
};