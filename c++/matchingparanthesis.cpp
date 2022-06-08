#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100] = "";
    stack<char> par;
    for(int i=0; i<strlen(str); i++)
    {
        printf("index: %d \n",i);
        if(str[i] == '[' || str[i] == '{' || str[i] == '(')
        {
            par.push(str[i]);
        }
        if( !par.empty() )
        {
            if(str[i] == ']')
            {
                if(par.top() != '[')
                {
                    printf("invalid %c vs %c\n", str[i], par.top());
                    return 0;
                }
                else
                {
                    par.pop();
                }
            }
            if(str[i] == '}')
            {
                if(par.top() != '{')
                {
                    printf("invalid %c vs %c\n", str[i], par.top());
                    return 0;
                }
                else
                {
                    par.pop();
                }
            }
            if(str[i] == ')')
            {
                if(par.top() != '(')
                {
                    printf("invalid %c vs %c\n", str[i], par.top());
                    return 0;
                }
                else
                {
                    par.pop();
                }
            }
        }
        else
        {
            printf("invalid stack empty\n");
            return 0;
        }
    }
    printf("valid");
}
