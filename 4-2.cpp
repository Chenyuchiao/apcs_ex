#include <iostream>
using namespace std;
int main(){
    float pi,r,temp;
    pi = 3.14 ;
    printf("please input r: ");
    scanf("%f", &r);
    if(r>=0){
    printf("A=pi*r*r=%f \n",pi*r*r);
    printf("L=2*pi*r=%f \n",2*pi*r);
    }else{
        printf("please input r: ");
    }
    
    
    return 0;
}
