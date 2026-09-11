#include "Grille.hpp"
#include <iostream>

// ============================================================
//  Grille.cpp — IMPLÉMENTATION de la classe
// ============================================================
// Ce fichier contient le VRAI code des méthodes déclarées dans
// Grille.hpp. On écrit "Grille::" devant chaque méthode pour dire
// "ceci est le code de la méthode qui appartient à la classe Grille"
// (sinon le compilateur ne saurait pas à quelle classe elle appartient).
//
// Ce fichier a besoin de "#include "Grille.hpp"" pour connaître la
// déclaration de la classe qu'il implémente.
// ============================================================

Grille::Grille()
{
    taille = 9;
}

void Grille::initialiser()
{
    // Contenu fictif : dans un vrai projet, c'est ici que l'on
    // remplirait la grille avec ses valeurs de départ.
    std::cout << "Grille initialisee (exemple fictif).\n";
}

void Grille::afficher() const
{
    // Contenu fictif : dans un vrai projet, c'est ici que l'on
    // afficherait le contenu réel de la grille, case par case.
    std::cout << "Affichage d'une grille de taille " << taille << " (exemple fictif).\n";
}
