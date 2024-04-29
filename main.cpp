#include <iostream>
using namespace std;

class Monster{

};

class MiniBoss{

};

class MainBoss{

};

class MainHero{
private:
    int mana;
    int health;
    int basicAttack;
    int ultimateAttack;




public:
    int getMana() const {
        return mana;
    }

    void setMana(int mana) {
        MainHero::mana = mana;
    }

    int getHealth() const {
        return health;
    }

    void setHealth(int health) {
        MainHero::health = health;
    }

    int getBasicAttack() const {
        return basicAttack;
    }

    void setBasicAttack(int basicAttack) {
        MainHero::basicAttack = basicAttack;
    }

    int getUltimateAttack() const {
        return ultimateAttack;
    }

    void setUltimateAttack(int ultimateAttack) {
        MainHero::ultimateAttack = ultimateAttack;
    }

public:
    void chooseClass(string classHero){
        if (classHero == "Wizard"){
            setBasicAttack(5);
            setUltimateAttack(20);
            setMana(65);
        }
        if (classHero == "Sworder"){
            setBasicAttack(7);
            setUltimateAttack(26);
            setMana(40);
        }
        if (classHero == "Archer"){
            setBasicAttack(7);
            setUltimateAttack(25);
            setMana(55);

        }
        if (classHero == "Assasin"){
            setBasicAttack(8);
            setUltimateAttack(15);
            setMana(60);
        }
    }
};
MainHero mainHero;
Monster monster;
MiniBoss miniBoss;
MainBoss mainBoss;
int main() {
    string heroClass;
    cout << "Welcome to the world of Monster Mania, "
            "\nwhere adventures await you at every turn! "
            "\nBefore stepping into battle, you must make an important choice and choose your path. "
            "\n-------------------------------------------------------------------------"
            "\n1) Will you be a sharpshooting archer, dealing deadly blows from afar? "
            "\n2) Or perhaps you prefer close combat as a master swordsman? "
            "\n3) Maybe you'll choose the path of a wizard, wielding powerful magic? "
            "\n4) Or perhaps you'll opt for stealthy, lethal attacks as an assassin? "
            "\n-------------------------------------------------------------------------"
            "\nThe decision is yours, hero. Onward,"
    ;
    cin >> heroClass;
    mainHero.chooseClass(heroClass);

}