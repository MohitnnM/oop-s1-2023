#include <iostream>
#include "Person.h"
using namespace std;


PersonList createPersonList(int n){
    Person* peopleArray = new Person[n];
    PersonList peopleList;
    peopleList.numPeople = n;
    for (int i = 0; i < peopleList.numPeople; i++){
        peopleArray[i].name = "Jane Doe";
        peopleArray[i].age = 1;
    }

    peopleList.people = peopleArray;

    return(peopleList);
}

PersonList shallowCopyPersonList(PersonList pl){
    pl.numPeople = 5;
    PersonList listCopy = pl;

    return listCopy;
}