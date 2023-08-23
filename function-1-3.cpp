#include <iostream>
#include "Person.h"
using namespace std;

PersonList createPersonList(int n){
    Person* peopleArray = new Person[n];
    PersonList peopleList;
    peopleList.numPeople = n;
    for (int i = 0; i < peopleList.numPeople; i++){
        peopleArray[i].name = "Jane Do";
        peopleArray[i].age = 1;
    }

    peopleList.people = peopleArray;

    return(peopleList);
}

PersonList deepCopyPersonList(PersonList pl){
    
    PersonList List = pl;
    pl.numPeople = 5;
    int size = pl.numPeople;
    Person* newArray = new Person[size];

    for (int i = 0; i < size; i++){
        newArray[i].name = pl.people[i].name;
        newArray[i].age = pl.people[i].age;
    }
    List.people = newArray;
    
    return List;
}