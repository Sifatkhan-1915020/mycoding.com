#include <iostream>
#include <math.h>

using namespace std;

int checker(int a)
 {
 	if(a%2==0)
 	 cout<<"it is even"<<endl;
 	else
 	 cout<<" it is odd"<<endl;
 }
 int prime_checker(int b)
{ 
 int flag=0;
  for(int k=2;k<=b/2;k++)
    {
	if(b%k==0)
      {
	   flag=1;
       break;
	   }
  }
     if(flag=1)
      cout<<"it is not prime";
     else
      cout<<"it is prime";

}
int factorial(int c)
{
    int fact=1;
    for(int i=c;i>=1;i--)
    {
    	fact=fact*i;
	}
	cout<<fact;
}


 
int main()
 {
 	int n;
 	cin>>n;
 	checker(n);
 	if(n%2==0)
 	 {
	  prime_checker(n);
     }
 	if(n%2!=0)
 	{
	 
 
 	    factorial(n);
     } 
 }