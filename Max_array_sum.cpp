#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
using namespace std;

int main() {
	int array[10]={2,3,6,9,23,6,7,12,34,15};
    int best=0;	
	//O(n^3) time complexity 
	
	  for(int i=0;i<10;i++)
	   {
	   	for(int j=i;j<10;j++) 
	   	  {  
	   	  int sum=0;
	   	  	 for(int k=i;k<=j;k++)
	   	  	  {
	   	  	  	  sum+=array[k];
				   }
				   
			   best=max(best,sum);
			 }
	   }
	   cout<<best<<endl;
	
	//O(n^2) time complexity
	   
   for(int i=0;i<10;i++)
    {  
        int sum=0;
    	for(int j=i;j<10;j++)
    	 {
    	    sum=sum+array[j];
    	    best=max(best,sum);
		 }
	}

	cout<<best<<endl;
   
   
   //O(n) time complexity
    int sum=0;
   for(int i=0;i<10;i++)
    {
    	sum=max(array[i],sum+array[i]);
    	best=max(best,sum);
    
	}
    
   cout<<best<<endl;
   
   
   
   
   
   
}