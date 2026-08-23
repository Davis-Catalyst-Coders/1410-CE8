#pragma once
#include <string>
#include "Enums.hpp"
#include "PokemonStats.hpp"

class PokemonCard {
    private:
        std::string name;
        int hp;
        PokemonType type;
        Rarity rarity;
        PokemonStats stats;

    public:
        // Constructor: initializes all member variables
        // Must use a constructor initialization list
        PokemonCard(std::string name, int hp, PokemonType type, Rarity rarity, PokemonStats stats);

        // Returns the Pokemon's name
        std::string getName();

        // Returns the Pokemon's type enum value
        PokemonType getType();

        // Returns a formatted string with the card's name, HP, type, rarity, stats, and power score
        // Must use typeToString() and rarityToString() helper functions
        // Do NOT use cout inside this function!
        std::string getCardInfo();

        // Returns the sum of attack + defense + speed
        int getPowerScore();
};
