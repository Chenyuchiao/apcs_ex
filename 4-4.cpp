#include <iostream>
using namespace std;
int main(){
    int a,b,temp;
    printf("please input your age: ");
    scanf("%d", &a);
    printf("please input your friend's age: ");
    scanf("%d", &b);
    if(a>b){
    printf("your age is the bigger");
    }else{
        printf("your friend's age is the bigger");
    }
    
    
    return 0;
}
