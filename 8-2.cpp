#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    printf("input a number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=n-i;j>=1;j--){
        printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
