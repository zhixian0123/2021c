#include <stdio.h> ///��֪k �[�`
int main()
{
    int n=1234567892;///�аݭӦ�ƬO�h��
                     ///n%10 ���l��,�N�O�Ӧ��
                     ///n/10 ��10,�e�������
    int sum=0;
    while(n>0)
    {
        printf("%d => %d %d \n", n, n/10, n%10);
        sum+=n%10;
        n=n/10;
    }
    printf("%d",sum);
}
