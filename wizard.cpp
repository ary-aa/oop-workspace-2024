#include "wizard.h"
#include <iostream>

Wizard::Wizard(std::string name, int health, int damage, int mana)
    : Player(name, health, damage), mana(mana) {}

void Wizard::castSpell(Player* opponent) {
    int spellDamage = mana;
    opponent->takeDamage(spellDamage);
    std::cout << getName() << " casts a spell on " << opponent->getName() << " for " << spellDamage << " damage.\n";
}

int Wizard::getMana() const {
    return mana;
}

void Wizard::setMana(int mana) {
    this->mana = mana;
}
