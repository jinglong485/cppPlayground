#include"Ebook.hpp"
#include<string>

Ebook::Ebook() : Book(){
    format = "electronic";
}

Ebook::Ebook(std::string bookTitle) : Book(bookTitle){
    format = "electronic";
}
