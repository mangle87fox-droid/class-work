#include <iostream>
void takeDamage(int* hp, int damage)
{
    if (hp == nullptr) return;
    *hp -= damage;
    if (*hp < 0) *hp = 0;
}
void heal(int* hp, int amount) {
    if (hp == nullptr) return;
    *hp += amount;
    if (*hp > 100) *hp = 100;
}
void printHp(const int* hp) {
    if (hp == nullptr) return;
    std::cout << "hp: " << *hp << std::endl;
}
bool isAlive(const int* hp) {
    if (hp == nullptr) return false;
    return *hp >= 0;
}
int main() {
    int hp = 100;
    std::cout << "igrok v podzemke\n";
    printHp(&hp);
    std::cout << "lovushka 20 dmg\n";
    takeDamage(&hp, 20);
    printHp(&hp);
    std::cout << "goblin pizdanul na -35 dmg\n";
    takeDamage(&hp, 35);
    printHp(&hp);
    std::cout << "vodichka +25\n";
    heal(&hp, 25);
    printHp(&hp);
    std::cout << "goblin pizdanul na -80\n";
    takeDamage(&hp, 80);
    printHp(&hp);
    if (!isAlive(&hp)) {
        std::cout << "ti umer :(";
    }
    else {
        std::cout << "molodets, jivoy";
    }
    return 0;
}