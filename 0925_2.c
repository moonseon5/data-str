//int�� ��ü�� �������� �����ϰ� ����
#include <stdio.h>
#include <stdlib.h>
 int main(void)    {
/* 
    int l;
    int *x = calloc(l,sizeof(int));
    if(x == NULL)
        puts("�޸� �Ҵ翡 �����߽��ϴ�.");
    else {
        *x = 57;
        printf("*x = %d\n",*x);
        free(x);
    }    
    
    return 0; */

    int el_num;        //�迭 a�� ��� ����
    printf("��� ���� : ");
    scanf("%d",&el_num);
    int *foo = calloc(el_num, sizeof(int)); //��� ������ foo�� int�� �迭�� ����

    if (foo == NULL)
        puts("�޸� Ȯ���� �����߽��ϴ�. ");
    else {
        printf("�ʱ�ȭ ���� Ȯ��.\n");
        for(int i = 0; i < el_num; i++){
            printf("foo[%d] = %d\n", i ,foo[i]);
        }
        printf("%d���� ������ �Է��ϼ���\n",el_num);
        for (int i = 0; i < el_num; i++){
            printf("foo[%d] : ",i);
            scanf("%d",&foo[i]);
        }
        printf("�� ��ڰ��� �Ʒ��� �����ϴ�.\n");
        for (int i = 0; i < el_num; i++)
            printf("foo[%d] = %d\n",i,foo[i]);
        free(foo);                //��� ������ foo�� int�� �迭�� ����
    }    

    

}