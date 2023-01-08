#include <iostream>
using namespace std;

int main(){
    int m, d, s;
    scanf("%d", &m);
    scanf("%d", &d);
    s=(m*2+d)%3;
    if(s==0){
    printf("普通");
    }else if(s==1){
        printf("吉");
    }else{
        printf("大吉");
    }
    return 0;
}
