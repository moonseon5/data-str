//���� �˻�
#include <stdio.h>
#include <stdlib.h>

// ����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�
int search (const int a[],int n, int key)
{
    int i = 0;
    while(1){
        if(i == n)
        return -1;      //�˻� ����
        if(a[i] == key)
        return i;   //�˻� ����

        i++;
    }
}

int main (void)
{
    int nx,ky;
    puts("���� �˻�");
    printf("��� ����:");
    scanf("%d",&nx);
    int* x = calloc(nx,sizeof(int));
    for(int i=0; i<nx; i++){
        printf("x[%d] : ", i);
        scanf("%d",&x[i]);
    }
}