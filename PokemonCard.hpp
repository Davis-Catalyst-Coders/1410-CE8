#pragma once
#include <string>
#include "Enums.hpp"
#include "PokemonStats.hpp"

class PokemonCard {
    private:
        /* TO DO: the five private variables (exact names) */

    public:
        PokemonCard(const std::string& name, int hp, PokemonType type, Rarity rarity, PokemonStats stats);
        PokemonType getType() const;
        int getPowerScore() const;
        std::string getCardInfo() const;
};
