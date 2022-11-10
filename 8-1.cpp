#include <iostream>

using namespace std;

int main()
{
    int i,sum=0; 
    for(i=1;i<1001;i+=2){
    sum = sum + i;
    }
    printf("total=%d \n" ,sum);
    
    return 0;
}
