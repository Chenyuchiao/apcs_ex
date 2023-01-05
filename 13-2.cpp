#include <iostream>
#include <stdio.h>
using namespace std;
struct Distance{
    int m;
    float cm;
};

int main(){
    struct Distance d1, d2;
    #if 1
    int m1;
    printf("please input a number: \n");
    scanf("%d", &m1);
    //cin >> m1;
    #endif 
    //cout << m1 << endl;
    d1.m  = m1/100;
    d1.cm  = m1%100;
    cout<<d1.m<<"m "<<d1.cm<<"cm"<<endl;
    
    return 0;
}
