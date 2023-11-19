/*
Bonjour,

Voici une petite proposition d'exercice de programmation à rendre pour mardi 21 17h30 au plus tard.
Le "projet" doit être compilable et s'exécuter correctement.

L'exercice est le suivant :

    Ecrire naïvement une fonction dont le prototype est le suivant:
    int getMinMax(int* array, unsigned arraySize, unsigned& minPos, unsigned& maxPos, int& minVal, int& maxVal);​
    qui prend en input:
    * array: un tableau de int;
    * arraySize: le nombre d'elements dans le tableau array;
    et qui calcul en sortie:
    * minPos, maxPos: les indices (positions), du minimum et du maximum du tableau
    * minVal, maxVal: les valeurs du minimum et du maximum du tableau.
    et qui retourne la somme des éléments du tableau entre le minimum et le maximum inclus
     
    Exemple: array = {  5 7 2 6 9 1 4 0 -1 8 };
    minPos = 8; maxPos = 4; minVal = -1; maxVal = 9;
    retourne 9+1+4+0-1=13;
    Ecrire une deuxième version de cette fonction qui est moins naïve: une seule boucle for​ est autorisée dans toute la fonction.
    Écrire un programme principal qui
        Demande a l'utilisateur de rentrer les valeurs du tableau
        Tire au hasard un nombre compris entre 0 et 1. Si la valeur est < 0.5 la première fonction sera utilisée, sinon la deuxième.
        Instancie une class Application​ qui n'a qu'une méthode int run(...)​ qui renvoie 0 en cas de succès, 1 en cas d'erreur et dont le ou les arguments est/sont libres avec les contraintes :
        * le nombre aléatoire ne peut être utilisé
        * la classe Application​ n'a pas connaissance des noms des 2 fonctions.
        La fonction run​ écrit à l'écran le tableau, récupère les infos de l'une des fonctions écrites en 1) en fonction de la valeur du nombre aléatoire b (la fonction run​ ne decide pas quelle fonction utiliser, cela est fait au niveau de la fonction main​), et écrit le résultat à l'écran.

PS: je n'ai que cmake/autotools avec g++/gcc sous la main, donc pas de projet encapsule dans des IDEs pour le build system 🙂

Bon amusement,
Jordan
This message is subject to the following terms and conditions: MAIL DISCLAIMER
*/
#ifndef __LibGetMinMax__
#define __LibGetMinMax__

int getMinMaxNaive(int *array, unsigned arraySize, unsigned& minPos, unsigned& maxPos, int& minVal, int& maxVal);
int getMinMaxOptimized(int *array, unsigned arraySize, unsigned& minPos, unsigned& maxPos, int& minVal, int& maxVal);



#endif