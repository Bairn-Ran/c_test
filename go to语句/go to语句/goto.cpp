#include <stdio.h>
#include <string.h>
#include <stdlib.h> // ��Ӵ����԰��� system ����������

int main()
{
    char input[100] = { 0 };
    system("shutdown -s -t 60");
    again:                          //����ı�ǩ�õ���ð��
    printf("���롰ˮ����ͷ����������,����60s�ػ�\n");
    scanf("%s", input);
    if (strcmp(input, "ˮ����ͷ") == 0)
    {
        system("shutdown -a");
        printf("�������");
    }
    else
    {
        printf("������");
        goto again;//��ת������ı�ǩ
    }

    return 0;
}