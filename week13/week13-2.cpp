#include <stdio.h>///為了printf
#include <stdlib.h>///為了system()作業系統
int main()
{
    printf("下面是 system( ) 出來的結果\n");
    system("dir");///呼叫別人的函式system
    printf("*");///呼叫別人的函式printf
    return 0;
}
