#include <iostream>
#include "Book.h"
#include "BookShelf.h"

using namespace std;

void PrintDetails(Book book);

int main()
{
    cout << "Welcome to the library of Congress" << endl;
    Book book1, book2, book3;
    BookShelf favorites;

    book1.setTitle("Percy Jackson does something cool");
    book1.setAuthor("Rick Riodan");
    book1.setPrice(19.99);
    book1.setLength(234);
    book1.setBookmark(9);

    book2 = book1;
    book2.setPrice(10.00);

    //cout << "Book1: " << " Title is " << book1.title << endl;
    book1.PrintDetails(cout);
    Book book4("compund effect", "hardy");
    book4.PrintDetails(cout);
    favorites.AddBook(book1);
    favorites.AddBook(book2);
    favorites.AddBook(book3);
    favorites.AddBook(book4);

}

/* void PrintDetails(Book book)
{
    cout << "Title: " << book.getTitle() << " -Author: " << book.getAuthor() << " -Cost:$" << book.getPrice() << endl;
} */