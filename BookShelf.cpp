//
// Created by Jonathan Young on 9/20/19.
//

#include "BookShelf.h"


BookShelf::BookShelf()
{
    count = 0;
}

int BookShelf::getCount() const{
    return count;
}

void BookShelf::PrintDetails(ostream &theStream) const
{
    for (int i = 0; i < MAX_BOOKS_ON_SHELF; i++){
        if (books[i].getTitle() != "") {
            books[i].PrintDetails(theStream);
        }
    }
}
bool BookShelf::AddBook(const Book &theBook)
{
    int i = 0;
    if (count == MAX_BOOKS_ON_SHELF){
        return false;
    }
    while (books[i].getTitle() != ""){
        i++;
    }
    books[i]= theBook;
    count++;
    return true;
}