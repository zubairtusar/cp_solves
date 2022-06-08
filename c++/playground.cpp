#include<stdio.h>
using namespace std;
int main()
{
    long long int number = 14814915658, sum = 0;
    while(number != 0){
        int digit = number % 10;
        sum+= digit;
        number = number/10;
    }
    printf("%d",sum);
}
