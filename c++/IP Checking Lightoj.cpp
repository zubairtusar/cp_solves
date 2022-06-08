#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

long long todec(string& num)
{
    long long dec= num[0] - '0';
    for(int i=1; num[i]; i++){
        dec*= 2;
        dec+= num[i] - '0';
    }
    return dec;
}

int main(){
    int testcase;
    cin >> testcase;
    for(int tc = 1; tc <= testcase; tc++){

        int a, b, c, d;
        string ia, ib, ic, id;
        int flag = 0;

        scanf("%d.%d.%d.%d", &a, &b, &c, &d);
        cin.ignore(); //clears input buffer
        getline(cin, ia, '.');
        getline(cin, ib, '.');
        getline(cin, ic, '.');
        getline(cin, id);

        if(a == todec(ia) && b == todec(ib) && c == todec(ic) && d == todec(id))
        {
            flag = 1;
        }
        printf("Case %d: %s\n", tc, ((flag)?"Yes" : "No"));
    }
}
