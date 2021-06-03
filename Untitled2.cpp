#include <iostream>

using namespace std;

int main()
 {
 	int high,low,t1=0,t2=1,next,sum=0;
 	cin>>high>>low;
 	
 	while(low<=high)
 	{  
 	   if(low==1)
 	    cout<<0<<",";
 	   if(low==2)
 	     cout<<1<<",";
 	     
 		next=t1+t2;
 		t1=t2;
 		t2=next;
 		
 		cout<<next<<",";
 		sum=sum+next;
 		low++;
   }
	cout<<endl;
	cout<<sum;
 }