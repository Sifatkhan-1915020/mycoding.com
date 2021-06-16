
#include <iostream>    //math.h  string  graphics.h
using namespace std;   //standard input output

int main()
{
int i, j, n,sum=0;
cin >> n;
int sum1=0;
for(i = 1; i <= n; i++)
{
for(j = i; j < n; j++)  //i=1 i=2 i=3 i=4 
{
cout << " ";    //spacing 
}
for(j = 1; j <= i; j++)
{
if(j == 1)
{
cout << i << " ";
}
if(j==n)
{
  for(int j=1;j<n;j++)
	cout<<i+j<<"  ";
}

}
for(j = 1; j < i; j++)
{
if(j == i-1 && j < n-1)
{
cout << i;
}
else
{
cout << "   ";
}
}
cout << endl;

  if(i==1 || i<=n-1)
   sum=sum+2*i;
  if(i==n)
  for(j=1;j<=n;j++)
    {
	sum1=n*n+((n-1)*n)/2;
	
    }
}

cout<<(sum-1)+sum1;
return 0;
}