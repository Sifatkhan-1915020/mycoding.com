#include <iostream>
#include <math.h>
#define pi 3.1915

 using namespace std;
 
int main(){
	float angle,distance_X,height_Y,time,velocity;
	cout<<" Enter the Airplane Angle with Below the Horizontal (degree) : ";
	 cin>>angle; //angle as input
	cout<<"Enter the decoy falling  distance in the horizontal (m) : ";
	 cin>>distance_X; //max distance in the horizontal
	cout<<"Enter the velocity of the Airplane (kmh) : ";
	 cin>>velocity;
	  
	 
	 velocity=(velocity*10)/36; //kmh to meter per second
	 angle=angle*(pi/180); //degree to radian converter
	 
	 time=distance_X/(velocity*cos(angle));
	 height_Y= tan(angle)*distance_X;
	 
	 cout<<endl;
	 
	 cout<<"The decoy in the air time "<<time<<" second"<<endl;
	 cout<<"The height of the decoy at the time of relase "<<height_Y<<" meter"<<endl;
	 
	 
}