#include "BeautyStudio.h"
#include "NailArtSaloon.h"
#include "Clinic.h"
#include <stdlib.h>   
#include <time.h> 
#include <sstream>
#include<string>



string randomBS(){
	string s;
	BeautyStudio b;

	b.setAddress("AdresSalonuPieknosci_1");
	b.setName("NazwaSalonuPieknosci_1");
	b.setPrice(500);

	srand(time(NULL));
	int iRand = rand() % 10 + 4;

	for (int i = 1; i < iRand; i++)
		b.addBeautician(to_string(i) + ". kosmetyczka studia pieknosci");

	iRand = rand() % 10 + 4;
	for (int i = 1; i < iRand; i++)
		b.addEquipment(to_string(i) + ". rzecz studia pieknosci");

	s = b.infoToStr();
	return s;
}

string randomNAS(){
	string s;
	NailArtSaloon n;

	n.setAddress("Adres");
	n.setName("Name");

	srand(time(NULL));
	int iRand = rand() % 10 + 4;

	for (int i = 1; i < iRand; i++)
		n.addEquipment(to_string(i) + "Przedmiot_" + to_string(i) + " salonu paznokci");

	iRand = rand() % 10 + 4;
	for (int i = 1; i < iRand; i++)
		n.addBeautician(to_string(i) + "Pracownik_" + to_string(i) + " salonu paznokci");

	iRand = rand() % 10 + 4;
	for (int i = 1; i < iRand; i++)
		n.addService((to_string(i) + "Usluga_" + to_string(i) + " studia paznokci"), i * 100);

	s = n.infoToStr();
	return s;
}

string randomC(){
	stringstream s;
	Clinic c;

	srand(time(NULL));

	int iRand = rand() % 3 + 3;

	c.setAddress("Adres przychodni");
	c.setName("Nazwa przychodni");


	for (int i = 0; i < iRand; i++)
		c.addEquipment("Wyposazenie " + to_string(i + 1));

	iRand = rand() % 5 + 3;

	for (int i = 0; i < iRand; i++)
		c.addPatient("Pacjent " + to_string(i + 1));

	s << c.infoToStr();

	return s.str();
}