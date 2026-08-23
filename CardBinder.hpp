#pragma once
#include <string>
#include <vector>
#include "PokemonCard.hpp"

class CardBinder {
    private:
        std::vector<PokemonCard> cards;
        std::string binderName;

    public:
        // Constructor: takes binder name, cards vector starts empty
        CardBinder(std::string binderName);

        // Adds a PokemonCard to the binder
        void addCard(PokemonCard card);

        // Returns the number of cards in the binder
        int getCardCount();

        // Returns binder name, card count, and each card's info on a new line
        // Calls getCardInfo() on each card
        // If empty, returns just the binder name and "0 cards"
        std::string getBinderInfo();

        // Returns the getCardInfo() of the card with the highest power score
        // If the binder is empty, returns "Binder is empty!"
        std::string getMostPowerful();

        // Returns the getCardInfo() of every card matching the given type,
        // each separated by a newline
        // If no cards match, returns "No cards of that type!"
        std::string getCardsByType(PokemonType type);
};
