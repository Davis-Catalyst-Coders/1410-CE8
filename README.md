# ⚡ Pokémon Card Collector
**Unit 8: Power-ups & Pick-ups • Coding Exercise**

⏱️ Est. Time: 3-5 Hours | 📊 Points: 20 Total

---

## 🎯 Objective

Build a Pokémon Card Collector system! You will create **scoped enumerations** for card types and rarity, a **struct** for Pokémon stats, and **two classes** — one for individual cards and one for managing a card binder. This exercise practices using enums and structs as data members of a class.

## 📜 The Story

You're a Pokémon card collector building your ultimate binder! Each card has a type, rarity, stats, and a power score. Organize your collection, find your strongest card, and filter by type to see which element dominates your binder. Gotta collect 'em all!

---

## ⚠️ Requirements

- You **MUST** use `enum class` (scoped enums) for PokemonType and Rarity
- You **MUST** define a `struct` for PokemonStats
- You **MUST** use the struct as a **data member** inside the PokemonCard class
- You **MUST** build two classes: `PokemonCard` and `CardBinder`
- You **MUST** follow the UML diagram exactly
- **No `cout` inside classes** — all display functions return strings
- Separate `.hpp` and `.cpp` files for each class

---

## 📁 Files

| File | Status | Description |
|------|--------|-------------|
| `Enums.hpp` | 📝 Outline provided | Define your enum classes here; helper function signatures provided |
| `PokemonStats.hpp` | 📝 Outline provided | Define your struct here |
| `PokemonCard.hpp` | ✅ Fully provided | **Do not modify** |
| `PokemonCard.cpp` | ❌ You write this | Implement all PokemonCard functions |
| `CardBinder.hpp` | ✅ Fully provided | **Do not modify** |
| `CardBinder.cpp` | ❌ You write this | Implement all CardBinder functions |
| `main.cpp` | ✅ Provided with test scaffolding | Add your tests here |

> ⚠️ **Do NOT modify the fully provided header files!** Your `.cpp` files must implement exactly what the headers declare.

---

## 📋 Instructions

### Part 1: Enumerations ⚡

Define two **scoped enumerations** using `enum class` in `Enums.hpp`:

**PokemonType:** Fire, Water, Grass, Electric, Psychic, Normal, Fighting, Dragon

**Rarity:** Common, Uncommon, Rare, UltraRare

Implement the two **helper functions** (signatures already provided):
- `typeToString(PokemonType)` — returns the string version of the type
- `rarityToString(Rarity)` — returns the string version of the rarity

Use a `switch` statement for each. Since these are short one-line returns, they can stay in the `.hpp` file.

### Part 2: PokemonStats Struct 📊

Define a **struct** called `PokemonStats` in `PokemonStats.hpp` with three public integer members:

| Member | Description |
|--------|-------------|
| `attack` | The card's attack power |
| `defense` | The card's defense power |
| `speed` | The card's speed stat |

No constructor required — use brace initialization: `PokemonStats{80, 65, 120}`

### Part 3: PokemonCard Class 🃏

Implement the `PokemonCard` class in `PokemonCard.cpp`. See `PokemonCard.hpp` for all declarations.

**Private Member Variables:** name (string), hp (int), type (PokemonType), rarity (Rarity), stats (PokemonStats)

**Constructor:** Takes all five member variables as parameters. Must use a **constructor initialization list**.

**Public Member Functions:**

| Function | Description |
|----------|-------------|
| `getName()` | Returns the Pokémon's name |
| `getType()` | Returns the Pokémon's type enum value |
| `getCardInfo()` | Returns a formatted string with all card data (see example output). Must use `typeToString()` and `rarityToString()`. No cout! |
| `getPowerScore()` | Returns the sum of attack + defense + speed |

### Part 4: CardBinder Class 📒

Implement the `CardBinder` class in `CardBinder.cpp`. See `CardBinder.hpp` for all declarations.

**Private Member Variables:** cards (vector\<PokemonCard\>), binderName (string)

**Constructor:** Takes binderName as a parameter. Cards vector starts empty.

**Public Member Functions:**

| Function | Description |
|----------|-------------|
| `addCard(card)` | Adds a PokemonCard to the binder |
| `getCardCount()` | Returns the number of cards in the binder |
| `getBinderInfo()` | Returns binder name, card count, and each card's info on a new line. Calls `getCardInfo()` on each card. If empty, returns just the binder name and "0 cards". |
| `getMostPowerful()` | Returns the `getCardInfo()` of the card with the highest power score. If empty, returns "Binder is empty!" |
| `getCardsByType(type)` | Returns the `getCardInfo()` of every card matching the type, separated by newlines. If no matches, returns "No cards of that type!" |

---

## 💻 Example Test Output

```
=== Pokemon Card Collector ===

--- Binder Info ---
Ash's Binder | 5 cards
Charizard | HP: 120 | Type: Fire | Rarity: Rare | ATK: 80 | DEF: 65 | SPD: 100 | Power: 245
Pikachu | HP: 60 | Type: Electric | Rarity: Common | ATK: 55 | DEF: 40 | SPD: 90 | Power: 185
Bulbasaur | HP: 65 | Type: Grass | Rarity: Common | ATK: 49 | DEF: 49 | SPD: 45 | Power: 143
Mewtwo | HP: 150 | Type: Psychic | Rarity: UltraRare | ATK: 110 | DEF: 90 | SPD: 130 | Power: 330
Machamp | HP: 90 | Type: Fighting | Rarity: Uncommon | ATK: 95 | DEF: 70 | SPD: 55 | Power: 220

--- Most Powerful Card ---
Mewtwo | HP: 150 | Type: Psychic | Rarity: UltraRare | ATK: 110 | DEF: 90 | SPD: 130 | Power: 330

--- Fire Type Cards ---
Charizard | HP: 120 | Type: Fire | Rarity: Rare | ATK: 80 | DEF: 65 | SPD: 100 | Power: 245

--- Water Type Cards ---
No cards of that type!
```

Your test output may look different, but make sure you are testing **all** functions in main!

---

## 📊 Grading Rubric (20 Points)

### 🤖 Auto-Graded (14 points)

| Criteria | Points |
|----------|--------|
| **Enums & Helpers** — Scoped enum classes defined correctly; helper functions return correct strings | 2 |
| **PokemonStats Struct** — Struct defined with correct public members; brace initialization works | 1 |
| **PokemonCard Constructor & Getters** — Constructor initializes all members; getName() and getType() work | 2 |
| **PokemonCard getCardInfo()** — Returns correctly formatted string with all card data | 2 |
| **PokemonCard getPowerScore()** — Correctly returns sum of attack + defense + speed | 1 |
| **CardBinder Basics** — Constructor, addCard(), getCardCount(), and getBinderInfo() work correctly | 2 |
| **CardBinder getMostPowerful()** — Returns correct card info; handles empty binder | 2 |
| **CardBinder getCardsByType()** — Filters correctly by type; handles no matches | 2 |

### 👩🏻‍💻 Manual Review (6 points)

| Criteria | Points |
|----------|--------|
| **Scoped Enum Usage** — Uses `enum class` (not plain `enum`) for both PokemonType and Rarity | 2 |
| **Code Documentation & Style** — Meaningful comments, good indentation, camelCase naming, no magic numbers, no globals, no cout in classes, proper file separation, lowest access level used | 2 |
| **Testing in Main** — Evidence of thorough self-testing in main.cpp with clean, well-formatted output | 2 |
