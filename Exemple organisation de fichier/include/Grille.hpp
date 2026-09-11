#ifndef GRILLE_HPP
#define GRILLE_HPP

// ============================================================
//  Grille.hpp — DÉCLARATION de la classe
// ============================================================
// Un fichier .hpp (header / en-tête) sert à DÉCLARER une classe :
//   - son nom
//   - ses attributs (les données qu'elle contient)
//   - la signature de ses méthodes (nom, paramètres, type de retour)
//
// Il ne contient JAMAIS le CODE des méthodes. Le code (l'implémentation)
// va dans le fichier .cpp correspondant : Grille.cpp.
//
// #ifndef / #define / #endif : ce sont les "gardes d'inclusion".
// Elles évitent que ce fichier soit lu deux fois si plusieurs .cpp
// font #include "Grille.hpp" (ce qui provoquerait une erreur de
// "redéfinition de la classe").
// ============================================================

class Grille
{
private:
    // Attribut fictif, juste pour l'exemple.
    int taille;

public:
    // Constructeur : code exécuté automatiquement quand on écrit
    // "Grille maGrille;" dans le programme.
    Grille();

    // Méthodes publiques : ce qu'un objet Grille sait faire.
    // Ici le contenu est volontairement simplifié (fichier fictif) :
    // pour une vraie implémentation de grille de Sudoku, voir le
    // dossier ../../sudoku qui suit exactement la même organisation.
    void initialiser();
    void afficher() const;
};

#endif
