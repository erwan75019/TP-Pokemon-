#ifndef TRAINERCARD_H
#define TRAINERCARD_H

#include "Card.h"
#include <string>

class TrainerCard : public Card {
private:
    std::string trainerEffect;

public:
    // Constructeur, avec le nom du trainer passé en argument et un effet par défaut
    TrainerCard(const std::string& name, const std::string& effect = "heal all your action pokemon");

    // Surcharge de la fonction displayInfo pour afficher les informations de la carte d'entraîneur
    void displayInfo() const override;

    // Méthode pour appliquer l'effet d'entraînement (à implémenter selon la logique du jeu)
    void applyEffect();
};

#endif // TRAINERCARD_H
