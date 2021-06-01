#include<cassert>

template<unsigned int DIM> class MyVector{
    private:
        double mArray[DIM];
        double mNumbers[2] = {0,1};
    public:
        double& operator[] (int index){
            double e = 1e-6;
            assert(mArray[index] >= -e);
            assert(mArray[index] <= 1.0 + e);
            if(mArray[index] >= -e and mArray[index] <= 0){
                return mNumbers[0];
            }
            else if(mArray[index] <= 1 +e and mArray[index] >=1){
                return mNumbers[1];
            }
            else{
                return mArray[index];
            }
        }
};
