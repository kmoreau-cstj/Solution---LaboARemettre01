//But : �crire un programme qui lit un entier et qui d�termine et affiche s'il s'agit d'un entier pair ou d'un entier impair.
//Auteur : Sebastien Beaudet
//Date : 2020-09-08

#include <iostream> //Inclusion de la biblioth�que pour utiliser les fonctions d'entr�es/sorties.

using namespace std; //Pour ne pas avoir � r�p�ter std:: devant 'cout' et 'cin'.

int main(/*Aucun param�tres*/)  //D�but du main auquel je dois retourner une valeur.
{								//D�but de mon bloc de code.
	setlocale(LC_ALL, ""); //Pour la gestion des charact�res accentu�s. 
	
	int iNombre; //D�clare ma variable pour stocker le nombre que l'utilisateur va entrer.

	//Demande un entier � l'utilisateur.
	cout << "Veuillez entrer un entier : ";
	//Stock ce que l'utilisateur a entr�, dans la variable iNombre.
	cin >> iNombre;

	// (Avec la logique o� si un nombre divis� par 2 n'as aucun reste, c'est que celui-ci est un nombre pair. Sinon, il est d�finitivement impair.)
	if (iNombre % 2 == 0) // Si le nombre entr� par l'utilisateur divis� par 2 a un reste �gal � 0 : ( == pour comparer, car = �craserait la variable iNombre)
	{ //D�but de mon bloc de code, lorsque la condition est vraie :
		cout << iNombre << " est un entier pair !"; //Affiche � l'utilisateur que le nombre est pair.
	}
	else // Sinon
	{ //D�but de mon code, si jamais la condition n'est pas vraie :
		cout << iNombre << " est un entier impair !"; //Affiche � l'utilisateur que le nombre est impair.
	}
	 
	return 0; //Retourne 0 � mon main lorsque le programme se rend jusqu'� cette �tape.
}
/*  ---------------------Plan de tests---------------------
 1. Valeur entr�e : 5		R�sultat : 5 est un entier impair !
 2. Valeur entr�e : 4		R�sultat : 4 est un entier pair !
 3. Valeur entr�e : 0		R�sultat : 0 est un entier pair !
 4. Valeur entr�e : -5		R�sultat : -5 est un entier impair !
 5. Valeur entr�e : -6		R�sultat : -6 est un entier pair !
 6. Valeur entr�e : /$		R�sultat : 0 est un entier pair !
 7. Valeur entr�e : hgdc	R�sultat : 0 est un entier pair !
 8. Valeur entr�e : ""		R�sultat : 
 9. Valeur entr�e : " "		R�sultat : 
10. Valeur entr�e : "34 4"	R�sultat : 34 est un entier pair !
11. Valeur entr�e : 3.1416	R�sultat : 3 est un entier impair !
Conclusion : Si l'entr�e n'est pas un 'int' valide, 
celle-ci est consid�r�e comme �tant un 0. Si l'entr�e est vide, 
le programme attend une entr�e. Si l'entr�e est un r�el, seul
l'entier du r�el est consid�r�.*/
