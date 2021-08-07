/*
 Find out the largest and smallest numbers from the array.
 Input: Enter array elements
 10
 20
 30
 40
 50
 Output:
 
 Largest Value = 50
 Smallest Value = 10
 */
#include <iostream>
using namespace std;

int main ()
{
    int arr[100],i,max,min;
    for (i=0; i<5; i++) {
        cin >> arr[i];
        max=min=arr[0];

    }
    for (i=0; i<5; i++) {
        if (arr[i]>max) {
            max=arr[i];
        }
    }
    for (i=0; i<5; i++) {
        if (arr[i]<min) {
            min=arr[i];
        }
    }
    cout << "Largest Number :" << max <<endl;
    cout << "Smallest Value :" << min <<endl;
    return 0;
}

