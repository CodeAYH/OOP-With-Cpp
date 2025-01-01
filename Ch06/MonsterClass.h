#include <iostream>
using namespace std;

class Character
{
public:
    Character() : hp(100), power(100) {};

protected:
    int hp;
    int power;
};

class Player : public Character
{
public:
    Player() {};
};

class Monster
{
public:
    Monster() {};
    void GetDamager(int damage) {};
    void Attack(Player targetPlayer) {};
    void AttackSpecial(Player targetPlayer) {};
};

class MonsterA : public Monster, Character
{
public:
    void AttackSpecial(Player targetPlayer);
};