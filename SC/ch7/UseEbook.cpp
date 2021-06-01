#include<iostream>
#include"Ebook.hpp"

int main(int argc, char* argv[]){
    Ebook holiday_reading;
    holiday_reading.title = "The skull beneth the skin";
    holiday_reading.author = "P D James";
    std::cout << "The author is " << holiday_reading.author << std::endl;
    std::cout << "The title is " << holiday_reading.title << std::endl;
    std::cout << "The format is " << holiday_reading.format << std::endl;
    holiday_reading.SetYearOfPublication(1992);
    std::cout << "Year of publication is " << holiday_reading.GetYearOfPublication() << std::endl;
    holiday_reading.hiddenUrl = "https://www.youtube.com/watch?v=dQw4w9WgXcQ";
    std::cout << "The URL comes with the book is: " << holiday_reading.hiddenUrl << std::endl;
    Ebook another_book("Never gonna give you up");
    std::cout << "The second book is " << another_book.title << std::endl;
    std::cout << "The format of second book is " << another_book.format << std::endl;

    return 0;
}
