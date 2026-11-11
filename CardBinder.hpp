#pragma once
#include <string>
#include <vector>
#include "PokemonCard.hpp"

class CardBinder {
    private:
        /* TO DO: the vector of cards (exact name) */

    public:
        void addCard(const PokemonCard& card);
        PokemonCard getMostPowerful() const;
        std::string getCardsByType(PokemonType type) const;
};
