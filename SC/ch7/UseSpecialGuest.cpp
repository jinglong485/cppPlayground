#include<iostream>
#include"Guest.hpp"
#include"SpecialGuest.hpp"

int main(int argc, char* argv[]){
    Guest* p_gu1 = new Guest;
    Guest* p_gu2 = new Guest;
    Guest* p_gu3 = new SpecialGuest;

    p_gu1->numberOfNights = 3;
    p_gu1->telephoneBill = 0.00;
    p_gu2->numberOfNights = 3;
    p_gu2->telephoneBill = 0.00;
    p_gu3->numberOfNights = 3;
    p_gu3->telephoneBill = 0.00;

    std::cout << "Bill for guest 1 is " << p_gu1->CalculateBill() << std::endl;
    std::cout << "Bill for guest 2 is " << p_gu2->CalculateBill() << std::endl;
    std::cout << "Bill for guest 3 is " << p_gu3->CalculateBill() << std::endl;
    delete p_gu1;
    delete p_gu2;
    delete p_gu3;
    return 0;
}
