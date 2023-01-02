#include <stdio.h>
using namespace std;
int main(){
int n, i, a, b, max, min;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a);
scanf("%d",&b);
if(a>b){
max=a,min=b;
}else{
max=b,min=a;
}}
if(max-min==n-1){
printf("%d,%d",min,max,"yes");
}else{
printf("%d,%d",a,b,"no");
}
return 0;
}
