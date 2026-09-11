# ============================================================
#  Makefile — 
# ============================================================
# Un Makefile est un fichier lu par l'outil "make". Il explique
# comment construire (compiler) le projet : quels fichiers compiler,
# avec quel compilateur, avec quelles options, et quel nom donner
# au programme final.
#
# Sans Makefile, il faudrait retaper à la main à chaque fois :
#   g++ -Wall -Wextra -std=c++17 -Iinclude src/main.cpp src/Grille.cpp src/Jeu.cpp -o exemple
# Avec un Makefile, il suffit de taper :
#   make
# ============================================================

# CXX = le compilateur utilisé pour compiler le code C++.
# "CXX" est juste une variable (comme en C++), on peut l'appeler comme on veut,
# mais "CXX" est le nom standard utilisé par convention pour "C++ compileur".
CXX = g++

# CXXFLAGS = les options passées au compilateur à chaque compilation.
#   -Wall -Wextra  -> affiche un maximum d'avertissements (bonnes pratiques,
#                     erreurs probables). Toujours les garder activées.
#   -std=c++17     -> utilise la norme du langage C++17.
#   -Iinclude      -> ajoute le dossier "include/" à la liste des dossiers
#                     où chercher les fichiers .hpp quand on écrit
#                     #include "Grille.hpp" dans un .cpp.
CXXFLAGS = -Wall -Wextra -std=c++17 -Iinclude

# SRC = la liste des fichiers sources (.cpp) à compiler ensemble pour
# fabriquer le programme. Si on ajoute une nouvelle classe (par exemple
# Joueur.cpp), il faut penser à l'ajouter ici.
SRC = src/main.cpp src/Grille.cpp src/Jeu.cpp

# BIN = le nom du programme (exécutable) qui sera créé après compilation.
BIN = exemple

# ------------------------------------------------------------
#  Règles (targets)
# ------------------------------------------------------------
# Une règle Makefile s'écrit toujours ainsi :
#
#   nom_de_la_regle: dépendances
#   	commande à exécuter
#
# ATTENTION : la commande doit être indentée avec une VRAIE tabulation,
# pas des espaces, sinon make affiche une erreur "missing separator".
# ------------------------------------------------------------

# Règle par défaut : quand on tape simplement "make", c'est CETTE règle
# qui est exécutée en premier (la première règle du fichier fait toujours
# ce rôle). Ici elle ne fait que demander à fabriquer $(BIN).
all: $(BIN)

# Cette règle dit : "pour fabriquer $(BIN), il faut d'abord que $(SRC)
# existe, puis exécuter la commande de compilation ci-dessous".
# $(CXX), $(CXXFLAGS), $(SRC) et $(BIN) sont remplacés par leur valeur :
# la ligne devient : g++ -Wall -Wextra -std=c++17 -Iinclude src/main.cpp src/Grille.cpp src/Jeu.cpp -o exemple
$(BIN): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(BIN)

# "make clean" supprime l'exécutable généré, pour repartir d'une
# compilation propre (utile si quelque chose semble bloqué).
clean:
	rm -f $(BIN)

# .PHONY précise que "all" et "clean" sont des NOMS DE COMMANDES,
# pas de vrais fichiers à produire. Sans cette ligne, si un fichier
# s'appelait par hasard "clean" dans le dossier, make pourrait croire
# qu'il n'y a rien à faire et ne pas exécuter la commande.
.PHONY: all clean
