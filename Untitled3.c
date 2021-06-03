#include <iostream> 
#include <math.h>

using namespace std;

int main()
  {  
     int row;
     cin>>row;
  	 for(int i=1;i<=row;i++)
  	  {
  	  	for(int j=i;j<row;j++)
  	  	 {
  	  	 	cout<<" ";  // side sopace
			 }
		 for(int j=1;j<=2*row-1;j++)
		 {
		 	if(i==row||j==1||j==2*row-1)
		 	 cout<<i;        //number printing
		 	 
		 	else
		 	 cout<<" ";
		 }  
		 cout<<endl;
		}
  	  
  }
