#include <stdio.h>
int main()
{
    int n=1234567892;///�аݭӦ�ƬO�h��
                     ///n%10 ���l��,�N�O�Ӧ��
                     ///n/10 ��10,�e�������
    while(n>0)
    {
        printf("%d => %d %d \n", n, n/10, n%10);
        n=n/10;
    }
}
