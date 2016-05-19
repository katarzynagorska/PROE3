/**
* \class Clinic
*
* \brief Class representing Clinic
*
* This class is representation of clinic. It is a Health Care Unit
* that stores patients data
*
*\note Thos class was the part of the first PROE project.
*
*/

#pragma once
#include"HealthCareUnit.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Clinic : public HealthCareUnit
{
public:
	///Constructs empty clinic
	Clinic();

	virtual ~Clinic();

	///Static method for returning the number of clinics constructed
	static int numberOfClinics();

	///Method that prints information about objetct to console
	void getInfo();

	///Method that prints patients list to console
	void listPatients();

	string patientsToStr();
	string infoToStr();
	
	void addPatient(string patient);

	/** \brief Insert formatted output
	*/
	friend ostream& operator<<(ostream &out, Clinic &c);
	/** \brief Insert formatted input
	*/
	friend istream& operator >> (istream &is, Clinic &c);

private:
	vector<string> patients; ///<patients list
};