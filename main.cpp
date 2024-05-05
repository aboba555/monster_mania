#include <iostream>
using namespace std;

class Monster{
private:
    int health;
    int basicAttack;
};

class MiniBoss{
private:
    int health;
    int basicAttack;
    int ultimateAttack;
};

class MainBoss{
private:
    int health;
    int basicAttack;
    int ultimateAttack;
};

class MainHero{
private:
    int mana;
    int health;
    int basicAttack;
    int ultimateAttack;
    int balance = 10;


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

    int getBalance() const {
        return balance;
    }

    void setBalance(int balance) {
        MainHero::balance = balance;
    }

public:
    void chooseClass(string classHero){
        if (classHero == "Wizard"){
            setHealth(80);
            setBasicAttack(5);
            setUltimateAttack(20);
            setMana(65);
        }
        if (classHero == "Sworder"){
            setHealth(90);
            setBasicAttack(7);
            setUltimateAttack(26);
            setMana(40);
        }
        if (classHero == "Archer"){
            setHealth(65);
            setBasicAttack(7);
            setUltimateAttack(25);
            setMana(55);

        }
        if (classHero == "Assasin"){
            setHealth(60);
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

void monologue(){
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
            "\nThe decision is yours, hero. Onward: " << endl;
    cin >> heroClass;
    cout << "You choose: " << heroClass << endl;
    mainHero.chooseClass(heroClass);
}
void firstVillage(){
    int option;
    cout << "\nMe: Where am I? This... doesn't look like the place I was before.\n"
            "\n"
            "Local: Welcome to our village, traveler. You seem lost. How did you get here?\n"
            "\n"
            "Me: I... I'm not sure. Everything was so strange. I was just walking through the forest, and suddenly... I ended up here.\n"
            "\n"
            "Local: Odd as it may seem, such things happen in our lands. But don't worry, we can help you here. We can offer you equipment and potions to help you survive in this dangerous world.\n"
            "\n"
            "Me: I'm grateful for the help. But what do I do next?\n"
            "\n"
            "Local: The choice is yours, traveler. If you're ready to continue your journey, you can set off. But be cautious, there are monsters in these lands.\n"
            "\n"
            "Local: Now, choose what you'll do next: 1) CONTINUE or 2) BUY EQUIPMENT or 3) BUY POTION."
            "'\n"
            "Choose your option from 1 to 3." << endl;
    cin >> option;
}

int main() {
    monologue();
    firstVillage();


}