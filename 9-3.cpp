#include <iostream>
#include <stdio.h>
using namespace std;
int add(int w, int h){
    return w*h;
   

}
    
    
int main(){
    int w,h;
    
    printf("please input long:");
    scanf("%d",&w);
    printf("please input high:");
    scanf("%d",&h);
    
    printf("A = %d\n",add(w,h));
    
    return 0;
}
