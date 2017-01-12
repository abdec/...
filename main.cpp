#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void easy()
{
    int c[10],a[4][5];
    int i,j,x;
    srand(time(NULL));
    x=0;
    for(i=1;i<=10;i++)
        c[i]=0;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=5;j++)
        {
            x=rand() % 10 + 1;
            if(c[x]<2)
            {
                a[i][j]=x;
                c[x]++;
            }
        }
    }
    for(i=1;i<=4;i++)
    {
     for(j=1;j<=5;j++)
            cout<<a[i][j]<<" ";
     cout<<endl;
    }
}
int main()
{
    easy();
    return 0;
}
