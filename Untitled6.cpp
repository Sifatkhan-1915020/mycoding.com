/* C++ program to print hollow full pyramid pattern using numbers */
#include <iostream>
using namespace std;

int main()
{
int i, j, n;
cout << “Enter value of n : “;
cin >> n;
for(i = 1; i <= n; i++)
{
for(j = i; j < n; j++)
{
cout << ” “;
}
for(j = 1; j <= i; j++)
{
if(j == 1 || i == n)
{
cout << j << ” “;
}
else
{
cout << ” “;
}
}
for(j = 1; j < i; j++)
{
if(j == i-1 && j < n-1)
{
cout << j+1;
}
else
{
cout << ” “;
}
}
cout << endl;
}
return 0;
}