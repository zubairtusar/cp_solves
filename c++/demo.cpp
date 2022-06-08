#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int result = 1;
    sort(A.begin(), A.end());
    vector<int>::iterator itr;
    for( itr=A.begin(); itr<A.end(); itr++)
    {
        if(result == *itr) result++;
        else if(*itr > result) return result;
    }
    return result;
}

int main()
{
    // write your code in C++14 (g++ 6.2.0)
    vector<int> A;
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    A.push_back(4);
    A.push_back(5);
    cout << solution(A);
}
