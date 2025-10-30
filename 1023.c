//선형 검색
#include <stdio.h>
#include <stdlib.h>

// 요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 선형 검색
int search (const int a[],int n, int key)
{
    int i = 0;
    while(1){
        if(i == n)
        return -1;      //검색 실패
        if(a[i] == key)
        return i;   //검색 성공

        i++;
    }
}

int main (void)
{
    int nx,ky;
    puts("선형 검색");
    printf("요소 개수:");
    scanf("%d",&nx);
    int* x = calloc(nx,sizeof(int));
    for(int i=0; i<nx; i++){
        printf("x[%d] : ", i);
        scanf("%d",&x[i]);
    }
}