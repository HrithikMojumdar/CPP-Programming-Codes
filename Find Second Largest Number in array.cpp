#include <iostream>
using namespace std;

int main ()
{
    int arr[50],i,n,max,max2;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> arr[i];
    }
    max=max2=arr[0];
    
    for (i=0; i< n; i++) {
        if (max<arr[i]) {
            max2=max;
            max=arr[i];
        }
    }
    cout <<"The Second Largest Number Is:" << max2 <<endl;
}
