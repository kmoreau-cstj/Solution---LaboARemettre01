//But : Écrire un programme qui lit un entier et qui détermine et affiche s'il s'agit d'un entier pair ou d'un entier impair.
//Auteur : Sebastien Beaudet
//Date : 2020-09-08

#include <iostream> //Inclusion de la bibliothèque pour utiliser les fonctions d'entrées/sorties.

using namespace std; //Pour ne pas avoir à répéter std:: devant 'cout' et 'cin'.

int main(/*Aucun paramètres*/)  //Début du main auquel je dois retourner une valeur.
{								//Début de mon bloc de code.
	setlocale(LC_ALL, ""); //FR : Pour la gestion des charactères accentués. 
	
	int iNombre; //Déclare ma variable pour stocker le nombre que l'utilisateur va entrer.

	//Demande un entier à l'utilisateur.
	cout << "Veuillez entrer un entier : ";
	//FR : Stock ce que l'utilisateur a entré, dans la variable iNombre.
	cin >> iNombre;

	// FR : (Avec la logique où si un nombre divisé par 2 n'as aucun reste, c'est que celui-ci est un nombre pair. Sinon, il est définitivement impair.)
	if (iNombre % 2 == 0) // Si le nombre entré par l'utilisateur divisé par 2 a un reste égal à 0 : ( == pour comparer, car = écraserait la variable iNombre)
	{ //Début de mon bloc de code, lorsque la condition est vraie :
		cout << iNombre << " est un entier pair !"; //Affiche à l'utilisateur que le nombre est pair.
	}
	else // Sinon
	{ //Début de mon code, si jamais la condition n'est pas vraie :
		cout << iNombre << " est un entier impair !"; //Affiche à l'utilisateur que le nombre est impair.
	}
	 
	return 0; //Retourne 0 à mon main lorsque le programme se rend jusqu'à cette étape.
}
/*  ---------------------Plan de tests---------------------
 1. Valeur entrée : 5		Résultat : 5 est un entier impair !
 2. Valeur entrée : 4		Résultat : 4 est un entier pair !
 3. Valeur entrée : 0		Résultat : 0 est un entier pair !
 4. Valeur entrée : -5		Résultat : -5 est un entier impair !
 5. Valeur entrée : -6		Résultat : -6 est un entier pair !
 6. Valeur entrée : /$		Résultat : 0 est un entier pair !
 7. Valeur entrée : hgdc	Résultat : 0 est un entier pair !
 8. Valeur entrée : ""		Résultat : 
 9. Valeur entrée : " "		Résultat : 
10. Valeur entrée : "34 4"	Résultat : 34 est un entier pair !
11. Valeur entrée : 3.1416	Résultat : 3 est un entier impair !
Conclusion : Si l'entrée n'est pas un 'int' valide, 
celle-ci est considérée comme étant un 0. Si l'entrée est vide, 
le programme attend une entrée. Si l'entrée est un réel, seul
l'entier du réel est considéré.*/
