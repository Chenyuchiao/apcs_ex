#include <iostream>
using namespace std;
int main(){
int n, i, a, b, c;
scanf("%d",&n);
for(i=0;i<n;i++){
//printf("input numbers: ");
//scanf("%d ,%d, %d", &a, &b, &c);
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
//printf("a=%d,b=%d,c=%d",a, b, c);
if(b*b + c*c == a*a){
printf("%d ", a);
}else if(a*a + c*c == b*b){
printf("%d ", b);
}else if(a*a + b*b == c*c){
printf("%d ", c);
}else{
//printf("input numbers: ");
}
}
return 0;
}
