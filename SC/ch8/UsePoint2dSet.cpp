#include<set>
#include<iostream>
#include"Point2d.hpp"

int main(int argc, char* argv[]){
    std::set<Point2d> points;
    Point2d origin(0, 0);
    points.insert(origin);
    points.insert(Point2d(-1, 3));
    points.insert(Point2d(-3, 8));
    points.insert(Point2d(0, 0));
    std::cout << "Number of points in the set is " << points.size() \
        << std::endl;
    std::set<Point2d>::const_iterator c;
    for(c=points.begin(); c!=points.end(); c++){
        std::cout << c->x << " " << c->y << std::endl;
    }

    return 0;
}
