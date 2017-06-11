#include <iostream>

using namespace std;

int main (){
    unsigned short N, M ;
    cin >> N >> M;
    N = N/2*M + N%2*M/2;
    cout << N ;   
    return 0;
}
