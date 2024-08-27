#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name;
    int health;
    int damage;

public:
    Player(std::string name, int health, int damage);
    void attack(Player* opponent, int damage);
    void takeDamage(int damage);
    std::string getName() const;
    int getHealth() const;
    void setHealth(int health);
    int getDamage() const;
    void setDamage(int damage);
};

#endif // PLAYER_H
