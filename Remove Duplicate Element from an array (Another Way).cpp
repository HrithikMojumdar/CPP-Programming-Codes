#include <iostream>
using namespace std;

int cnt[1000];

int main()
{
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        cnt[x]++;
        if(cnt[x] == 1){
            cout << x << " ";
        }
    }
    cout << endl;

    return 0;
}
