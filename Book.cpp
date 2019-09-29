//
// Created by Jonathan Young on 9/19/19.
//

#include "Book.h"
#include <iostream>

Book::Book(){
    cout << "Default constructor is running" << endl;
    length = -1;
    bookmark = 0;
    price = 0.0;
    author = "";
    title = "";
}

Book::Book(string title, string author){
    cout << "title/author constructor is running" << endl;
    length = -1;
    bookmark = 0;
    price = 0.0;
    this->author = author;
    this->title = title;
}

string Book::getAuthor() const
{
    return author;
}

string Book::getTitle() const {
    return title;
}

float Book::getPrice() const {
    return price;
}

int Book::getLength() const {
    return length;
}

int Book::getBookMark() const {
    return bookmark;
}

bool Book::setTitle(string title) {
    this->title = title;
    return true;
}

bool Book::setAuthor(string author) {
    this->author = author;
    return true;
}

bool Book::setPrice(float price) { //should check to see if price is positive
    this->price = price;
    return true;
}

bool Book::setLength(int length) {
    if (length < 0){
        return false;
    } else {
        this->length = length;
        return true;
    }

}

bool Book::setBookmark(int bookmark) {
    if  ((length <= bookmark) && (bookmark > 0)){
        this->bookmark = bookmark;
        return true;
    }else{
        return false;
    }


}

int Book::TurnPage(int numPages) {
    setBookmark(bookmark + numPages);
    return bookmark;
}

string Book::toString() const {
    string answer;
    answer = "Title: " + getTitle() + " -Author: " + getAuthor(); // + string(length);
    return answer;
}

void Book::PrintDetails(ostream &theStream) const {
    theStream << "Title: " << getTitle() << " Author: " << getAuthor() << " length: " << getLength() << endl;

}
