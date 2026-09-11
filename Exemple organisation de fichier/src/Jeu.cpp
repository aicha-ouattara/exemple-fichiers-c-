#include "Jeu.hpp"
#include <iostream>

// ============================================================
//  Jeu.cpp — IMPLÉMENTATION de la classe
// ============================================================

Jeu::Jeu()
{
}

void Jeu::demarrer()
{
    // Contenu fictif : dans un vrai projet, c'est ici que l'on
    // mettrait la boucle de jeu (demander un coup, vérifier les
    // règles, recommencer jusqu'à la victoire).
    std::cout << "Demarrage du jeu (exemple fictif).\n";

    grille.initialiser();
    grille.afficher();
}
