#include <stdio.h>
 
 
int main ()
{
    int n, f, c, H=1;
    int heigh[1000]={0};
    int childnum[1000]={0};
    scanf("%d", &n);
    heigh[0]=1;
  
    while (n--)
    {
        scanf("%d %d", &f, &c);
        if (heigh[f]==0 || childnum[f]==2)
            continue;
        childnum[f]++;
        heigh[c]=heigh[f]+1;
        if (heigh[c]>H)
            H=heigh[c];
  
    }
    printf("%d", H);
    return 0;
}
