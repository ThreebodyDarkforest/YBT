#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char str[10000];
int main()
{
    int top=0;
 
    gets(str);
    int len=strlen(str);
 
    for(int i=0;i<len;i++)
    {
        if(str[i]=='(')
            top++;
        else if(str[i]==')')
        {
            if(top>0)
                top--;
            else
                top++;
        }
    }
    if(top==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
