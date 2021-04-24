#include <iostream>
 using namespace std;
 
 int main()
  {
  	int row;
  	cout<<"Put the Row Number ";cin>>row;
  	
  	 for(int i=1;i<=row;i++)
  	  {
  	  	for(int j=1;j<=i;j++)
  	  	 {
  	  	     if(i==row)
  	  	      {  
  	  	        cout<<" *";
				  }
			  else
			     {
			     	if(j==1||j==i)
			     	 cout<<" * ";
			     	else 
			     	 cout<<"  ";
				 }
			 }
			 cout<<endl;
		}
  }