#include <iostream>
#include "Enums.hpp"
#include "PokemonStats.hpp"
#include "PokemonCard.hpp"
#include "CardBinder.hpp"

int main() {
    std::cout << "=== Pokemon Card Collector ===" << std::endl;

    // ===================================================
    // Create your PokemonCard objects here
    // Example: PokemonCard charizard("Charizard", 120, PokemonType::Fire, Rarity::Rare, PokemonStats{80, 65, 100});
    // ===================================================


    // ===================================================
    // Create your CardBinder and add cards
    // ===================================================


    std::cout << std::endl;
    std::cout << "--- Binder Info ---" << std::endl;
    /* Test getBinderInfo() here */


    std::cout << std::endl;
    std::cout << "--- Most Powerful Card ---" << std::endl;
    /* Test getMostPowerful() here */


    std::cout << std::endl;
    std::cout << "--- Filter by Type ---" << std::endl;
    /* Test getCardsByType() here - try a type that has cards AND a type that doesn't */


    std::cout << std::endl;
    std::cout << "--- Individual Card Tests ---" << std::endl;
    /* Test getName(), getType(), getCardInfo(), getPowerScore() here */


    std::cout << std::endl;
    std::cout << "--- Enum Helper Tests ---" << std::endl;
    /* Test typeToString() and rarityToString() here */


    std::cout << std::endl;
    std::cout << "--- Edge Cases ---" << std::endl;
    /* Test edge cases here: empty binder, type with no matches, etc. */


    return 0;
}
