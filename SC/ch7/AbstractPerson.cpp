#include<iostream>

class AbstractPerson{
    public:
        virtual void Print() = 0;
};


class Mother : public AbstractPerson{
    public:
        virtual void Print(){
            std::cout << "Mother" << std::endl;
        }
};


class Daughter : public Mother{
    public:
        virtual void Print(){
            std::cout << "Daughter" << std::endl;
        }
};

int main(int argc, char* argv[]){
    AbstractPerson* p_mother = new Mother;
    AbstractPerson* p_daughter = new Daughter;
    //AbstractPerson* p_error = new AbstractPerson;
    p_mother->Print();
    p_daughter->Print();
    //p_error->Print();
    delete p_mother;
    delete p_daughter;
    //delete p_error;

    return 0;
}
