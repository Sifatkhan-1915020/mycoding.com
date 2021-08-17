
/*marge sort,bubble sort,insertation sort,selection sort,quick sort,Heap sort,redix sort,bucket sort
linear searching ,binary searching,jump search,interpolation search,sublist search,fibonacci search
prime number,fibonacci number*/

#include <bits/stdc++.h>

using namespace std;

//marge sort

int marge(int arr[],int left,int middle, int right){
	
	int n1 = middle -left+1; //fixing the separated array element number 
	int n2 =right-middle;
	
	int L[n1],R[n2];     //making two sub-array
	
	 for(int i=0;i<n1;i++)
	  L[i]=arr[left+i];     //making relation with main array
	 for(int j=0;j<n2;j++)
	  R[j]=arr[middle+1+j];
	  
	  int i=0;
	  int j=0;
	  int k=left;
	 
	 
	 // marging step
	 
	 while (i<n1 &&  j<n2)
	  {
	  	if(L[i]<=R[j])
	  	 {
	  	 	arr[k]=L[i];
	  	 	i++;
		   }
		else{
			arr[k]=R[j];
			j++;
		}
		k++;
	  }
	  
	//sequecing and finalization
	
	while(i<n1)
	 {
	 	arr[k]=L[i];
	 	i++;
	 	k++;
	 }
    
    while(j<n2)
     {
     	arr[k]=R[j];
     	j++;
     	k++;
	 }
	  
}

int margeSort(int arr[],int l,int r)
 {
 	if(l<r) 
 	{
 		int middle =(l+r)/2;
 		
 		 margeSort(arr,l,middle);
 		 margeSort(arr,middle+1,r);
 		 
 		marge(arr,l,middle,r);
	 }
	 
 }



//bubble sorting 

int bubbleSorting(int array[],int size){
	int swap;
	 for(int i=0;i<size;i++)
	  {
	  	for(int j=0;j<size;j++)
	  	 {
	  	 	if(array[j+1]<array[j])
	  	 	 {  
	  	 	     swap=array[j];
	  	 	     array[j]=array[j+1];
	  	 	     array[j+1]=swap;
	  	 	 	
				}
		   }
	  }
	
}
 

//insertation sorting

void insertSorting(int array[],int size) {
	 
	  int swap;
	  
	   for(int i=0;i<size;i++)
	    { 
	      int j=i;
	    	while(j>0 && array[j]<array[j-1])
	    	 {
	    	 	swap=array[j];
	    	 	array[j]=array[j-1];
	    	 	array[j-1]=swap;
	    	 	
	    	 	j--;
			 }
		}
	
}

//binry searching 

/*int binarySea(int array[],int left,int right,int x)
 {  
    while(left<=right) {
	
 	int midddle =(left+right)/2;
 	 if(array[middle]==x)
 	  return middle;
 	 if(array[middle]<x)
 	  right=middle;
 	 if(array[middle]>x)
 	  left=middle;
     }
     return -1;
     
 }*/
 
 

 
 
 
 
 
 void  print(int arr[],int size){
 	for(int i=0;i<size;i++)
 	 cout<<arr[i]<<" ";
 }

int main(){
	int array[]={23,34,2,45,12,67,1,2,4,89,99,6,15,17};
	int size=sizeof(array)/sizeof(array[0]);
	
 	margeSort(array,0,size-1);
 	bubbleSorting(array,size);
    insertSorting(array,size);
	cout<<" after sorting : "<<endl;
	print(array,size);
	
	return 0;
}




