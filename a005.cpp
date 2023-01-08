#include <iostream>
using namespace std;
int main(){
    int n, i, a, b, c, d;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d %d %d %d",&a, &b, &c, &d);
        
    if(d-c==c-b==b-a){
        printf("%d %d %d %d %d ",a, b, c, d, d+(b-a));
    }else{
        printf("%d %d %d %d %d ",a, b, c, d, d*(b/a));
    }
    }
    return 0;
}
