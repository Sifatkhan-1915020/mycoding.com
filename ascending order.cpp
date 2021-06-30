#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
 {
 	int array[10]={8,7,9,2,12,23,78,23,19,13};
 	
 	//descending order 
 	
 	 for (int i=0;i<10;i++)
 	  { 
 	  	 for(int j=0;j<(10-1);j++)
 	  	  {
 	  	  	 if(array[j]<array[j+1])
 	  	  	  swap(array[j+1],array[j]);
			 }
			 
	   }
	   cout<<"The descending order is : "<<endl;
	   for(int i=0;i<10;i++)
	    {  
	        
	    	cout<<array[i]<<"  ";
		}
       cout<<endl;
       
       //ascending order
       
 	 for (int i=0;i<10;i++)
 	  { 
 	  	 for(int j=0;j<(10-1);j++)
 	  	  {
 	  	  	 if(array[j]>array[j+1])
 	  	  	  swap(array[j],array[j+1]);
			 }
			 
	   }
	   
	   cout<<"The ascending  order is : "<<endl;
	   for(int i=0;i<10;i++)
	    {  
	        
	    	cout<<array[i]<<"  ";
		}
	   
	   
 }