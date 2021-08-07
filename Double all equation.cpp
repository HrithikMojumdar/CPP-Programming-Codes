#include <iostream>
#include <iomanip> // use for using setprecision function
using namespace std;

int main() {
    cout << showpoint; //Use for showing number after Decimal
    cout << fixed;
    cout << setprecision(10); // Use for showing how many number want to print after decimal
    double a,b;
    cin >>a >> b;
    double sum = a+b;
    cout << "Sum is:" <<sum;
    cout << endl;
    cout <<noshowpoint; // Use for not showing number after decimal
    double sub =a-b;
    cout << "Sub Is: " << sub;
    cout << endl;
    cout << showpoint;
    double mul =a*b;
    cout << "Mul Is : "<< mul;
    cout << endl;
    double div = a/b;
    cout << "Div Is:" << div;
    cout << endl;

    
    return 0;
}
