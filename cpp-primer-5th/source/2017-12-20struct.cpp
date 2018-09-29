#include<iostream>
struct Book
{
    std::string bookName;
    int bookNumber;
};

int main()
{
    Book book;
    book.bookNumber = 1;

    std::cout<<"Input your BookName and Book Number"<<std::endl;
    std::cin>>book.bookName>>book.bookNumber;
    std::cout<<"Book Name: "<<book.bookName<<" Book Number: "<<book.bookNumber<<std::endl;

    return 0;
}
