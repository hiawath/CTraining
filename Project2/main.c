#include <stdio.h>
void memoryTest();

int main()
{
    memoryTest();
}


void memoryTest()
{
    int a = 1;
    int b = 16;
    double c = 32;
    int d = 64;
    char e = 'a';
    char ar[6] = "korea";



    printf("%.1lf\n", 1e6);         // ���� ������ �Ǽ��� �Ҽ��� ���·� ���
    printf("%.7lf\n", 3.14e-5);     // �Ҽ��� ���� 7�ڸ����� ���
    printf("%le\n", 0.0000314);     // �Ҽ��� ������ �Ǽ��� ���� ���·� ���
    printf("%.2le\n", 0.0000314);   // ���� ���·� �Ҽ��� ���� ��° �ڸ����� ���

    return 0;
}
