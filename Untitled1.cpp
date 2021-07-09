#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main()

{
	int array[]={5,2,1,3,4,10,6};
	int swap;
	int n=sizeof(array)/sizeof(array[0]);
    
	for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	  {
    	  	if(array[j]>array[j+1])
    	  	 {
    	  	 	swap=array[j];
    	  	 	array[j]=array[j+1];
    	  	 	array[j+1]=swap;
    	  	 	
			   }
		  }
	}
	
	for(int i=0;i<n;i++)
	 {
	 	cout<<array[i]<<" ";
	 }
}