#include "headers/card.h"
#include "headers/pokemon_card.h"
#include "headers/energy_card.h"
#include "headers/trainer_card.h"
#include "headers/player.h"
#include <iostream>
#include <string>
#include <vector>
#include <tuple>

using namespace std;

int main() {
    Player player1("Hadi");
    player1.addToBench(new EnergyCard("Electric"));
    player1.addToBench(new EnergyCard("Electric"));
    player1.addToBench(new TrainerCard("Ash", "heal all your action pokemon"));

    vector<tuple<int, int, string, int>> pikachuAttacks = {
        make_tuple(2, 2, "thunder bolt", 20),
        make_tuple(3, 2, "thunder storm", 30)
    };
    player1.addToBench(new PokemonCard("Pikachu", "Electric", "Pikachu", 2, 100, 100, pikachuAttacks));
    player1.addToAction(dynamic_cast<PokemonCard*>(player1.getBenchCard(3)));

    cout << endl;
    player1.displayBenchCards();
    cout << endl;
    player1.displayActionCards();

    Player player2("Germain");
    player2.addToBench(new EnergyCard("Grass"));
    player2.addToBench(new TrainerCard("Brock", "heal all your action pokemon"));

    vector<tuple<int, int, string, int>> bulbasaurAttacks = {
        make_tuple(2, 1, "Leech Seed", 15),
        make_tuple(3, 1, "Vine Whip", 25)
    };
    player2.addToBench(new PokemonCard("Bulbasaur", "Grass", "Bulbasaur", 1, 100, 100, bulbasaurAttacks));
    player2.addToAction(dynamic_cast<PokemonCard*>(player2.getBenchCard(2)));

    cout << endl;
    player2.displayBenchCards();
    cout << endl;
    player2.displayActionCards();

    
    cout << "Hadi attacking Germain’s Pokemon Bulbasaur with Pikachu using attack 'thunder bolt'." << endl;
    player1.attack(0, 0, player2, 0);
    cout << endl;
    player2.displayActionCards();

    
    cout << "Germain is using the Trainer Card to heal all active Pokémon." << endl;
    player2.useTrainer(0);
    cout << endl;
    player2.displayActionCards();

    return 0;
}
