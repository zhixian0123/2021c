#include <stdio.h>
int main()
{
    printf("1: *\n");
    printf("2: **\n");
    printf("3: ***\n");
    printf("4: ****\n");///���I:�n�ܦh��

    int n=4;
    for(int i=1;i<=n;i++)
    {
        printf("%d: ", i);///�N�[,�X�h��
        for(int k=1;k<=i;k++)///i�h��,��i���P
        {
            printf("*");
        }
        printf("\n");
    }

}
