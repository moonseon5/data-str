#include <stdio.h>

int main(void)
{
    /* int n;

    printf("���� :");
    scanf("%d", &n);

    if (n == 1)
        puts("A");
    else if(n == 2)
        puts("B");
    else
        puts("C");
        return 0; */

        /* int n;

        puts("1���� n������ ������ ���մϴ�.");

        printf("n��: ");
        scanf("%d", &n);

        int sum = 0; //����
        int i = 1;
        int sum2 = 0;
        int sum3 = 0;
        while(i<=n)    //i�� n�����̸� �ݺ�
        {
            sum +=i;   //sum�� i�� �߰�
            i++;       //i���� 1 ����
        }
        
        for(int j=1; j<=n; j++)
        {
            sum2 += j;
        }
        //���콺�� ���� �˰���
        sum3 = n * (n + 1) / 2;
        printf("���콺�� ���� �˰������� ���� 1���� %d������ ������ %d�Դϴ�.\n",n,sum3);


        printf("1���� %d������ ������ %d �Դϴ�.\n",n,sum);
        printf("for�� -> 1���� %d������ ������ %d �Դϴ�.\n",n,sum2); 
        return 0;
        */
        

        /* printf("---- ����ǥ ----\n");

        for(int i = 1; i <= 9; i++)
        {
            for (int j = 1; j <= 9; j++)
            printf("%d x %d = %3d", i, j, i * j);
            printf("\n");
        } 
            return0;    
        */


        /* //���� �Ʒ��� ������ �ﰢ���� ���
        int n;
        printf("�� �� �ﰢ���Դϱ�?: ");
        scanf("%d", &n);
        for(int i=1; i<=n; i++)
        {
            for (int j=1; j<=i; j++)
            putchar('*');
            putchar('\n');
        }
        return 0; */
        
        //�̵�ﰢ��
       
        /* int n;
        int num = n;
        printf("�� �� �ﰢ���Դϱ�?: ");
        scanf("%d", &n);
        for(int i=0; i<n; i++)
        {
            for (int j= n-1; j>i; j--)
            printf(" ");
            for(int j=0; j< 2 * i + 1; j++)
            printf("*");
            printf("\n");
        }

        return 0; */

}