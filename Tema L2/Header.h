#ifndef _HEADER_H 
#define _HEADER_H
#include <string.h>

namespace CTI
{
	struct Student
	{
		char nume[20];
		char prenume[20];
		int nota;
	};
	void citesteStudent(struct Student *ptr_student);//done
	void afiseazaStudenti(int n, struct Student *ptr_student);//done
	void dealocaStudent(struct Student *ptr_student);//done

	struct Grupa
	{
		char numeleGrupei[20];
		int nrStudenti;
		Student *tabloulDeStudenti;
	};
	Grupa sorteazaAlfabetic(struct Grupa *ptr_grupa);//done
	Grupa sorteazaDescrescator(struct Grupa *ptr_grupa);//
	void citesteGrupa(struct Grupa *ptr_grupa);//done
	void afiseazaGrupa(struct Grupa *ptr_grupa);//done
	void dealocaGrupa(struct Grupa *ptr_grupa);
	Grupa notaMaximaGrupa(struct Grupa *ptr_grupa);
	void mediaGrupei(struct Grupa *ptr_grupa);
}
#endif

