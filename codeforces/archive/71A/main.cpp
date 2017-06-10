#include <iostream>
#include <string>

using namespace std;
int main()
{
    unsigned short n;
    cin >> n;
    string s[n];
    for(int i=0; i<n ; i++)
        cin >> s[i];
    for(int i=0; i<n ; i++)
    {
        if(s[i].length()<10)
            cout << s[i][0] <<s[i].length()-2 << s[i][s[i].length()-1]<<'\n';
        else    
            cout << s[i]<<'\n';
    }
    return 0;
}