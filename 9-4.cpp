#include <iostream>
#include <stdio.h>
using namespace std;
int add(int x, int y){
    return 60*x+y;
   

}
    
    
int main(){
    int h,m;
    
    printf("please input hours:");
    scanf("%d",&h);
    printf("please input minutes:");
    scanf("%d",&m);
    
    printf("M = %d\n",add(h,m));
    
    return 0;
}
