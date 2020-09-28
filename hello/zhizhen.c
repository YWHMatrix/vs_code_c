#include <stdio.h>

int main() {
    int a[2]={1,2};
    int *p,i;
    p=a;
   printf("%d\n",*p);
    p++;
    printf("%d\n",*p);

    return 0;
}
