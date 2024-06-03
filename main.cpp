#include <iostream>
#include <unistd.h>
using namespace std;

class Monster{
private:
    int health = 20;
    int basicAttack = 5;

public:
    int getHealth() const {
        return health;
    }

    void setHealth(int health) {
        Monster::health = health;
    }

    int getBasicAttack() const {
        return basicAttack;
    }

    void setBasicAttack(int basicAttack) {
        Monster::basicAttack = basicAttack;
    }
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
            setMana(50);
        }
        if (classHero == "Sworder"){
            setHealth(90);
            setBasicAttack(7);
            setUltimateAttack(26);
            setMana(50);
        }
        if (classHero == "Archer"){
            setHealth(65);
            setBasicAttack(7);
            setUltimateAttack(25);
            setMana(50);

        }
        if (classHero == "Assasin"){
            setHealth(60);
            setBasicAttack(8);
            setUltimateAttack(15);
            setMana(50);
        }
    }
};
MainHero mainHero;
Monster monster;
MiniBoss miniBoss;
MainBoss mainBoss;

void firstAttack(){
    cout << "Warrior, we continue on our way, we may meet a monster on the way";
    // random if

}

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


    void shopMainMenu(){
        cout << "Welcome to my tavern, brave warrior. What can I offer you today?" << endl;
        sleep(3);
        cout << "1) Browse our selection of fine swords." << endl;
        sleep(3);
        cout << "2) Explore our array of exquisite armor." << endl;
        sleep(3);
        cout << "3) Replenish your health and mana." << endl;
        sleep(3);
        cout << "Choose your option from 1 to 3." << endl;
    }


    void shopChoice(){
        int option;

        cin >> option;

        if (option == 1){

        }
        if (option == 2){
            int choice;
            cout << "Choose your blade wisely: " << endl;
            cout << "1) Blade: +5 damage - Cost: 15 gold" << endl;
            cout << "2) Blade: +10 damage - Cost: 25 gold" << endl;
            cout << "3) Blade: +15 damage - Cost: 45 gold" << endl;
            cout << "4) Blade: +20 damage - Cost: 55 gold" << endl;
            cout << "5) Select your weapon in range 1-4" << endl;
            cin >> choice;
            if (choice == 1){

            }

        }
        if (option == 3) {
            int choice;
            cout << "Of course, to restore health and mana, you'll need to pay 5 gold coins." << endl;
            cout << "1) Buy \n"
                    "2) Back to the shop";
            cout << "Choose your option from 1 to 2." << endl;
            cin >> choice;
            if (choice == 1) {
                if (mainHero.getBalance() - 5 < 0) {
                    cout << "You dont have enough gold coins" << endl;
                    shopMainMenu();
                } else{
                    mainHero.setBalance(mainHero.getBalance()-5);
                    cout << "You have successfully restored 10 health points and fully replenished your mana." << endl;
                    mainHero.setMana(50);
                    mainHero.setHealth(mainHero.getHealth()+10);
                    shopMainMenu();
                }
            } else{
                shopMainMenu();
            }
        }
    }

void firstVillage(){
    int option;
    cout << endl << "Me: Where am I? This... doesn't look like the place I was before." << endl << endl;
    sleep(3);
    cout << "Local: Welcome to our village, traveler. You seem lost. How did you get here?" << endl << endl;
    sleep(3);
    cout << "Me: I... I'm not sure. Everything was so strange. I was just walking through the forest, and suddenly... I ended up here."<< endl << endl;
    sleep(3);
    cout << "Local: Odd as it may seem, such things happen in our lands. But don't worry, we can help you here. We can offer you equipment and potions to help you survive in this dangerous world."<< endl << endl;
    sleep(3);
    cout << "Me: I'm grateful for the help. But what do I do next?" << endl << endl;
    sleep(3);
    cout << "Local: The choice is yours, traveler. If you're ready to continue your journey, you can set off. But be cautious, there are monsters in these lands." << endl << endl;
    sleep(3);
    cout << "Local: Now, choose what you'll do next: 1) CONTINUE or 2) BUY EQUIPMENT or 3) BUY POTION." << endl << endl;
    sleep(3);
    cout << "Your balance is " << mainHero.getBalance() << " coins" <<  endl;
    sleep(3);
    cout << "Choose your option from 1 to 3." << endl;
    cin >> option;
    if (option == 1){


    }
    if (option == 2){
        shopChoice();
        shopMainMenu();
    }
    if (option == 3){
        shopChoice();
        shopMainMenu();


    }
}

int main() {
    monologue();
    firstVillage();


}