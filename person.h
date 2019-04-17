//
//  person.h
//  Asgn5
//
//  Created by Pierce Findlay on 4/16/19.
//  Copyright © 2019 Pierce Findlay. All rights reserved.
//  Pierce Findlay
//  Section 2

#ifndef person_h
#define person_h

#include <vector>
#include <string>
using namespace std;

class Person
{
private:
    string firstName;
    string lastName;
    int    cardID;
    bool active;
    
public:
    Person(string lName, string fName, int card, bool active);
    string getFirstName();
    string getLastName();
    int getID();
    bool getActive();
    string fullName();
    void setActive(bool activator);
};

#endif /* person_h */
