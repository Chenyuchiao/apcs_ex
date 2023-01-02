#include <stdio.h>
int main(){
int n, i, a, b, c;
scanf("%d",&n);
for (i=0;i<n;i++){
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
if(a>b){
if(b>c){
printf("%d",a);
}else{
if(a>c){
printf("%d",a);
}else{
printf("%d",c);
}}}
else{
if(a>c){
printf("%d",b);
}else{
if(b>c){
printf("%d",b);
}else{
printf("%d",c);
}}}
return 0;
}
}
