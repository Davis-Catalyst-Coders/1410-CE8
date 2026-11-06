# ⚔️ CE8: Pokémon Card Collection

Unit 8: Loot Drops. Build a card binder with two scoped enums, a struct, a small namespace of your own, and two classes. **Instructions are on the Canvas assignment page.**

## 📁 Files

| File | What is in it | What you do |
|---|---|---|
| `Enums.hpp` | `#pragma once` | Write the two scoped enums where the `TO DO`s are |
| `PokemonStats.hpp` | `#pragma once` | Write the struct where the `TO DO` is |
| `Pokedex.hpp` | `#include`s | Write the namespace and its two declarations where the `TO DO` is |
| `Pokedex.cpp` | Empty | Define both `Pokedex` functions here |
| `PokemonCard.hpp` | Public function declarations | Add the 5 private variables where the `TO DO` is |
| `PokemonCard.cpp` | Empty | Define every function of **5 or more lines** here. Shorter ones may stay in the `.hpp` |
| `CardBinder.hpp` | Public function declarations | Add the private vector where the `TO DO` is |
| `CardBinder.cpp` | Empty | Define every function of **5 or more lines** here. Shorter ones may stay in the `.hpp` |
| `main.cpp` | A `main` with a header for each test | Create cards and a binder, then call every function under its header |

- **Do not rename** the files, the classes, or any declared function. The autograder calls them by name.
- Names you add (enums, values, struct members, variables) must match the **Program Design** tab **exactly**, case included.
- **`Pokedex` functions are defined in `Pokedex.cpp`, never in the `.hpp`.**
- **No `std::cout` or `std::cin`** inside a class or the namespace. `main` does the printing.
- **No user input.**

## 🖥️ Compile and Run

```
g++ -o test *.cpp
./test
```

**Compile again after every change.** `./test` runs the last version you compiled.

## 💾 Commit and Sync

Not committed and synced = **not saved**, and not graded.

```
git add .
git commit -m "Describe what you changed"
git push
```

Or use the **Source Control** panel: type a message, **Commit**, then **Sync Changes**.

Commit at the **end of every work session** and before you submit. Commit history is checked for original work.
