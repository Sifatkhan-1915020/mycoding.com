#include <iostream>
#include <math.h>

using namespace std;

int main()
 {  
 int row;
 cin>>row;
 int x=1;
 	for(int i=1;i<=row;i++)
 	 {  
 	   for(int space=1;space<=row-i;space++)
 	    cout<<" ";
 	 	for(int j=1;j<=i;j++)
 	 	 {
 	 	 	cout<<x++;
		   }
		cout<<endl;
	  }
 }