#include <iostream>
using namespace std;

class Point
{
    public:
	double x;
	double y;
};


class Vector
{
     public:
	Point start;
	Point end;
};


int main()
{
	Vector v1;
	v1.start.x=3.0;
	v1.start.y=4.0;
	v1.end.x=5.0;
	v1.end.y=6.0;
	Vector v2;
	v2.start.x=5.0;
	v2.start.y=7.0;
	v2.end.x=3.0;
	v2.end.y=8.0;
}
