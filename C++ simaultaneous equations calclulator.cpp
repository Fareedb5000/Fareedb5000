#include <iostream>
#include<cmath>
#include<fstream>
#include <string>

using namespace std;




int main()
{

double x1;
double y1;
double c1;
double x2;
double y2;
double c2;


cout <<"I am a Simaultenous equation solver, i solve simaultaneous equations using cramers rule."<< endl;
cout<<"Insert value of x1:"<<endl;
cin >>x1;
cout<<"Insert value of y1:"<<endl;
cin >>y1;
cout<<"Insert value of c1:"<<endl;
cin >>c1;
cout<<"Insert value of x2:"<<endl;
cin >>x2;
cout<<"Insert value of y2:"<<endl;
cin >>y2;
cout<<"Insert value of c2:"<<endl;
cin >>c2;

float D = (x1*y2)-(x2*y1);
cout <<D;
cout <<"\nThis is the determinant of the 2X2 matrix formed by the constants of x1, y1, x2 and y2, to calculate, find the deteminant of the matrix formed."<<endl;

float Dx = (c1*y2)-(c2*y1);
cout <<Dx;
cout <<"\nThis is the determinant of the 2X2 matrix formed by the constants of c1, c2, y1 and y2"<<endl;

float Dy = (c1*x2)-(c2*x1);
cout <<Dy;
cout <<"\nThis is the determinant of the 2X2 matrix formed by the constants of c1, c2, x1 and x2"<<endl;

float valx = Dx/D;
cout <<valx;
cout<<"\n The value of x is" <<valx<<endl;

float valy = Dy/D;
cout <<valy;
cout<<"\n The value of y is" <<valy<<endl;
cout<<"To find the values of X and Y, divide the determinants of the X matrix and Y matrix respectively, by the determinant (D), found in the beginning of the calculation."

cout<<"We have come to the end of the program, thanks for using me and come again."<<endl;


return 0;}
