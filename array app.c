#include <iostream>
#include <math.h>
#include <string>
#include <stdio.h>
#include <stddef.h>
using namespace std;

 
 
 int main()
 {
    int array[13]={1,1,2,2,3,4,4,4,5,5,5,5,6};
     
       for(int i=0;i<13;i++)
        {
           for(int j=i;j<13;j++)
           {
           	  if(array[i]==array[j])
           	   cout<<array[j]<<endl;
		   }
		}
 }