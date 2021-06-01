#include "SpecialGuest.hpp"

double SpecialGuest::CalculateBill(){
    return 45 + ((double)(numberOfNights - 1)) * 40.0;
}
