week03-1.cpp
```C++
#include <stdio.h>
int main()
{
    printf("Hello World\n");
}
```
week03-2.cpp
```C++
#include <stdio.h>
int main()
{
    printf("Hello World\n");
    printf("Hello World\n");
}
```
week03-3.cpp
```C++
#include <stdio.h>
int main()
{
    printf("Hello World\n");
    printf("Hello%dWorld\n", 300);
    printf("%d %d  %d\n", 300 , 200, 100);
}
```
week03-4.cpp
```C++
#include <stdio.h>
int main()
{
    int a;
    printf("請輸入一個數字:");

    scanf("%d", &a);
    printf("你剛剛輸入的是:%d", a);
}
```
week03-5.cpp
```C++
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", a+b);
}
```