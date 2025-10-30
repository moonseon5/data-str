#include <stdio.h>

int main(void)
{
    /* int n;

    printf("정수 :");
    scanf("%d", &n);

    if (n == 1)
        puts("A");
    else if(n == 2)
        puts("B");
    else
        puts("C");
        return 0; */

        /* int n;

        puts("1부터 n까지의 총합을 구합니다.");

        printf("n값: ");
        scanf("%d", &n);

        int sum = 0; //총합
        int i = 1;
        int sum2 = 0;
        int sum3 = 0;
        while(i<=n)    //i가 n이하이면 반복
        {
            sum +=i;   //sum에 i를 추가
            i++;       //i값을 1 증가
        }
        
        for(int j=1; j<=n; j++)
        {
            sum2 += j;
        }
        //가우스의 덧셈 알고리즘
        sum3 = n * (n + 1) / 2;
        printf("가우스의 덧셈 알고리즘으로 구한 1부터 %d까지의 총합은 %d입니다.\n",n,sum3);


        printf("1부터 %d까지의 총합은 %d 입니다.\n",n,sum);
        printf("for문 -> 1부터 %d까지의 총합은 %d 입니다.\n",n,sum2); 
        return 0;
        */
        

        /* printf("---- 곱셈표 ----\n");

        for(int i = 1; i <= 9; i++)
        {
            for (int j = 1; j <= 9; j++)
            printf("%d x %d = %3d", i, j, i * j);
            printf("\n");
        } 
            return0;    
        */


        /* //왼쪽 아래가 직각인 삼각형을 출력
        int n;
        printf("몇 단 삼각형입니까?: ");
        scanf("%d", &n);
        for(int i=1; i<=n; i++)
        {
            for (int j=1; j<=i; j++)
            putchar('*');
            putchar('\n');
        }
        return 0; */
        
        //이등변삼각형
       
        /* int n;
        int num = n;
        printf("몇 단 삼각형입니까?: ");
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