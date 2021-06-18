#include <iostream>
#include <math.h>

using namespace std;

int main()
 {
 	int array[3][3];
 	int k=1;
 	  for(int i=0;i<3;i++)
 	   {
 	   	  for(int j=0;j<3;j++)
 	   	   {
 	   	   	   array[i][j]=k++;
			   }
		}
		
		for(int i=0;i<3;i++)
 	   {
 	   	  for(int j=0;j<3;j++)
 	   	   {
 	   	   	   cout<<array[i][j]<<" ";
			   }
		 cout<<endl;
		}
 }