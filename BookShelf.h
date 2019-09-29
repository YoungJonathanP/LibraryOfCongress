//
// Created by Jonathan Young on 9/20/19.
//

#ifndef LIBRARYOFCONGRESS_BOOKSHELF_H
#define LIBRARYOFCONGRESS_BOOKSHELF_H

#include "Book.h"

const int MAX_BOOKS_ON_SHELF = 100;

class BookShelf {

public:
    BookShelf();
    bool AddBook(const Book &book);
    Book RemoveBook(const string &title, const string &author); //remove by title/author
    Book RemoveBook(const Book &theBook); //remove book by object
    bool Contains(const Book &theBook) const;
    void PrintDetails(ostream &theStream) const;
    int getCount() const;

private:
    Book books[MAX_BOOKS_ON_SHELF];
    Book RemoveBook(int location); //remove by location
    int count;

};


#endif //LIBRARYOFCONGRESS_BOOKSHELF_H
