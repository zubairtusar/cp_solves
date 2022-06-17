#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int vids[N];
    int maxx = -1, summ = 0, minn = 10000;
    for(int i=0; i<N; i++)
    {
        cin >> vids[i];
        if(vids[i] > maxx)
            maxx = vids[i];
        if(vids[i] < minn)
            minn = vids[i];
        summ += vids[i];
    }

    int maxx_diff = maxx - minn;
    summ -= maxx;

    //cout << "maxx: " << maxx << endl;
    //cout << "minn: " << minn << endl;
    //cout << "maxx_diff: " << maxx_diff << endl;
    //cout << "summ: " << summ << endl;

    if(summ > maxx_diff)
        cout << "YES";
    else
        cout << "NO";
}
