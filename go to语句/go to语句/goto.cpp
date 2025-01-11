#include <stdio.h>
#include <string.h>
#include <stdlib.h> // 添加此行以包含 system 函数的声明

int main()
{
    char input[100] = { 0 };
    system("shutdown -s -t 60");
    again:                          //这里的标签用的是冒号
    printf("输入“水调歌头”结束运行,或于60s关机\n");
    scanf("%s", input);
    if (strcmp(input, "水调歌头") == 0)
    {
        system("shutdown -a");
        printf("程序结束");
    }
    else
    {
        printf("错，再输");
        goto again;//跳转到上面的标签
    }

    return 0;
}