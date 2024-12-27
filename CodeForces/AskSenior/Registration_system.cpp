#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        vector<string>v;
        int c=0;
        for(int i=0;i<v.size();i++){
            if(s==v[i]){
                c++;
                
            }
            else{
                v.push_back(s);
            }
        }
        if(c==0){
            cout << "OK" << endl;
        }
        else{
            cout << s << c << endl;
        }
    }
    return 0;
}