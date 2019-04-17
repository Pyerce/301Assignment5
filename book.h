//
//  book.h
//  Asgn5
//
//  Created by Pierce Findlay on 4/16/19.
//  Copyright © 2019 Pierce Findlay. All rights reserved.
//  Pierce Findlay
//  Section 2

#ifndef book_h
#define book_h

#include "person.h"

#include <string>
using namespace std;

class Book
{
private:
    int ID;
    string title;
    string author;
    string category;
    Person * personPtr = nullptr;
    
public:
    Book(int bookID, string booktitle, string bookauthor, string bookcategory);
    int getID();
    string getTitle();
    string getAuthor();
    string getCategory();
    void setPersonPtr(Person * ptr);
    Person * getPersonPtr();
};

#endif /* book_h */
