#ifndef ENERGYCARD_H
#define ENERGYCARD_H

#include "Card.h"
#include <string>

class EnergyCard : public Card {
private:
    std::string energyType;

public:
    // Constructeur, avec le nom de la carte défini par défaut à "Energy"
    EnergyCard(const std::string& type);

    // Surcharge de la fonction displayInfo pour afficher les informations de la carte énergie
    void displayInfo() const override;
};

#endif // ENERGYCARD_H
