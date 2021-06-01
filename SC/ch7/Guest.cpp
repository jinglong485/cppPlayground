#include "Guest.hpp"

double Guest::CalculateBill(){
    return telephoneBill + ((double)(numberOfNights))* 50.0;
}
