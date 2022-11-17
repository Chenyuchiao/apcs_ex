#include <iostream>
#include <stdio.h>
using namespace std;

int fun(int x){
     int y;
     if (x<0){
             y=1;
        }else if(x>0){
             y=3;
        }else
             y=5;
    
    return y;
}  
    
int main(){
    int x, y;
    
    printf("please input a number: ");
    scanf("%d",&x);
    
   y = fun(x);
   printf("y = %d \n ", y);
   return 0;
}
