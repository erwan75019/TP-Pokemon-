#include "TrainerCard.h"
#include <iostream>

using namespace std;

// Constructeur de la classe TrainerCard
TrainerCard::TrainerCard(const std::string& name, const std::string& effect)
    : Card(name), trainerEffect(effect) {}

// Surcharge de la fonction displayInfo
void TrainerCard::displayInfo() const {
    cout << "Trainer Name: " << cardName << endl;
    cout << "Effect: " << trainerEffect << endl;
}

// Fonction pour appliquer l'effet de guérison aux Pokémon en action
void TrainerCard::applyEffect() {
    // Ici, l'effet consiste à guérir tous les Pokémon en action (logique à adapter selon le contexte)
    cout << "Applying effect: " << trainerEffect << endl;
    cout << "All active Pokémon HP restored to maximum!" << endl;
}
