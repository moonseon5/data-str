// �迭 ����� �ִ� ���� ���ϰ� ���(��� �� �Է�)
#include <stdio.h>
#include <stdlib.h>

//��� ������ n�� �迭 a�� ����� �ִ�
    int maxof(const int foo[], int elem_cnt)
    {
        int max = foo[0];     //�ִ�
        for (int i = 1; i < elem_cnt; i++)
            if(foo[i] > max)max = foo[i];
    
    return max;
    }
    int main(void){
   
    int number;              //�ο� = �迭 height�� ��� ����
    printf("��� ��: ");
    scanf("%d",&number);
    int *height = calloc(number, sizeof(int)); //��� ���� number���� �迭�� ����
    printf("%d���� Ű�� �Է��ϼ���\n",number);
    for (int i = 0; i < number; i++){
        printf("height[%d]  :",i);
        scanf("%d",&height[i]);
    }    
    printf("�ִ��� %d�Դϴ�.\n",maxof(height,number));
    free(height);        //�迭 height�� ����
    
    return 0;
    }