#ifndef JEU_HPP
#define JEU_HPP

#include "Grille.hpp"

// ============================================================
//  Jeu.hpp — DÉCLARATION de la classe
// ============================================================
// Remarque importante : ce fichier fait "#include "Grille.hpp"".
// C'est parce que la classe Jeu contient un attribut de type Grille
// (voir ci-dessous). On dit que "Jeu POSSÈDE une Grille"
// (relation de composition).
//
// Chaque .hpp ne déclare qu'UNE classe : c'est une règle de bonne
// pratique en C++ qui garde les fichiers petits et faciles à lire.
// ============================================================

class Jeu
{
private:
    Grille grille; // Un Jeu possède une Grille

public:
    Jeu();

    // Méthode fictive représentant la boucle principale du jeu.
    // Pour un exemple complet et fonctionnel, voir ../../sudoku/.
    void demarrer();
};

#endif
