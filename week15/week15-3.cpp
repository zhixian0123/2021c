///����۰��k,��L�{�L�X��
///3 | 57 | 76 | 1 //�j��a,������b,�o��p��c
///  | 57 | 57 |   //�Ѥj���H,�ѤG���H,����
/// --------------
///     0   19  �f�Z: ���k, �l��, ���୫�ư�,��0
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int c=a&b;
    printf("�Ѥj:%d �ѤG:%d �ѤT:%d\n", a, b, c);
    while(1)
    {
        if(c==0)
        {
            printf("�]��c�O0,�Nbreak���}�j��\n");
            break;///���}�j��
        }
        a=b;///�Ѥj���H
        b=c;///�ѤG���H
        c=a%b;///�ѤT���H
        printf("�Ѥj:%d �ѤG:%d �ѤT:%d\n", a, b, c);
    }
    printf("���}�j���,���׬Ob: %d \n", b);
}

