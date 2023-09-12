#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int nbLettres, nbLettresMot;
string alphabet; //L'ensemble des elements que l'on veut enumerer par exemple 01
string mot;

void initialisation(int n)
{
	for(int id = 0; id <= n; id++)
		mot = mot + "\n";
}

void enumeration(int n)
{
	if(n < nbLettresMot)
	{
		for(int idLettre = 0; idLettre < nbLettres; idLettre++)
		{
			mot[n] = alphabet[idLettre];
			enumeration(n + 1);
		}
	}
	else
		cout << mot;
}

int main()
{

	cin >> nbLettres; //Entrer le nombre de lettre de l'aphabet
	cin >> alphabet; //Entrer l'alphabet
	cin >> nbLettresMot; //Entrer la taille des mots en sortie
	
	initialisation(nbLettresMot);
	enumeration(0);

	return 0;
}
