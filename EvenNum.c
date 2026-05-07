#include <stdio.h>

int main(){
    int n, i, found= 0;

    scanf("%d", &n);

    for (  i = 1; i <=n; i++)
    {
        if (i %2 ==0)
        {
            printf("%d\n", i);
            found =1;

        }
        
    }
    if ( found==0)
    {
        printf("-1\n");
    }
    
    return 0;
}