#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    for(int tc=1; tc<=testcases; tc++){
        bool foundleap = false;
        char startmonth[15], endmonth[15];
        long long int i, startday, startyear, endday, endyear, result = 0;
        scanf("%s %lld, %lld" ,&startmonth , &startday, &startyear);
        scanf("%s %lld, %lld" ,&endmonth , &endday, &endyear);
        //cout << startmonth << "\n" << startday << "\n" << startyear << endl;
        //cout << endmonth << "\n" << endday << "\n" << endyear << endl;
        if(!(strcmp(startmonth, "January")==0 || (strcmp(startmonth, "February")==0))){
            startyear++;
        }
        if((strcmp(endmonth, "January")==0 || (strcmp(endmonth, "February")==0 && endday<29))){
            endyear--;
        }
        result = endyear/4 - (startyear-1)/4;
        result -= endyear/100 - (startyear-1)/100;
        result += endyear/400 - (startyear-1)/400;

        cout << "Case " << tc << ": "<< result << endl;
    }
}
