#include <bits/stdc++.h>
#include <math.h>
#include <string>
#include <utility>
using namespace std;



 int binarySearch(int ar[],int left,int right,int x)
   {
   	   while(left<=right)
   	     { 
   	         int middle =(left+right-1)/2;
   	           
   	           
   	           if(ar[middle]==x)
   	            {
					 return middle ;  // finding strategy
				}
   	           if(ar[middle]<x)
   	             left = middle+1; //if not strategy work ,method 1
   	           else 
   	             right =middle-1; //if not strategy work .method 2
			}
			 return -1;
}











int main()
 {
 	vector <int> v ={2,8,9,9,3,4,5,6,6,7};
      sort (v.begin(),v.end());
      //int x =v.size();
     // cout<<x;
      for(int i=0;i<v.size();i++)
       {
       	 cout<<v[i]<<"  ";
	   }
	   cout<<endl;
 	sort(v.rbegin(),v.rend());
 	
 	  for(int i=0;i<v.size();i++)
       {
       	 cout<<v[i]<<"  ";
	   }
	  
	  cout<<endl;
      
       
	 int array[]={3,4,5,6,7,22,33,90,12,-1};
	 
	
	 int x =sizeof(array)/sizeof(array[0]); //finding the size of array and update n
	 
	  sort(array,array+x);
        
    //printing array
    
       for(int i=0;i<x;i++)
        {
        	cout<<array[i]<<" ";
		}
	
	// string niye gutaguti
	
	cout<<endl;
		
    string a="sifat_khan";
    string b = a+a;
    cout<<b<<endl;  // print the sum of two string 
    b[5]='c';
    cout<<b<<endl;
    string c=b.substr(3,5);
    cout<<c<<endl;
    
    sort(a.begin(),a.end());
     cout<<a<<endl; // string sorting in ascending order
    
    sort(a.rbegin(),a.rend());
     cout<<a<<endl;
    
    
    
    // vector and pair
    // 0  sifat 24 ; 1 rafi 34;....
     int sum=0;
     
    vector <pair<string,int> > vec;
	vector <pair<string,int> >::iterator it;
     vec.push_back(make_pair("sifat",24));
     vec.push_back(make_pair("rafi",34));
     vec.push_back(make_pair("Farabi",56));
     
     for(it=vec.begin();it!=vec.end();it++)
      { 
        sum=sum+it->second;
      	cout<<it->first<<" "<<it->second<<endl;
	  }
      
      cout<<"they are total number "<<sum<<endl;
    
    //tuple and vector sorting
    
    vector <tuple<int,int,int>> vect ;
      
      //vector<tuple<int,int,int>>::iterator ito;
      
     vect.push_back({1,2,3});
     vect.push_back({1,5,6});
	 vect.push_back({3,5,9});
	 
	 sort(vect.begin(),vect.end()); //vector sorting 
	  
     //for some reason im not printing it now 7/6/2021  10:39 am

	  
    // nearest point finding.Think you are in the (0,0) point and there are many points where your friends are
    //standing.Find out the nearest one.
    
    vector < pair<int,int>> pos;
     vector <pair<int,int>>::iterator p;
     
     pos.push_back(make_pair(2,3));
     pos.push_back(make_pair(4,5));
     pos.push_back(make_pair(2,2));
     pos.push_back(make_pair(2,4));
    
    sort(pos.begin(),pos.end());
    
      cout<<"size of vector is "<< pos.size()<<endl;
     
      vector<float> dis;
      
    for(int i=0;i<pos.size();i++)
     {
        float  distance =0;
         distance = (float)sqrt((pos[i].first-2)*(pos[i].first-2)+(pos[i].second-3)*(pos[i].second-3));
        cout<<distance<<endl;
         dis.push_back(distance);
	 }
    
    typedef vector<tuple<float,int,int>> tp;
     tp t;
    for(int i=0;i<pos.size();i++)
     {
     	 
     	t.push_back(tuple<float,int,int>(dis[i],pos[i].first,pos[i].second) );
        
	 }
     
    sort(t.begin(),t.end());
    for (tp::const_iterator i = t.begin(); i !=  t.end(); ++i) {
        cout <<get<0>(*i) <<","<<get<1>(*i)<<","<<get<2>(*i)<<endl;
           
    }
    
    //searching :binary;
  /* binary search is basically an algorithm to find out an element of array .if the number of the element is
     n  and if we can write it as , 2^k = n where ovioulsy k<n then we can say that it needs only k steps to find
     out the element.Its time complexity is O(log(base2)N).
     it is faster  (n/k) times than linear searching.
     
        algorithm :
            fistly   elememnt n and make it half so
               left index=0   right index =n-1
               while (left<=right)
                 midddle , middle <x left , middle >x right 
                 for everything false return -1 */
                 

     int garray[]={23,22,21,55,45,12,3,33,44,12,23,34};
     
     int   element =sizeof(garray)/sizeof(0);
      cout<<element<<endl;
     sort(garray,garray+element);
     
       auto r= equal_range(array,array+element,12);
       cout<<r.second-r.first<<endl;
     
      for(int i=0;i<element;i++)
       {
       	 cout<<garray[i]<<" ";
	   }
	   cout<<endl;
      int search_object;
      
      cin>>search_object;
      
     int result= binarySearch(garray,0,element-1,search_object);
     
       if(result!=-1)
        {  
        cout<<"you searched to find "<<search_object<<" which is in the position(s) :"<<endl;
           cout<<result+1<<endl;
        	for(int i=result+1;i<element-1;i++)
        	 {
        	 	if(garray[i]==search_object)
        	 	 {
				   cout<<i+1<<endl;
			     break;
			   }
			
		}
		
      
  }
      else
         {
         	cout<<"amago kache ei maal nai bhai "<<endl;
		 }
      
      


 
			 

  
    
    
    
    
    
    
    
    
    
        
 }