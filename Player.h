#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Card.h"
#include "PokemonCard.h"

class Player {
private:
    std::string playerName;                       // Nom du joueur
    std::vector<Card*> benchCards;               // Cartes en réserve (bench)
    std::vector<PokemonCard*> actionCards;       // Cartes Pokémon actives (action)

public:
    // Constructeur
    Player(const std::string& name);

    // Ajout de cartes à la réserve ou au deck d'action
    void addToBench(Card* card);
    void addToAction(PokemonCard* pokemonCard);

    // Affiche les informations des cartes
    void displayBenchCards() const;
    void displayActionCards() const;

    // Getter pour le nom du joueur
    std::string getPlayerName() const;
};

#endif // PLAYER_H
