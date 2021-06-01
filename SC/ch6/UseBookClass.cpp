#include<iostream>
#include"Book.hpp"

int main(int argc, char* argv[]){
    Book promotion_book;
    Book a_book;

    promotion_book.author = "LOL";
    promotion_book.title = "This is a title";
    promotion_book.publisher = "Fool";
    promotion_book.price = 222;
    promotion_book.format = "digital text";
    promotion_book.SetYearOfPublication(1979);

    Book another_book(promotion_book);
    Book an_extra_book("What is the title?");

    std::cout << "Year of publication of " << promotion_book.title << " is " << promotion_book.GetYearOfPublication() << std::endl;
    std::cout << "The default info is " << a_book.title << std::endl;
    std::cout << "The copied book has a title as " << another_book.title << std::endl;
    std::cout << "The copied book has a author as " << another_book.author << std::endl;
    std::cout << "The extra book has a title as " << an_extra_book.title << std::endl;
    std::cout << "The extra book has the author as " << an_extra_book.author << std::endl;
    
    Book* p_book_crazy = new Book;
    std::cout << "The pointer of Book class has a author as " << (*p_book_crazy).author << std::endl;
    p_book_crazy -> title  = "WTF";
    std::cout << "The pointer of Book class has a title as " << (*p_book_crazy).title << std::endl;
    Book* p_book_copied = new Book(*p_book_crazy);
    delete p_book_crazy;
    Book* p_book_preset = new Book("hahaha");
    std::cout << "The preset book pointer has a title as " << (*p_book_preset).title << std::endl;
    delete p_book_preset;
    std::cout << "The copied book pointer has a title as " << (*p_book_copied).title << std::endl;
    delete p_book_copied;
    
    return 0;
}
