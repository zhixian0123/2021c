#include <stdio.h>
int main(void)
{
    int i,j;
    int n;
    printf("�п�J�j�p");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i;k++)///i�h��,��i���P
        {
            printf(" ");
        }
        for(int k=1;k<=n;k++)
        {
            printf("*");
        }
        printf("\n");
    }

}
