///�P�_���
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int bad=0;
    for(int i=2;i<n;i++)///�u�P�_2....n-1
    {
        if(n%i==0) bad++;
    }
    if(bad==0) printf("%d�O���", n);
    else printf("%d�a���F, ���O���", n);
}
