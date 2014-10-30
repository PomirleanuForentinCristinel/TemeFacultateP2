#include<iostream>
#include<conio.h>
#include"Header.h"
using namespace std;
using namespace CTI;

void main(){
//	struct Student *stud;
	struct Grupa *grupa;

	//int nr_studenti;
	//int i;
	/**
	cout << "Numar de studenti" << endl;
	cin >> nr_studenti;
	//alocare memorie dinamica pentru nr_studenti
	stud = new Student[nr_studenti];
	for (i = 0; i < nr_studenti; i++){
		citesteStudent(&stud[i]);
	}
	afiseazaStudenti(nr_studenti,stud);
	dealocaStudent(stud);**/
	grupa = new Grupa[12];

	citesteGrupa(grupa);
	sorteazaAlfabetic(grupa);
	//sorteazaDescrescator(grupa);
	afiseazaGrupa(grupa);
	
	cout << "Apasati o tasta pentru a iesi..." << endl;
	_getch();
}