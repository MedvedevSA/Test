#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;
int main (){
    string str, del("aoyuei");
    cin >> str ;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    for(int i = 0; i<str.length(); ++i)
        for(int j = 0; j<del.length(); ++j)
            if(str[i]==del[j])
                str.erase(str.begin()+i--);
    for(int i = 0; i<str.length(); i+=2)
        str.insert(i,".");
    cout << str <<'\n' ;
    return 0;
}