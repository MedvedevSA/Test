#include <iostream>

using namespace std ;
int main()
{
    unsigned short n, count = 0;
    cin >> n;
    unsigned short arr[n]={0};
    for(int i=0; i<n ; i++){
        for(int j=0, k=0; j<3 ; j++){
            cin >> k;
            arr[i]+=k;
        }
        if( arr[i]>=2 ) count++;
    }
    cout << count ;
    return 0;
} 