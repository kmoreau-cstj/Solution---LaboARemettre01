//But : �crire un programme qui lit un nombre � 5 chiffres. V�rifie qu'il y a 5 chiffres. Affiche le nombre verticalement.
//Auteur : Sebastien Beaudet
//Date : 2020-09-08

#include <iostream> //Inclusion de la biblioth�que pour utiliser les fonctions d'entr�es/sorties.

using namespace std; //Pour ne pas avoir � r�p�ter std:: devant 'cout' et 'cin'.

int main(/*Aucun param�tres*/)  //D�but du main auquel je dois retourner une valeur.
{								//D�but de mon bloc de code.
	setlocale(LC_ALL, ""); //Pour la gestion des charact�res accentu�s. 

	float fNombre;  //D�clare ma variable pour stocker le nombre que l'utilisateur va entrer.
					//On met la variable dans un float, pour emp�cher les boucles infinies lors de la validation.
	int iNombre;	//Variable pour stocker l'entier apr�s la validation et utiliser %.

	cout << "Veuillez entrer un entier � 5 chiffres : "; //Demande un entier � l'utilisateur.
	cin >> fNombre; //Stock ce que l'utilisateur a entr�, dans la variable fNombre.

	//Valide si le nombre entr� � 5 chiffres. Il doit �tre compris entre 99999 et 10000. (99999 + 1 = 6 chiffres, 10000 -1 = 4 chiffres. )
	while ((fNombre > 99999) || (fNombre < 10000))  // Tant que le nombre est plus grand que 99999 ou plus petit que 10000 ou que le nombre divis� par 10000 donne moins que 1.
	{
		cout << "Ce nombre ne contient pas 5 chiffres.\nVeuillez entrer un entier � 5 chiffres : "; // Demande un entier � l'utilisateur
		cin >> fNombre;	//Stock ce que l'utilisateur a entr�, dans la variable iNombre.
	} //Pass� cette boucle, nous sommes certain que le nombre stock� a 5 chiffres, si la personne a entr�e un nombre.

	iNombre = fNombre; //Visual Studio ne me laissait pas utiliser '%' avec un 'float'. Je transfers donc son contenu dans un 'int'.

	//Affiche le nombre � 5 chiffres sur 5 lignes.
	//Affiche la premi�re ligne et saute � la suivante.
	//Logique: Le premier chiffre(x) du nombre 12345 divis� par 10000 donne  (x),2345 (O� 2345 repr�sente le reste du nombre, mais pass� la virgule.) Comme c'est une variable enti�re, seul (x) est affich�.
	cout << iNombre/10000  << "\n"; 

	//Affiche la deuxi�me ligne et saute � la suivante.
	//Logique: Pour le deuxi�me chiffre(x) du nombre 12345, on divise par 10000 -> 1,(x)345 et on garde le reste, donc (x)345. On divise par 1000 -> (x),345. Comme c'est une variable enti�re, seul (x) est affich�.
	cout << (iNombre % 10000)/1000 << "\n"; 

	//Affiche la troisi�me ligne et saute � la suivante.
	//Logique: Pour le troisi�me chiffre(x) du nombre 12345, on divise par 1000 -> 12,(x)45 et on garde le reste, donc (x)45. On divise par 100 -> (x),45. Comme c'est une variable enti�re, seul (x) est affich�.
	cout << (iNombre % 1000)/100 << "\n"; 

	//Affiche la quatri�me ligne et saute � la suivante.
	//Logique: Pour le quatri�me chiffre(x) du nombre 12345, on divise par 100 -> 123,(x)5 et on garde le reste, donc (x)5. On divise par 10 -> (x),5. Comme c'est une variable enti�re, seul (x) est affich�.
	cout << (iNombre % 100)/10 << "\n"; 

	//Affiche la cinqui�me ligne.
	//Logique: Pour le deuxi�me chiffre(x) du nombre 12345, on divise par 10 -> 1234,(x) et on garde le reste, donc (x).
	cout << iNombre % 10; 

	return 0; //Retourne 0 � mon main lorsque le programme se rend jusqu'� cette �tape.
}
/*  ---------------------Plan de tests---------------------
1. Valeur entr�e : 5		R�sultat : Ce nombre ne contient pas 5 chiffres.
									   Veuillez entrer un entier � 5 chiffres : (Validation r�ussie)
2. Valeur entr�e : 445346	R�sultat : Ce nombre ne contient pas 5 chiffres.
									   Veuillez entrer un entier � 5 chiffres : (Validation r�ussie)
3. Valeur entr�e : 0		R�sultat : Ce nombre ne contient pas 5 chiffres.
									   Veuillez entrer un entier � 5 chiffres : (Validation r�ussie)
4. Valeur entr�e : -5		R�sultat : Ce nombre ne contient pas 5 chiffres.
									   Veuillez entrer un entier � 5 chiffres : (Validation r�ussie)
5. Valeur entr�e : -66745	R�sultat : Ce nombre ne contient pas 5 chiffres.
									   Veuillez entrer un entier � 5 chiffres : (Validation r�ussie)
6. Valeur entr�e : /$		R�sultat : Ce nombre ne contient pas 5 chiffres.
									   Veuillez entrer un entier � 5 chiffres : Ce nombre ne contient pas 5 chiffres. (boucle infinie)
7. Valeur entr�e : hgdc		R�sultat : Ce nombre ne contient pas 5 chiffres.
									   Veuillez entrer un entier � 5 chiffres : Ce nombre ne contient pas 5 chiffres. (boucle infinie)
8. Valeur entr�e : 3.1416	R�sultat : Ce nombre ne contient pas 5 chiffres.
									   Veuillez entrer un entier � 5 chiffres : (Validation r�ussie)
9. Valeur entr�e : 99999	R�sultat : 9
									   9
									   9
									   9
									   9
12. Valeur entr�e : 12345	R�sultat : 1
									   2
									   3									   
									   4									   
									   5
Conclusion : Tant que la valeur entr�e reste dans le num�rique, le programme fonctionne. 
D�s qu'il s'agit d'un charact�re ou d'une cha�ne de charact�res, le programme 'plante'.*/
