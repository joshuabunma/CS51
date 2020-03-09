#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5];

    for (int x = 0; x < 5; x++) {
    a[x] = 5*x+3;
    }
    // end of loop / x times 5 plus 3
    printf("Array Output#1\n");
    for (int x =0; x < 5; x ++) {
        printf("a[%d] =  %d\n",x,a[x]);

    }

    //output #2
    int x = 6;
    int *ptr1 = &x;
    printf("\nx = %d\n", x);
    printf("ptr1 = %x\n",ptr1);
    printf("Value stored at %x is %d\n",ptr1,*ptr1);
    printf("Address of location after ptr1 is %x\n",++ptr1);
    int *ptr2 = a; // or ...int *ptr2 = a[0];
    printf("First element of array is at %x\n",ptr2);
    printf("\nArray Output #2\n");
    for (;ptr2 <= &a[4];++ptr2) {
        printf("Value at address %x is %d\n",ptr2,*ptr2);
    }
    ptr2 = a;
    // output #3
    printf("\nArray Output #3\n");
    for (int z = 0; z < 5; z++) {
        printf("a[%d] = %d\n",z,*(ptr2+z));
    }
    printf("\nArray Output #4\n");
    for (ptr2 = &a[4]; ptr2 >= a;--ptr2){
        printf("Value at address %x is %d\n",ptr2,*ptr2);
    }
    return 0;



}
