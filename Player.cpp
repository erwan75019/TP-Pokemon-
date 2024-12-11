#include "Player.h"
#include <iostream>

using namespace std;

// Constructeur
Player::Player(const std::string& name) : playerName(name) {}

// Ajoute une carte à la réserve (benchCards)
void Player::addToBench(Card* card) {
    benchCards.push_back(card);
}

// Ajoute une carte Pokémon au deck d'action (actionCards)
void Player::addToAction(PokemonCard* pokemonCard) {
    actionCards.push_back(pokemonCard);
}

// Affiche les informations des cartes en réserve
void Player::displayBenchCards() const {
    cout << "Bench Cards for Player: " << playerName << endl;
    for (size_t i = 0; i < benchCards.size(); ++i) {
        cout << "  Card " << i + 1 << ": ";
        benchCards[i]->displayInfo();
    }
}

// Affiche les informations des cartes Pokémon actives
void Player::displayActionCards() const {
    cout << "Action Cards for Player: " << playerName << endl;
    for (size_t i = 0; i < actionCards.size(); ++i) {
        cout << "  Pokemon " << i + 1 << ": ";
        actionCards[i]->displayInfo();
    }
}

// Retourne le nom du joueur
std::string Player::getPlayerName() const {
    return playerName;
}
