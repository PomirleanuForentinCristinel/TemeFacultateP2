#include<iostream>
#include<conio.h>
#include"Header.h"
using namespace std;
using namespace CTI;

void main(){
	struct Grupa *grupa;

	grupa = new Grupa[12];
	int x = 1;
	while(x != 0)
	{
		cout <<"1.Citeste grupa." << endl;
		printf("2.Sorteaza Alfabetic\n");
		printf("3.Sorteaza descrescator\n");
		printf("4.Nota maxima a grupei.\n");
		printf("5.Media grupei.\n");
		printf("6.Dealoca grupei.\n");
		cin >> x;
		switch (x)
		{
		case 1:
			CTI::citesteGrupa(grupa);
			break;
		case 2:
			CTI::sorteazaAlfabetic(grupa);
			CTI::afiseazaGrupa(grupa);
			break;
		case 3:
			CTI::sorteazaDescrescator(grupa);
			CTI::afiseazaGrupa(grupa);
			break;
		case 4:
			std::cout << "Nota maxima a grupei este:" << CTI::notaMaximaGrupa(grupa) <<endl;
			break;
		case 5:
			std::cout << "Media grupei este:" << CTI::mediaGrupei(grupa) <<endl;
			break;
		case 6:
			CTI::dealocaGrupa(grupa);
			break;

		}
	}
	std::cout << "Apasati o tasta pentru a iesi..." << endl;
	_getch();
}