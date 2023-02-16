#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,n,f=1;
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        f=f*a;
    }
    printf("%d",f);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
