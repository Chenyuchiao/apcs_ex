#include <iostream>
using namespace std;
int F(int n) {
    if (n>1)
    return n*F(n-1);
    else
        return 1;
}
int main(){
    int i;
    for(i=1;i<=10;i++){
        printf("%d! = %d\n",i,F(i));
    }
    cout<<"Hello World 1:" << F(1) <<" 2:" << F(2);
    return 0;
}
