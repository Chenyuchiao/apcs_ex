#include <stdio.h>

// Recursive function
void fun(int n)
{
    if (n > 0) {
        // First statement in the function
        fun(n - 1);
        printf("%d*%d=%d ",1,n,1*n);
    }
}

// Driver code
int main()
{
    int x = 9;
    fun(x);
    return 0;
}
