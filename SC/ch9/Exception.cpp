#include<iostream>
#include"Exception.hpp"

Exception::Exception(std::string tagString, std::string probString){
    mTag = tagString;
    mProblem = probString;
}

void Exception::PrintDebug() const{
    std::cerr << "** Error ("<<mTag<<") **" << std::endl;
    std::cerr << "Problem: " << mProblem << std::endl << std::endl;
}

OutOfRangeException::OutOfRangeException(std::string probString):Exception("RANGE", probString){ 
}

FileNotOpenException::FileNotOpenException(std::string probString):Exception("File", probString){
}
