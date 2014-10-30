#include<iostream>
#include"Header.h"
#include <iomanip>
#include <string.h>
#include <string.h>
using namespace std;
using namespace CTI;

void CTI::citesteStudent(struct Student *ptr_student){
	cout << "Dati numele studentului:" << endl;
	cin >> ptr_student->nume;

	cout << "Dati prenumele studentului:" << endl;;
	cin >> ptr_student->prenume;

	cout << "Dati nota studentului:" << endl;;
	cin >> ptr_student->nota;
}

void CTI::afiseazaStudenti(int n, struct Student *ptr_student){
	cout << "Tabel studenti:" << endl;
	/*setfill(x) fill the empty space by provided character x*/
	/*setw(x) creates a column of width x*/
	/*left keyword align the contents of a columns left align*/
	/*right keyword align the contents of a columns right align*/

	//printing border
	cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(5) << "-" << setw(1) << "+" << endl;
	//printing student record
	cout << setfill(' ') << setw(1) << "|" << setw(15) << left << "Nume" << setw(1) << "|" << setw(15) << left << "Prenume" << setw(1) << "|" << setw(5) << left << "Nota" << setw(1) << "|" << endl;
	for (int i = 0; i < n; i++)
	{

		//printing border
		cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(5) << "-" << setw(1) << "+" << endl;
		//printing student record
		cout << setfill(' ') << setw(1) << "|" << setw(15) << left << ptr_student[i].nume << setw(1) << "|" << setw(15) << left << ptr_student[i].prenume << setw(1) << "|" << setw(5) << left << ptr_student[i].nota << setw(1) << "|" << endl;
	}
	//printing border
	cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(5) << "-" << setw(1) << "+" << endl;
}
void CTI::dealocaStudent(struct Student *ptr_student){
	delete[] ptr_student;
}

void CTI::citesteGrupa(struct Grupa *ptr_grupa){
	cout << "Dati numele grupei:" << endl;
	cin >> ptr_grupa->numeleGrupei;

	cout << "Dati nr studenti:" << endl;;
	cin >> ptr_grupa->nrStudenti;

	ptr_grupa->tabloulDeStudenti = new Student[ptr_grupa->nrStudenti];
	for (int i = 0; i < ptr_grupa->nrStudenti; i++){
		citesteStudent(&ptr_grupa->tabloulDeStudenti[i]);
	}
}

void CTI::afiseazaGrupa(struct Grupa *ptr_grupa){
	cout << "Grupa :" << ptr_grupa->numeleGrupei << endl;
	/*setfill(x) fill the empty space by provided character x*/
	/*setw(x) creates a column of width x*/
	/*left keyword align the contents of a columns left align*/
	/*right keyword align the contents of a columns right align*/

	//printing border
	cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(5) << "-" << setw(1) << "+" << endl;
	//printing student record
	cout << setfill(' ') << setw(1) << "|" << setw(15) << left << "Nume" << setw(1) << "|" << setw(15) << left << "Prenume" << setw(1) << "|" << setw(5) << left << "Nota" << setw(1) << "|" << endl;
	for (int i = 0; i < ptr_grupa->nrStudenti; i++)
	{

		//printing border
		cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(5) << "-" << setw(1) << "+" << endl;
		//printing student record
		cout << setfill(' ') << setw(1) << "|" << setw(15) << left << ptr_grupa->tabloulDeStudenti[i].nume << setw(1) << "|" << setw(15) << left << ptr_grupa->tabloulDeStudenti[i].prenume << setw(1) << "|" << setw(5) << left << ptr_grupa->tabloulDeStudenti[i].nota << setw(1) << "|" << endl;
	}
	//printing border
	cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(5) << "-" << setw(1) << "+" << endl;

}

Grupa CTI::sorteazaAlfabetic(struct Grupa *ptr_grupa){
	int i = 0, j = 0,flag = 1;;

	for (j; j<ptr_grupa->nrStudenti&&flag; j++) {
		Student *tmp = new Student[20];
		flag = 0;
		for (i; i < ptr_grupa->nrStudenti; i++) {
			if (strcmp(ptr_grupa->tabloulDeStudenti[i].nume, ptr_grupa->tabloulDeStudenti[i + 1].nume) > 0) {
				tmp[1] = ptr_grupa->tabloulDeStudenti[i];
				ptr_grupa->tabloulDeStudenti[i] = ptr_grupa->tabloulDeStudenti[i + 1];
				ptr_grupa->tabloulDeStudenti[i + 1] = tmp[1];
				flag = 1;
			}
		}
		delete[] tmp;
	}
	return *ptr_grupa;
}

Grupa CTI::sorteazaDescrescator(struct Grupa *ptr_grupa){
	int i, j , flag = 1;
	Student *tmp = new Student[20];

	for (j = 1; j <= ptr_grupa->nrStudenti&&flag; j++) {
		flag = 0;
		for (i=0 ; i <ptr_grupa->nrStudenti-1; i++) {
			if (ptr_grupa->tabloulDeStudenti[i +1].nota > ptr_grupa->tabloulDeStudenti[i].nota) {
				tmp[1] = ptr_grupa->tabloulDeStudenti[i];
				ptr_grupa->tabloulDeStudenti[i] = ptr_grupa->tabloulDeStudenti[i + 1];
				ptr_grupa->tabloulDeStudenti[i + 1] = tmp[1];
				flag = 1;
			}
		}
	}
	return *ptr_grupa;
	return *ptr_grupa;
}


