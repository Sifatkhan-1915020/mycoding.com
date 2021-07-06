#include <bits/stdc++.h>
#include <string>
#include <utility>
using namespace std;

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

	  
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
        
 }