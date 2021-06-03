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
    if(c> 1)
        return c * factorial(c - 1);
    else
        return 1;
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
	 
 	for(int i=0;i<n;i++)
 	    factorial(n);
     } 
 }