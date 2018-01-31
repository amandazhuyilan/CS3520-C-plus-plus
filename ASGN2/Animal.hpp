//
//  Animal.hpp
//  Assignment2
//
//  Created by Amanda Zhu on 1/29/18.
//  Copyright © 2018 Amanda Zhu. All rights reserved.
//

#ifndef Animal_hpp
#define Animal_hpp

#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

class Animal {
private:
    string _fname;
    char* _lname;
    int* _age;
    vector<int> _feedVectors;
    char _nicknames[4] = {}; //array of pointers

public:
    Animal();       // Default constructor
    Animal(string fname, char* lname, int* age);    //Constructor with parameters
    ~Animal();      // Destructor
    Animal(const Animal& other);
    Animal & operator=(const Animal & other);
    bool operator==(const Animal & other);
    Animal & operator+(const Animal & other);
    Animal & operator<<(const Animal & other);
    friend ostream & operator<<(ostream &output, const Animal & other);
    friend istream & operator>>(ostream &input, const Animal & other);
    string getFirstName() const;
    char* getLastName() const;
    int* getAge() const;
    friend void addNickname(char* Nickname);
    friend void feed(int calories);

};

#endif /* Animal_hpp */
