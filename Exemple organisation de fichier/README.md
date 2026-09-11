# Exemple d'organisation de fichiers en C++

Ce dossier est un support de cours. Les fichiers sont **fictifs** (le code
à l'intérieur ne fait rien d'utile, il n'y a pas de vraie logique de jeu) :
le but n'est pas de faire fonctionner un programme, mais de montrer **comment
organiser les fichiers** d'un projet C++ orienté objet, une fois qu'on va
au-delà d'un simple `main.cpp` tout seul.


## Arborescence

```text
Exemple organisation de fichier/
├── include/          <- déclarations des classes (fichiers .hpp)
│   ├── Grille.hpp
│   └── Jeu.hpp
├── src/               <- implémentations des classes + point d'entrée (fichiers .cpp)
│   ├── Grille.cpp
│   ├── Jeu.cpp
│   └── main.cpp
├── Makefile           <- explique comment compiler le projet
└── README.md          <- ce fichier
```

## Pourquoi séparer les fichiers ainsi ?

### Rappel : `.hpp` = déclaration, `.cpp` = implémentation

Chaque classe est écrite en **deux fichiers** :

| Fichier | Rôle | Contient |
|---|---|---|
| `NomClasse.hpp` | Déclaration | Le nom de la classe, ses attributs, et la signature de ses méthodes (nom, paramètres, type de retour) |
| `NomClasse.cpp` | Implémentation | Le vrai code de chaque méthode |

C'est la même logique que dans `Classe-arborescence` (`Personnage.hpp` /
`Personnage.cpp`), simplement appliquée à deux classes (`Grille` et `Jeu`)
au lieu d'une seule.

### Pourquoi un dossier `include/` et un dossier `src/` ?

Dès qu'un projet contient plusieurs classes, on prend l'habitude de ranger :

- tous les **en-têtes** (`.hpp`) dans `include/`
- toutes les **implémentations** (`.cpp`, y compris `main.cpp`) dans `src/`

Avantages :

- On sait immédiatement où chercher : "je veux voir ce qu'une classe *propose*"
  → je regarde dans `include/`. "Je veux voir *comment* c'est fait"
  → je regarde dans `src/`.
- Cette organisation est la convention la plus répandue dans les projets
  C++ réels (bibliothèques, gros projets, outils professionnels).
- C'est compatible avec les outils de compilation modernes (CMake, etc.)
  si un jour vous allez plus loin que le Makefile.

### Pourquoi `main.cpp` reste séparé et minimal

`main.cpp` est le **seul** fichier avec une fonction `main()`. Son rôle est
juste de créer les objets de haut niveau et de démarrer le programme — pas
d'y mettre la logique métier. Ici, `main.cpp` crée un `Jeu` et appelle
`demarrer()` : toute la vraie logique doit vivre dans les classes.

### Pourquoi `Jeu` inclut `Grille.hpp`

`Jeu.hpp` fait `#include "Grille.hpp"` car la classe `Jeu` possède un
attribut de type `Grille` (`Grille grille;`). Dès qu'une classe A utilise
une classe B comme attribut ou comme paramètre, son `.hpp` doit inclure
le `.hpp` de B pour que le compilateur connaisse cette classe.

### Les gardes d'inclusion (`#ifndef` / `#define` / `#endif`)

Chaque `.hpp` commence par :

```cpp
#ifndef GRILLE_HPP
#define GRILLE_HPP
...
#endif
```

Cela évite qu'un même fichier `.hpp` soit lu deux fois par le compilateur
si plusieurs fichiers `.cpp` l'incluent (ce qui provoquerait une erreur de
"redéfinition de la classe").

## Le Makefile

Le fichier [`Makefile`](./Makefile) est entièrement commenté ligne par
ligne. Pour résumer son fonctionnement :

- `CXX` : quel compilateur utiliser (`g++`)
- `CXXFLAGS` : quelles options lui passer (avertissements activés, norme
  C++17, chemin vers `include/` avec `-Iinclude`)
- `SRC` : la liste des fichiers `.cpp` à compiler ensemble
- `BIN` : le nom du programme généré
- la règle `all` (exécutée par défaut avec `make`) construit `$(BIN)`
- la règle `clean` (`make clean`) supprime le programme généré

### Commandes à connaître

```bash
make        # compile le projet et produit l'exécutable "exemple"
./exemple   # lance le programme
make clean  # supprime l'exécutable, pour recompiler proprement
```

## À retenir pour vos futurs projets

```text
include/*.hpp  → CE QUE la classe sait faire (déclaration)
src/*.cpp      → COMMENT elle le fait (implémentation)
src/main.cpp   → point de départ du programme, reste court
Makefile       → automatise la commande de compilation
```
