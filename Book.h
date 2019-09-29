//
// Created by Jonathan Young on 9/19/19.
//
#include <string>
using namespace std;


#ifndef LIBRARYOFCONGRESS_BOOK_H
#define LIBRARYOFCONGRESS_BOOK_H


class Book
        {
public:
            //constructors
            Book();
            Book(string title, string author);
            // getters-setters
            string getTitle() const; //const means no allowance for returned data to be changed
            string getAuthor() const;
            float getPrice() const;
            int getLength() const;
            int getBookMark() const;

            bool setTitle(string title);
            bool setAuthor(string author);
            bool setPrice(float price);
            bool setLength(int length);
            bool setBookmark(int bookmark);


            // verb
            int TurnPage(int numPages);
            string toString() const;
            void PrintDetails(ostream &theStream) const; // & in front means it is a reference to that stream
        private:
    string title;
    string author;
    int length;
    float price;
    int bookmark;
};


#endif //LIBRARYOFCONGRESS_BOOK_H
