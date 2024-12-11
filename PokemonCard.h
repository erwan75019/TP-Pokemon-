#ifndef POKEMONCARD_H
#define POKEMONCARD_H

#include "Card.h"
#include <vector>
#include <tuple>
#include <string>
#include <vector>
#include <tuple>
#include <string>

class PokemonCard : public Card {
private:
    std::string pokemonType;
    std::string familyName;
    int evolutionLevel;
    int maxHP;
    int hp;
    std::vector<std::tuple<int, int, std::string, int>> attacks;

public:
    // Constructeur
    PokemonCard(const std::string& name, const std::string& type, const std::string& family, int evolution, int maxHP, int hp,
                const std::vector<std::tuple<int, int, std::string, int>>& attacks);

    // Surcharge de la fonction displayInfo pour afficher les informations du Pokémon
    void displayInfo() const override;
};

#endif // POKEMONCARD_H
