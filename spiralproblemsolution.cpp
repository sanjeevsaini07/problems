#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;

cin>>n;

if(n<0 || n>10)
{
    return 0;
}



string a[n][n];
string z=" ",y="*";
//cin>>y;

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        a[i][j]=z;
    }
}

int p=0;
int len=n;
int check=0;
/*for first line */
for(int j=0;j<n;j++)
{
    a[p][j]=y;
}


for(check=0;check<n-1;check++)
{   int w=check%4;

switch(w)
{

case 0:
  for(int i=p+1;i<=len-1;i++)
    {
        a[i][len-1]=y;
    }

break;

case 1:
    for(int j=len-1;j>=p;j--)
    {
        a[len-1][j]=y;
    }

break;

case 2:
    for(int i=len-2;i>=p+2;i--)
    {
        a[i][p]=y;
    }

break;
case 3:
    for(int j=p+1;j<=len-3;j++)
    {
        a[p+2][j]=y;
    }
    p=p+2;
    len=len-2;

break;
}


}
/*for last line*/
/*if(n%2==0 && n>4)
{
    a[n/2][n/2]=y;
}*/

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<"\n";
}

    return 0;
}
