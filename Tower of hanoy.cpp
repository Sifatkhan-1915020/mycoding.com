#include <bits/stdc++.h>

using namespace std;

int towerOfHanoi(int start, int end,char source,char aux,char destination)
{
	 
	 
	if(start>end)
	{   
	     return -1;
		 
	}

else {

	
	 	towerOfHanoi(start,end-1,source,destination,aux); //first a to c
	 	cout<<"move "<<source<<" to "<<destination<<endl; //printing
	 	towerOfHanoi(start,end-1,aux,source,destination); //second phase b to a
	 	
	
    }

}




int main()
 {  
    const int start=1;
    
    int end;   //total disk number 
    cout<<"put the total number of disk : ";
    cin>>end;
    cout<<endl;
    
 	towerOfHanoi(start,end,'A','B','C');
 	
 	int totalMove=pow(2,end)-1;
 	
 	cout<<totalMove<<endl;
	
 }