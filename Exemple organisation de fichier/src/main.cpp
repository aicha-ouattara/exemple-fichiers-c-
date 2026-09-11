#include "Jeu.hpp"

// ============================================================
//  main.cpp — POINT D'ENTRÉE du programme
// ============================================================
// C'est le SEUL fichier du projet qui contient une fonction main().
// Son rôle doit rester simple : créer les objets de haut niveau et
// démarrer le programme. La vraie logique (les règles, l'affichage,
// les calculs...) vit dans les classes, pas dans main().
// ============================================================
int main()
{
    Jeu jeu;
    jeu.demarrer();

    return 0;
}
