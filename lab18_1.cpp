#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
	double x1=R1.x,x2=R1.x+R1.w,y1=R1.y,y2=R1.y-R1.h,area;
    if (R2.x > x1) x1 = R2.x;
    if (R2.y < y1) y1 = R2.y;
    if (R2.x+R2.w < x2) x2 = R2.x+R2.w;
    if (R2.y-R2.h > y2) y2 = R2.y-R2.h;
    area = (x2-x1)*(y1-y2);
    if (area > 0) return area;
    return 0;
}

