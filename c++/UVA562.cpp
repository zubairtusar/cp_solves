#include<cstdio>
#define SIZE1 101
#define SIZE2 50001
using namespace std;

int M;
int A[SIZE1];
int Total;
int Ans;
int dp[SIZE1][SIZE2];

void initDP()
{
    int i, j;
    for(i=0; i<M; i++)
    {
        for(j=0; j<Total; j++)
        {
            dp[i][j] = -1;
        }
    }
}

int abs(int n)
{
    if(n<0)
        return -n;
    return n;
}

int solve(int i, int sum1)
{
    printf("##In solve## i: %4d  sum1: %4d\n", i, sum1);
    int sum2, left, right;
    if (dp[i][sum1]!=-1)
    {
        return dp[i][sum1];
    }
    if(i==M)
    {
        printf("##Returning## %d\n", abs(sum1-sum2));
        sum2 = Total-sum1;
        return dp[i][sum1] = abs(sum1-sum2);
    }
    printf("##Going Left##\n");
    left = solve(i+1, sum1);
    printf("##Going Right##\n");
    right = solve(i+1, sum1+A[i]);
    if(left<right)
        return dp[i][sum1] = left;
    else
        return dp[i][sum1] = right;
}

void readCase()
{
    int i;
    scanf("%d",&M);
    for(i=0; i<M; i++)
        scanf("%d",&A[i]);
}

void solveCase()
{
    int i;
    Total = 0;
    for(i=0; i<M; i++)
    {
        Total += A[i];
    }
    initDP();
    Ans = solve(0, 0);
}

void printCase()
{
    printf("Answer: %d\n", Ans);
}

int main()
{
    int N;
    //freopen("input.txt", "r", stdin);
    scanf("%d", &N);
    while(N--)
    {
        readCase();
        solveCase();
        printCase();
    }
    return 0;
}
