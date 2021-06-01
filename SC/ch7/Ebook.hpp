#ifndef EBOOKHEADERDEF
#define EBOOKHEADERDEF

#include<string>
#include"Book.hpp"

class Ebook: public Book{
    public:
        Ebook();
        Ebook(std::string bookTitle);
        std::string hiddenUrl;
};

#endif
