/*1. Make a program that reads three floating point values: A, B and C. Then,
 calculate and show :
 a) The area of the triangle that has base A and height C.
 b) The area of the radius's circle C. (pi = 3.14159)
 c) The area of the trapezium which has A and B by base, and C by height. (1/2(A+B)*C)
 d) The area of the square that has side B.
 e) The area of the rectangle that has sides A and B.
 #include <iostream>
 #include <iomanip>
 #define pi 3.14159
 using namespace std;
 
 Input : 3.0 4.0 5.2
 
 Output :
 TRIANGLE: 7.800
 CIRCLE: 84.949
 TRAPEZIUM: 18.200
 SQUARE: 16.000
 RECTANGLE: 12.000
 
 */
#include <iostream>
#include <iomanip>
#define pi 3.14159
using namespace std;

int main ()
{
    cout << showpoint;
    cout <<fixed;
    cout << setprecision(3);
    double a,b,c;
    cin>>a>>b>>c;
    double tri= a*c/2;
    cout << "TRIANGLE:" <<tri;
    cout <<endl;
    double rad = (c*c)*pi;
    cout << "CIRCLE:" <<rad;
    cout <<endl;
    double trap=((a+b)/2)*c;
    cout << "TRAPEZIUM:" <<trap;
    cout <<endl;
    double squ=b*b;
    cout <<"SQUARE:" << squ;
    cout <<endl;
    double rec = a*b;
    cout << "RECTANGLE:" << rec;
    cout <<endl;
    
    return 0;
    
    
}
