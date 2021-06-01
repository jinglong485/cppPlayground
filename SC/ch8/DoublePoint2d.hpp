#ifndef DOUBLEPOINTHEADERDEF
#define DOUBLEPOINTHEADERDEF
#include<cmath>

class DoublePoint2d{
    public:
        double x,y;
        DoublePoint2d(double a, double b){
            x = a;
            y = b;
        }
        bool operator<(DoublePoint2d& z){
            if(abs(x -z.x ) < 1.0e-8){
                if(abs(y - z.y) < 1.0e-8){
                    return false;
                }
                else if(y < z.y){
                    return true;
                }
            }
            else if(x < z.x){
                return true;
            }
            else{
                return false;
            }
        }
};
#endif
