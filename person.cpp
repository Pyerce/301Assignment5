//
//  person.cpp
//  Asgn5
//
//  Created by Pierce Findlay on 4/16/19.
//  Copyright © 2019 Pierce Findlay. All rights reserved.
//  Pierce Findlay
//  Section 2

#include "person.h"

Person::Person(string fName, string lName, int card, bool cardactive)
{
    lastName = lName;
    firstName = fName;
    cardID = card;
    active = cardactive;
}


string Person::getFirstName() {
    return firstName;
}


string Person::getLastName()
{
    return lastName;
}


int Person::getID()
{
    return cardID;
}


bool Person::getActive()
{
    return active;
}

void Person::setActive(bool activator)
{
    active = activator;
}


string Person::fullName()
{
    return firstName + " " + lastName;
    
}
