#pragma once

#include <iostream>

using namespace std;

class Player
{
protected:
	string name;
	size_t health;
	size_t damage;

public:
	Player(string name, size_t health, size_t damage);
	void SetHealth(size_t health);
	void SetDamage(size_t damage);
	void SetName(string name);
	size_t GetHealth();
	size_t GetDamage();
	string GetName();
	void Print();
	void Play();
};
