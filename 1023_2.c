//���� �˻�
#include <stdio.h>
#include <stdlib.h>

// ����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�
int bin_search (const int a[], int n, int key)
{
    int pl = 0;          //�˻� ���� �� ���� �ε���
    int pr = n - 1;      //�˻� ���� �� ���� �ε���
    
    do{
        int pc = (pl + pr) / 2; //�˻� ���� �Ѱ���� �ε���
        if (a[pc] == key)
            return pc;
        else if(a[pc] < key)
            pl = pc + 1;  //�˻� ������ ���� �������� ����
        else
            pr = pc - 1;  //�˻� ������ ���� �������� ����
    } while (pl <= pr);
    return 1;             //�˻� ����
}


int main(void)
{
    int nx,ky;
    puts("���� �˻�");
    printf("��� ����:");
    scanf("%d",&nx);
    int* x = calloc(nx,sizeof(int));  //��� ������ nx�� int�� �迭 x����
    for(int i=0; i<nx; i++){
        printf("x[%d] : ", i);
        scanf("%d",&x[i]);
    }
}