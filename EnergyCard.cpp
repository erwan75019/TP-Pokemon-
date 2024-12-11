#include "EnergyCard.h"
#include <iostream>

using namespace std;

// Constructeur de la classe EnergyCard
EnergyCard::EnergyCard(const std::string& type) : Card("Energy"), energyType(type) {}

// Surcharge de la fonction displayInfo
void EnergyCard::displayInfo() const {
    cout << "Card Name: " << cardName << endl;
    cout << "Energy Type: " << energyType << endl;
}

