#include <iostream>

using namespace std ;
int main (){
    unsigned short n, k, i;
    cin >> n >> k;
    short arr[n];
    for(int i=0; i<n ; i++)
        cin >> arr[i];
    i = --k;
    if(arr[k] > 0){
        while(arr[k]==arr[i]) i++;
    }
    else {
        i = 0;
        while(arr[i]>0) i++;
    }
    cout << i << '\n';
    return 0;
}