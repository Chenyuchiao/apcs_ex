#if 0

Output:

Enter a positive integer: 60

Factors of 60 are: 1 2 3 4 5 6 10 12 15 20 30 60

input a; // a =60
for(i=0;i<60;i++){
    if(60 % i ==0)
    print i
}


#endif

#include <iostream>

using namespace std;

int main()
{
    int i; // a =60
    for(i=1;i<61;i++){
    if(60 % i ==0)
    printf("Factors of 60 are:%d \n" ,i);
    }
    return 0;
}