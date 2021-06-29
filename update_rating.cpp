#include <iostream>
#include <math.h>

using namespace std;

int main()
 {  
 	int array[]={23,24,88,6,9,23,45,67,123,22,89,90};
 	int n = sizeof(array)/sizeof(array[0]);
 	int b,k;
 	  for(int i=0;i<n;i++)
 	   {
 	   	 b=max(b,array[i]);
 	   	if(array[i]==b)
 	   	  k=i;
		}
	 for(int i=0;i<n;i++)
	   {
	   	array[i]=(float)array[i]/b;
	   	cout<<array[i]<<"  ";
	   }
	cout<<"index "<<k<<" is heighst  "<<b<<endl;
 }