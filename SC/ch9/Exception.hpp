#ifndef EXCEPTIONDEF
#define EXCEPTIONDEF

#include<string>

class Exception{
    private:
        std::string mTag, mProblem;
    public:
        Exception(std::string tagString, std::string probString);
        void PrintDebug() const;
};


class OutOfRangeException :public Exception{
    public:
        OutOfRangeException(std::string probString);
};


class FileNotOpenException : public Exception{
    public:
        FileNotOpenException(std::string probString);
};
#endif
