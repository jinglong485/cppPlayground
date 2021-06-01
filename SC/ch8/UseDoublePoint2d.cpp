#include"DoublePoint2d.hpp"
#include<iostream>
#include<vector>
#include<algorithm>

int main(int argc, char* argv[]){
    std::vector<DoublePoint2d> points;
    points.push_back(DoublePoint2d(5.3, 21.4));
    points.push_back(DoublePoint2d(5.3, 22.4));
    points.push_back(DoublePoint2d(5.3, 23.4));
    points.push_back(DoublePoint2d(5.3, 24.4));
    points.push_back(DoublePoint2d(5.3, 25.4));
    points.push_back(DoublePoint2d(6.3, 22.4));
    points.push_back(DoublePoint2d(5.4, 22.4));
    points.push_back(DoublePoint2d(56.3, 22.4));
    points.push_back(DoublePoint2d(5.36, 22.4));
    std::cout << "There are " << points.size() << " points in the vector"\
        << std::endl;
    for(auto c = points.begin(); c!=points.end(); c++){
        std::cout << c->x << " " << c->y << std::endl;
    }
    sort(points.begin(), points.end());
    std::cout << "There are " << points.size() << " points in the vector"\
        << std::endl;
    for(auto c = points.begin(); c!=points.end(); c++){
        std::cout << c->x << " " << c->y << std::endl;
    }

    return 0;

}

