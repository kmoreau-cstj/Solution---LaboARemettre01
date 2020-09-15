//But : Écrire un programme qui lit un nombre à 5 chiffres. Vérifie qu'il y a 5 chiffres. Affiche le nombre verticalement.
//Auteur : Sebastien Beaudet
//Date : 2020-09-08

#include <iostream> //Inclusion de la bibliothèque pour utiliser les fonctions d'entrées/sorties.

using namespace std; //Pour ne pas avoir à répéter std:: devant 'cout' et 'cin'.

int main(/*FR : Aucun paramètres*/)  //Début du main auquel je dois retourner une valeur.
{								//Début de mon bloc de code.
	setlocale(LC_ALL, ""); //FR : Pour la gestion des charactères accentués. 

	float fNombre;  //Déclare ma variable pour stocker le nombre que l'utilisateur va entrer.
					//On met la variable dans un float, pour empêcher les boucles infinies lors de la validation.
	int iNombre;	//Variable pour stocker l'entier après la validation et utiliser %.

	cout << "Veuillez entrer un entier à 5 chiffres : "; //Demande un entier à l'utilisateur.
	cin >> fNombre; //Stock ce que l'utilisateur a entré, dans la variable fNombre.

	//Valide si le nombre entré à 5 chiffres. Il doit être compris entre 99999 et 10000. (99999 + 1 = 6 chiffres, 10000 -1 = 4 chiffres. )
	while ((fNombre > 99999) || (fNombre < 10000))  // Tant que le nombre est plus grand que 99999 ou plus petit que 10000 ou que le nombre divisé par 10000 donne moins que 1.
	{
		cout << "Ce nombre ne contient pas 5 chiffres.\nVeuillez entrer un entier à 5 chiffres : "; // Demande un entier à l'utilisateur
		cin >> fNombre;	//FR : Stock ce que l'utilisateur a entré, dans la variable iNombre.
	} //FR : Passé cette boucle, nous sommes certain que le nombre stocké a 5 chiffres, si la personne a entrée un nombre.

	iNombre = fNombre; //FR : Visual Studio ne me laissait pas utiliser '%' avec un 'float'. Je transfers donc son contenu dans un 'int'.

	//Affiche le nombre à 5 chiffres sur 5 lignes.
	//Affiche la première ligne et saute à la suivante.
	//Logique: Le premier chiffre(x) du nombre 12345 divisé par 10000 donne  (x),2345 (Où 2345 représente le reste du nombre, mais passé la virgule.) Comme c'est une variable entière, seul (x) est affiché.
	cout << iNombre/10000  << "\n"; 

	//Affiche la deuxième ligne et saute à la suivante.
	//Logique: Pour le deuxième chiffre(x) du nombre 12345, on divise par 10000 -> 1,(x)345 et on garde le reste, donc (x)345. On divise par 1000 -> (x),345. Comme c'est une variable entière, seul (x) est affiché.
	cout << (iNombre % 10000)/1000 << "\n"; 

	//Affiche la troisième ligne et saute à la suivante.
	//Logique: Pour le troisième chiffre(x) du nombre 12345, on divise par 1000 -> 12,(x)45 et on garde le reste, donc (x)45. On divise par 100 -> (x),45. Comme c'est une variable entière, seul (x) est affiché.
	cout << (iNombre % 1000)/100 << "\n"; 

	//Affiche la quatrième ligne et saute à la suivante.
	//Logique: Pour le quatrième chiffre(x) du nombre 12345, on divise par 100 -> 123,(x)5 et on garde le reste, donc (x)5. On divise par 10 -> (x),5. Comme c'est une variable entière, seul (x) est affiché.
	cout << (iNombre % 100)/10 << "\n"; 

	//Affiche la cinquième ligne.
	//Logique: Pour le deuxième chiffre(x) du nombre 12345, on divise par 10 -> 1234,(x) et on garde le reste, donc (x).
	cout << iNombre % 10; 

	return 0; //Retourne 0 à mon main lorsque le programme se rend jusqu'à cette étape.
}
/*  ---------------------Plan de tests---------------------
1. Valeur entrée : 5		Résultat : Ce nombre ne contient pas 5 chiffres.
									   Veuillez entrer un entier à 5 chiffres : (Validation réussie)
2. Valeur entrée : 445346	Résultat : Ce nombre ne contient pas 5 chiffres.
									   Veuillez entrer un entier à 5 chiffres : (Validation réussie)
3. Valeur entrée : 0		Résultat : Ce nombre ne contient pas 5 chiffres.
									   Veuillez entrer un entier à 5 chiffres : (Validation réussie)
4. Valeur entrée : -5		Résultat : Ce nombre ne contient pas 5 chiffres.
									   Veuillez entrer un entier à 5 chiffres : (Validation réussie)
5. Valeur entrée : -66745	Résultat : Ce nombre ne contient pas 5 chiffres.
									   Veuillez entrer un entier à 5 chiffres : (Validation réussie)
6. Valeur entrée : /$		Résultat : Ce nombre ne contient pas 5 chiffres.
									   Veuillez entrer un entier à 5 chiffres : Ce nombre ne contient pas 5 chiffres. (boucle infinie)
7. Valeur entrée : hgdc		Résultat : Ce nombre ne contient pas 5 chiffres.
									   Veuillez entrer un entier à 5 chiffres : Ce nombre ne contient pas 5 chiffres. (boucle infinie)
8. Valeur entrée : 3.1416	Résultat : Ce nombre ne contient pas 5 chiffres.
									   Veuillez entrer un entier à 5 chiffres : (Validation réussie)
9. Valeur entrée : 99999	Résultat : 9
									   9
									   9
									   9
									   9
12. Valeur entrée : 12345	Résultat : 1
									   2
									   3									   
									   4									   
									   5
Conclusion : Tant que la valeur entrée reste dans le numérique, le programme fonctionne. 
FR : Dès qu'il s'agit d'un charactère ou d'une chaîne de charactères, le programme 'plante'.*/
