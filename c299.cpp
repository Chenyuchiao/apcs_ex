#include <iostream>
using namespace std;
int main(){
int n, i, a, b, max, min;
scanf("%d",&n);
for(i=1;i<n;i++){
scanf("%d", &a);
scanf("%d", &b);
}if(a>b){
max=a,min=b;
}else{
max=b,min=a;
}
if(max-min == n-1){
printf("%d %d yes",min,max);
}else{
printf("%d %d no",a,b);
}
return 0;
}
