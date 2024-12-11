#ifndef CARD_H
#define CARD_H

#include <string>
#include <vector>
#include <tuple>
#include <string>
#include <vector>
#include <tuple>

// Classe de base Card
class Card {
protected:
    std::string cardName;

public:
    Card(const std::string& name);
    virtual ~Card();

    // Fonction virtuelle pure pour afficher les informations de la carte
    virtual void displayInfo() const = 0;
};

#endif // CARD_H
