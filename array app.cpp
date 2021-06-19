#include <iostream>
#include <math.h>
#include <string>
#include <stdio.h>
#include <stddef.h>
using namespace std;

 
int main()
 {  
   int array[]={1,2,3,4,5};
   
 // array;
    cout<<*(&array+1)-array;
 }