#ifndef GUESTDEF
#define GUESTDEF

#include<string>

class Guest{
    public:
        std::string name, roomType, arriveDate;
        int numberOfNights;
        double telephoneBill;
        virtual double CalculateBill();
};

#endif
