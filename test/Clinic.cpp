#include"Clinic.h"

#include <string>
#include <iostream>
#include <vector>

#include <sstream>




//Konstruktor 
Clinic::Clinic() : HealthCareUnit()
{

}

//Destruktor
Clinic::~Clinic()
{

}

string Clinic::patientsToStr(){
	stringstream ss;
	ss << endl << "PACJENCI: " << endl;
	for (int i = 0; i < int(patients.size()); i++)
		ss << patients[i] << endl;

	return ss.str();
}
string Clinic::infoToStr(){
	stringstream ss;
	ss << "----Przychodnia----" << endl;
	ss << name << endl;
	ss << address << endl;

	ss << equipToStr() <<  endl;

	ss << patientsToStr() << endl << endl;


	return ss.str();
}

void Clinic::getInfo()
{
	cout << "----Przychodnia----" << endl;
	cout << name << endl;
	cout << address << endl;
	
	listEquipment();

	listPatients();
}

void Clinic::listPatients()
{
	cout << endl << "PACJENCI: " << endl;
	for (int i = 0; i < int(patients.size()); i++)
		cout << patients[i] << endl;
}

void Clinic::addPatient(string patient){
	patients.push_back(patient);
}

//
//ostream & operator<<(ostream & out, Clinic & c)
//{
//	out << (HealthCareUnit&)c << "@"<<endl;
//	for (int i = 0; i < int(c.patients.size()); i++)
//		out << c.patients[i];
//	out << ";";
//	return out;
//}

//istream & operator >> (istream & is, Clinic & c)
//{
//	is >> ((HealthCareUnit&)c);
//
//	string s;
//	int i = 0;
//
//	while (1) {
//		Patient p;
//		c.patients.push_back(p);
//
//		is >> c.patients[i];
//
//		i++;
//
//		while (is.peek() == 10 || (char(is.peek()) == ';')) {
//			getline(is, s); // usuniecie ze strumienia zbednych nowych lini i gwiazdki na koncu
//
//		}
//		if (s == ";") break;
//	}
//	return is;
//}
