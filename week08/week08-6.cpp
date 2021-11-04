#include <stdio.h>
int main()
{
    printf("1: *\n");
    printf("2: **\n");
    printf("3: ***\n");
    printf("4: ****\n");///缺點:要很多行

    int n=4;
    for(int i=1;i<=n;i++)
    {
        printf("%d: ", i);///鷹架,幾層樓
        for(int k=1;k<=i;k++)///i層樓,有i顆星
        {
            printf("*");
        }
        printf("\n");
    }

}
