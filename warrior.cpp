#include "warrior.h"
#include <iostream>

Warrior::Warrior(std::string name, int health, int damage, std::string weapon)
    : Player(name, health, damage), weapon(weapon) {}

void Warrior::swingWeapon(Player* opponent) {
    int weaponDamage = getDamage(); // Warrior's damage is equivalent to weapon damage
    opponent->takeDamage(weaponDamage);
    std::cout << getName() << " swings their " << weapon << " at " << opponent->getName() << "!\n";
}

std::string Warrior::getWeapon() const {
    return weapon;
}

void Warrior::setWeapon(std::string weapon) {
    this->weapon = weapon;
}
