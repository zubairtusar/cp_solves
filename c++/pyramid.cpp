#include<cstdio>

using namespace std;

int N;

void horicurse(int i, int j)
{
    if(j > i)
    {
        printf("\n");
        return;
    }
    printf("%4d",i);
    horicurse(i, j+1);
}

void recurse(int i)
{
    horicurse(i, 1);
    if( i >= N)
    {
        printf("Yo\n");
        return;
    }
    recurse(i+1);
    horicurse(i , 1);
    printf("YoYo\n");
}

int main()
{
    scanf("%d" ,&N);
    recurse(1);
}
