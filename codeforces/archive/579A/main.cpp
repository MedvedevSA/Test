#include <iostream>
#include <bitset> 

using namespace std ;
int main (){
    unsigned long in;
    cin >> in;
    bitset<32> n(in);
    cout << n.count()<<'\n';    
    return 0;
}
