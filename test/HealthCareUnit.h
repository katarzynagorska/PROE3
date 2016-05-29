/**
* \class HealthCareUnit
*
* \brief Class representing abstract Health Care Unit
*
* This class is representation of health care unit It it an abstract class.
*
* \note Thos class is part of the second PROE project.
*
*
*/

#pragma once
#include <string>
#include <vector>

using namespace std;

class HealthCareUnit
{
public:

	HealthCareUnit();

	virtual ~HealthCareUnit();

	virtual string infoToStr() = 0;

	string equipToStr();


	void addEquipment(string s);

	void removeEquipment(string eq);

	void setAddress(string s);

	void setName(string s);


protected:
	string address;				///<Address
	string name;				///<Name
	vector <string>equipment;	///<List of equipment
};

