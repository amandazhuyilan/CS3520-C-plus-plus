//
//  Animal.cpp
//  Assignment2
//
//  Created by Amanda Zhu on 1/29/18.
//  Copyright © 2018 Amanda Zhu. All rights reserved.
//

#include "Animal.hpp"
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

//default constructor
Animal::Animal(void){
    cout << "Animal is created" << endl;
}

//destructor
Animal::~Animal(void){
    cout << "Animal is destroyed" << endl;
    delete _age;
    _age = NULL;
    delete[] _lname;
}
//constructor with input
Animal::Animal(string fname, char* lname, int* age){
    cout << "Animal with input created" << endl;
    this->_fname = fname;
    this->_lname = lname;
    this->_age = age;
}

//copy constructor
Animal::Animal(const Animal& other){
    this->_fname = other._fname;
    this->_lname = other._lname;
    this->_age = other._age;
    this->_feedVectors = other._feedVectors;
    
    for(int i = 0; i < 4; i++){
        this->_nicknames[i] = other._nicknames[i];
    }
    cout << "Copying constructor" << endl;
}

//= operator
Animal& Animal::operator=(const Animal & other){
    if (this != &other){
        this->_fname = other._fname;
        delete this->_lname;
        this->_lname = NULL;
        this->_lname = other._lname;
        
        delete this->_age;
        this->_age = NULL;
        this->_age = other._age;
        
        this->_feedVectors = other._feedVectors;
        
        for(int i = 0; i < 4; i++){
            this->_nicknames[i] = other._nicknames[i];
        }
    }
    
    return *this;
}

// == operator
bool Animal::operator==(const Animal & other){
    if (this->_age == other._age && this->_fname == other._fname && *(this->_lname) == *(other._lname)){
        return true;
    }
    else
        return false;
}

// operator+, returns a new animal with name equal to both names concatenated and age equal to the sum of both ages
Animal & Animal::operator+(const Animal & other){
    if (this != &other){
        this->_fname = this->_fname+other._fname;

        this->_lname = strcat(this->_lname, other._lname);

        this->_age = new int(*other._age + *this->_age);
        }
    return *this;
}

//operator<< which prints the name and age of the animal as “name: age”
ostream &operator<<( ostream &output, const Animal & other ) {
    output << "name" << other._fname << " " << other._lname << endl << "age: " << *(other._age) << endl;
    return output;
}

// operator>> which reads in the name and the age of the animal
istream &operator<<( istream &input, const Animal & other ) {
    input >> other._fname >> other._age;
    return input;
}

//getFirstName, getLastName, and getAge methods which safely return the first name, last name and the age of the animal (i.e. do not cause potential runtime errors, and do not expose the private fields)

string Animal::getFirstName() const{
    return _fname;
}

char * Animal::getLastName() const{
    return _lname;
}

int * Animal::getAge() const{
    return _age;
}

//an addNickName that adds a new nickname to the array.
void Animal::addNickname(char* Nickname){
    for (int i = 0; i < sizeof(_nicknames); i++){
        if (_nicknames[i] == NULL){
            _nicknames[i] = &Nickname;
        }
    }
}

//a feed function, that accepts a number of how many calories the animal is to be fed. Every time feed(int callories) is called, the callories will be added to the end of the vector.

void Animal::feed(int calories){
    _feedVectors.push_back(calories);
}
//a getFeedVector method which returns a vector containing the feed amounts. Note, when the animal goes out of scope, accessing the values in this vector should still work, and the caller assumes responsibility for managing the lifetime of the new vector and the values stored within it.

// a getNicknames method that returns the a new array containing the nicknames of the animal. The same rules as for getFeedVector apply here.


