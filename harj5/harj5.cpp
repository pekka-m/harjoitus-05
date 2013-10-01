/*********************************************************************
Teht‰v‰: HARJOITUS 5
Tekij‰: Pekka Melgin
PVM: 10.9.2013
Kuvaus:
Kirjoita ohjelma, joka pyyt‰‰ k‰ytt‰j‰lt‰ kaksi kokonaislukua.

Ohjelma tulostaa tekstin BINGO, mik‰li luvut ovat samoja.

Muussa tapauksessa ohjelma tulostaa tekstin BONGO.
**********************************************************************/
#include <iostream>
using namespace std;
void main ()
{
	int luku1;
	int luku2;
	cout<< "SyîtÑ luku1: ";
	cin>>luku1;
	cout<< "SyîtÑ luku2: ";
	cin>>luku2;
	if (luku1 == luku2)
		cout<< "BINGO!\n";
	else
		cout<< "BONGO!\n";
}