#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int cmp(pair<int, int> a, pair<int, int> b){
    if(a.second > b.second){
        return 0;
    }else if(a.second < b.second){
        return 1;
    }else if(a.first > b.first){
        return 1;
    }
    return 0;
}
int main(){
    vector<pair<int, int>> a(1001);
    for(int i=1; i<=1000; i++){
        a[i].first = i;
        a[i].second = 0;
    }
    for(int i=1; i<=1000; i++){
        for(int j=i; j<=1000; j=j+i){
            a[j].second++;
        }
    }
    sort(a.begin(), a.end(), cmp);

    int testcases;
    cin >> testcases;
    for(int x=1; x<=testcases; x++){
        int val;
        cin >> val;
        cout << "Case " << x << ": " << a[val].first << endl;
    }
}
