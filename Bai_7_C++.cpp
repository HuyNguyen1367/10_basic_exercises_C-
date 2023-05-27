/*
* File: Bai_7_C++.cpp
* Author: Huy Nguyen
* Date: 15/04/2023
* Description: This is file for book
*/

#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <vector>
#include <stdarg.h>
#include <string.h>

using namespace std;

/*************************************Class Book**********************************/
class Book
{
private:
    /* data */
    char _nameofbook[50];
    char _author[50];
    uint16_t _year;
    uint16_t _quantity;
public:
    Book(const char* name, const char* author, uint16_t year, uint16_t quantity);
    void setQuantity(uint16_t quantity);

    char* getNameofBook();
    char* getAuthor();
    uint16_t getYear();
    uint16_t getQuantity();
    void showInformation();
};


Book::Book(const char* name, const char* author, uint16_t year, uint16_t quantity)
{
    strcpy(this->_nameofbook, name);
    strcpy(this->_author, author);
    this->_year = year;
    this->_quantity = quantity;
}

void Book::setQuantity(uint16_t quantity){
    this->_quantity = quantity;
}

char* Book::getNameofBook(){
    return _nameofbook;
}

char* Book::getAuthor(){
    return _author;
}

uint16_t Book::getYear(){
    return _year;
}

uint16_t Book::getQuantity(){
    return _quantity;
}

void Book::showInformation(){
    printf("Ten sach: %s\n", _nameofbook);
    printf("Ten tac gia: %s\n", _author);
    printf("Nam xuat ban: %s\n", _year);
    printf("So luong: %s\n", _nameofbook);

}

/**************************************Class Library********************************/
class Library
{
private:
    /* data */
    static vector<Book> _list_book;
public:
    Library(/* args */);
    void addBook(Book book);
    void borrowBook(const char* nameofbook, uint16_t quantity);
    void giveBookBack(const char* nameofbook, uint16_t quantity);
    void showListBook();
};

vector<Book> Library::_list_book;

Library::Library(/* args */)
{
}

void Library::addBook(Book book){
    _list_book.push_back(book);
}

void Library::borrowBook(const char* nameofbook, uint16_t quantity){
    if(_list_book.empty()){
        printf("CHUA CO DU LIEU SACH\n");
        return;
    }

    for(Book &book : _list_book){
        if(strcmp(book.getNameofBook(), nameofbook) == 0){
            if(book.getQuantity() < quantity){
                printf("SO LUONG SACH CON LAI KHONG DU\n");
                return;
            }
            printf("DA MUON THANH CONG\n");
            book.setQuantity(book.getQuantity() - quantity);
        }
    }
}

void Library::giveBookBack(const char* nameofbook, uint16_t quantity){
    if(_list_book.empty()){
        printf("CHUA CO DU LIEU SACH\n");
        return;
    }
    for(Book &book : _list_book){
        if(strcmp(book.getNameofBook(), nameofbook) == 0){
            printf("DA TRA THANH CONG\n");
            book.setQuantity(book.getQuantity() + quantity);
        }
    }
}

void Library::showListBook(){
    if(_list_book.empty()){
        printf("CHUA CO DU LIEU SACH\n");
        return;
    }
    printf("STT\tTEN SACH\tTAC GIA\t\tNAM\tSO LUONG\n");
    for(int i=0; i<_list_book.size(); i++){
        printf("%d\t%s\t%s\t%d\t%d\n", i, _list_book[i].getNameofBook(), _list_book[i].getAuthor(), _list_book[i].getYear(), _list_book[i].getQuantity());
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    Book book_1("Truyen Kieu", "Nguyen Du", 1234, 1000);
    Book book_2("Truyen Hai", "Nguyen Binh", 1567, 0);
    Book book_3("Truyen Sam", "Nguyen Khu", 1986, 500);

    Library library;
    library.addBook(book_1);
    library.addBook(book_2);
    library.addBook(book_3);
    library.borrowBook("Truyen Kieu", 100);
    library.borrowBook("Truyen Hai", 100);
    library.showListBook();
    library.giveBookBack("Truyen Kieu", 50);
    library.showListBook();
    return 0;
}