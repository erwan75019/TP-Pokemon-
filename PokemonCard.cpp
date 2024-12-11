#include "PokemonCard.h"
#include <iostream>
#include "PokemonCard.h"
#include <iostream>
using namespace std;

// Constructeur de la classe PokemonCard
PokemonCard::PokemonCard(const std::string& name, const std::string& type, const std::string& family, int evolution, int maxHP, int hp,
                         const std::vector<std::tuple<int, int, std::string, int>>& attacks)
    : Card(name), pokemonType(type), familyName(family), evolutionLevel(evolution), maxHP(maxHP), hp(hp), attacks(attacks) {}

// Surcharge de la fonction displayInfo
void PokemonCard::displayInfo() const {
    cout << "Pokemon Name: " << cardName << endl;
    cout << "Type: " << pokemonType << endl;
    cout << "Family Name: " << familyName << endl;
    cout << "Evolution Level: " << evolutionLevel << endl;
    cout << "Max HP: " << maxHP << endl;
    cout << "Current HP: " << hp << endl;

    cout << "Attacks:" << endl;
    for (size_t i = 0; i < attacks.size(); ++i) {
        int energyCost, currentEnergyCost, damage;
        string description;

        // Extraction des éléments du tuple
        tie(energyCost, currentEnergyCost, description, damage) = attacks[i];

        cout << "  Attack " << i + 1 << ":" << endl;
        cout << "    Energy Cost: " << energyCost << endl;
        cout << "    Current Energy Cost: " << currentEnergyCost << endl;
        cout << "    Description: " << description << endl;
        cout << "    Damage: " << damage << endl;
    }
}
