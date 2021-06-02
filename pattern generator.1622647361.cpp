#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;
//half pyramid
 int row;
 int half_pyramid()
   {
     cin>>row;
     
      for(int i=1;i<=row;++i)
       {
       	for(int j=1;j<=i;++j)
       	 {
       	 	cout<<" * ";
			}
		cout<<endl;
	   }
	   
   }
   
//upside down half pyramid

int upside_down_half_pyramid()
 {
 	cin>>row;
 	 for(int i=row;i>=1;i--)
 	  {
 	  	for(int j=1;j<=i;++j)
 	  	 {
 	  	 	cout<<" * ";
			}
		cout<<endl;
	   }
 }

//full pyramid

 int fullpyramid()
  {
  	cin>>row;
  	 for(int i=1;i<=row;++i)
  	  {
  	  	for(int j=1;j<=2*row;++j)
  	  	 {
  	  	 	if((j>=row-i+1)&&(j<=row+i-1))
  	  	 	 cout<<"*";
  	  	 	 else
  	  	 	  cout<<" ";
			 }
		cout<<endl;
		}
  }
  
   //upside down pyramid
   
  int upside_down_fullpyramid()
    {
    	cin>>row;
    	 for(int i=row;i>=1;--i)
    	  {
    	  	for(int j=1;j<=2*row;++j)
    	  	 {
    	  	 	if((j>=row-i+1)&&(j<=row+i-1))
    	  	 	 cout<<"*";
    	  	 	else
    	  	 	 cout<<" ";
			   }
			cout<<endl;
		  }
	}
	
 //pascale triangle
 
   int pascale()
    {
    	cin>>row;
    	int space;
        int coef=1;
      for(int i=0;i<row;i++)
      { 
         for(int space=1;space<=row-i;space++)
             cout<<"  ";
	  
        for(int j = 0; j <= i; j++)
        {  
           
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            cout << coef << "   ";
        }
        cout << endl;
      }
    	
	}
	
  //circle 
    int mechanism(int x,int y)
          {
          	return sqrt(pow(x,2)+pow(y,2)) ;
		  }
    	 
   int invert_circle()
    {    
         int radius;
         cin>>radius;
         
         int horizontal=radius;
         int verticle =radius;
         
           for(int y=verticle; y>=-verticle;y-=2)
           {
		   
            for(int x=-horizontal;x<=horizontal;x++)
             {
             	if((int) mechanism(x,y)>=radius)
             	 cout<<"*";
             	else
             	 cout<<" ";
			 }
            cout<<endl;
		  }
	}
	
  //circle
  int circle()
   {
   	int r;
   	cin>>r;
   	 
   	  int length = r;
   	  int width =r;
   	  
   	   for(int y=width;y>=-width;y-=2)
   	    {
   	    	for(int x=-length;x<=length;x++)
   	    	 {
   	    	 	if((int)mechanism(x,y)<=r)
   	    	 	  cout<<"*";
   	    	 	else 
   	    	 	  cout<<" ";
				}
			cout<<endl;
		   }
   }
 
 int main()
  {
    half_pyramid();
  	upside_down_half_pyramid();
  	fullpyramid();
  	upside_down_fullpyramid();
  	pascale();
  	circle();
  	invert_circle();
  }