#include <iostream>
using namespace std;
class MainHero{

private:
    int damage;
    int health;
    int mana;
public:
    int getDamage() const {
        return damage;
    }

    void setDamage(int damage) {
        MainHero::damage = damage;
    }

    int getHealth() const {
        return health;
    }

    void setHealth(int health) {
        MainHero::health = health;
    }

    int getMana() const {
        return mana;
    }

    void setMana(int mana) {
        MainHero::mana = mana;
    }

};
class Monster{
private:
    int damage;
    int health;
    int money;

public:
    int getDamage() const {
        return damage;
    }

    void setDamage(int damage) {
        Monster::damage = damage;
    }

    int getHealth() const {
        return health;
    }

    void setHealth(int health) {
        Monster::health = health;
    }

    int getMoney() const {
        return money;
    }

    void setMoney(int money) {
        Monster::money = money;
    }


};
class MiniBoss: public Monster{

};
class MainBoss: public Monster{

};
int main() {
    MainHero mainHero;
    Monster monster;
    MiniBoss miniBoss;
    MainBoss mainBoss;

}