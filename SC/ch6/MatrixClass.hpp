#ifndef MATRIXHEADERDEF
#define MATRIXHEADERDEF

class MyMatrix{
    private:
        double** mMatrix;
    public:
        MyMatrix();
        MyMatrix(MyMatrix& A);
        MyMatrix(double a, double b, double c, double d);
        double Determinant() const;
        MyMatrix InverseMatrix() const;
        void ShowMatrix() const;
        MyMatrix& operator=(const MyMatrix& B);
        MyMatrix operator+(const MyMatrix& B);
        MyMatrix operator-(const MyMatrix& B);
        void ScalarMultiply(double a);
};
#endif
