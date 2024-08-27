#include "wizard.h"
#include "warrior.h"
#include <iostream>

int main() {
    Wizard wizard("Gale", 100, 20, 50);
    Warrior warrior("Lae'zel", 120, 30, "sword");

    while (wizard.getHealth() > 0 && warrior.getHealth() > 0) {
        // Wizard attacks
        wizard.castSpell(&warrior);
        if (warrior.getHealth() <= 0) {
            std::cout << "Gale wins!\n";
            break;
        }

        // Warrior attacks
        warrior.swingWeapon(&wizard);
        if (wizard.getHealth() <= 0) {
            std::cout << "Lae'zel wins!\n";
            break;
        }
    }

    return 0;
}
