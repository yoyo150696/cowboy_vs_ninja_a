#include "Point.hpp"


using namespace ariel;
using namespace std;

Point::Point(){}
Point::Point(double xlab,double ylab){
    x_label = xlab;
    y_label = ylab;
}
double Point::getx()const{return x_label;}
double Point::gety()const{return y_label;}
double Point::distance(const Point& other){
    return 0;
}
Point Point::moveTowards(Point& start,Point& end,double dis){return Point(0,0);}
bool operator==(const Point& lhs, const Point& rhs) {
        return (lhs.getx() == rhs.getx() && lhs.gety() == rhs.gety());
        }