#include <iostream>
using namespace std;
int main()
{
    int i, j,temp=0,a[100],n;
    cin >> n;
    for(i = 0;i < n;i++)
        cin >> a[i];
    for(i = 0;i < n;i++)
    {
        for(j = i-1;j >= 0;j--)
        {
            if(a[i] == a[j])
            {
                temp = 1;
            }
        }
        if(temp == 0)
        {
            cout << a[i];
        }
        temp = 0;
    }
    return 0;
}
