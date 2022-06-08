#include<iostream>
#include<string>
#include<string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
    int testcases;
    cin >> testcases;
    for(int tc=1; tc<=testcases; tc++){
        long int i, res=0, b;
        string a;
        cin >> a;
        cin.ignore();
        cin >> b;
        if(a[0]=='-')
            i=1;
        else
            i=0;
        for(; i<a.length(); i++){
            res = res*10 + (a[i] - '0');
            res = res%b;
        }
        if(res)
            cout << "Case " << tc << ": "<< "not divisible" << "\n";
        else
            cout << "Case " << tc << ": "<< "divisible" << "\n";
    }
    return 0;
}
