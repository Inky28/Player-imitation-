/*
Створити базовий клас для персонажів деякої гри  Player(Character).
У базового персонажу  є рівень життя(hp),   сила удару(dmg), ім"я(name).
Визначити методу  доступу до полів, конструтор(и), метод виведення print().
Метод void play():  виводить повідомлення, що персонаж  бере участь у грі

Створити клас Воїн(Warrior),  успадкований   від  класу  Персонаж.
Воїн має декілька видів зброї(хоча б одну)    vector<Weapon> weapons

Додатково описати тип Зброя(Weapon) для зберігання назви зброї та кількості одиниць.
*Можна визначити метод заряджання зброї.
Визначити метод shoot() , при якому витрачаються патрони
Для воїна метод play() витрачає патрони певного виду зброї

Створити клас Mаг(Mage),  успадкований   від  класу  Персонаж.
Маг має поле з значенням ресурсу(mana), який витрачається під час гри.
Для воїна метод play() витрачає ресурси мага.

*По бажанню визначити декілька класів магів, успадкованих від Мага(вогняний FiredMage, водяний RainMage, заморожуючий FrostMage).

У main() : протестувати визначені класи, створити декілька персонажів, повикликати методи play(), print().
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
