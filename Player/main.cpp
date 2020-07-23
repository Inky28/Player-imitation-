/*
�������� ������� ���� ��� ��������� ����� ���  Player(Character).
� �������� ���������  � ����� �����(hp),   ���� �����(dmg), ��"�(name).
��������� ������  ������� �� ����, ����������(�), ����� ��������� print().
����� void play():  �������� �����������, �� ��������  ���� ������ � ��

�������� ���� ���(Warrior),  ������������   ��  �����  ��������.
��� �� ������� ���� ����(���� � ����)    vector<Weapon> weapons

��������� ������� ��� �����(Weapon) ��� ��������� ����� ���� �� ������� �������.
*����� ��������� ����� ���������� ����.
��������� ����� shoot() , ��� ����� ������������ �������
��� ���� ����� play() ������� ������� ������� ���� ����

�������� ���� M��(Mage),  ������������   ��  �����  ��������.
��� �� ���� � ��������� �������(mana), ���� ����������� �� ��� ���.
��� ���� ����� play() ������� ������� ����.

*�� ������� ��������� ������� ����� ����, ������������ �� ����(�������� FiredMage, ������� RainMage, ������������ FrostMage).

� main() : ������������ �������� �����, �������� ������� ���������, ����������� ������ play(), print().
*/

#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include "Weapon.h"

using namespace std;

class Warrior : Player
{
private:
	vector<Weapon> weapons;

public:
	Warrior(string name, size_t health, size_t damage, Weapon weapon) : Player(name, health, damage)
	{
		AddWeapon(weapon);
	}

	void AddWeapon(Weapon weapon)
	{
		weapons.push_back(weapon);
	}

	void Play()
	{
		for (size_t i = 0; i < 30; i++)
			weapons[0].Shoot();

		weapons[0].Reload();
	}
};

class Mage : Player
{
private:
	size_t mana;
public:
	Mage(string name, size_t health, size_t damage, size_t mana) : Player(name, health, damage)
	{
		SetMana(mana);
	}

	void SetMana(size_t mana)
	{
		if (mana <= 100)
			this->mana = mana;
	}

	size_t GetMana()
	{
		return mana;
	}

	void Play()
	{
		for (size_t i = 0; i < 30; i++)
			mana -= 1;

	}
};

int main()
{
	// GAME/PLAYER/MAGE/Player

	Player player1("name1", 100, 20);
	player1.Print();

	return 0;
}
