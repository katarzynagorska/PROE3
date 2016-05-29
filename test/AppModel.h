#include"MyList.h"
#include"HealthCareUnit.h"
#include "NailArtSaloon.h"
#include "Clinic.h"
#include "BeautyStudio.h"

class AppModel{

public:
	AppModel();
	~AppModel();

	void addObject(HealthCareUnit &h){
		list.push_back(&h);
	}

	HealthCareUnit& getObject(int i){
		return *list[i];
	}

	void setname(int i, string name){
		list[i]->setName(name);
	}

	bool clinicIsReady(){
		return (clinic.)
	}

private:
	myList<HealthCareUnit*> list;
	Clinic clinic;
	BeautyStudio beauty;
	NailArtSaloon nails;

};