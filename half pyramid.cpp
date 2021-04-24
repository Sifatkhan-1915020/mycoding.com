#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main(){
	int row;
	cout<<"Input a value of row : ";cin>>row;
	for(int a=1;a<=row;a++)
	 {
	 	for(int b=1;b<=a;b++)
	 	 {
	 	 	cout<<" * ";
		  }
		  cout<<endl;
	 }
}