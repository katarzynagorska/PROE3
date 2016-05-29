#include"MyList.h"
#include"HealthCareUnit.h"

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

private:
	myList<HealthCareUnit*> list;

};