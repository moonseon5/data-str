//이전 검색
#include <stdio.h>
#include <stdlib.h>

// 요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 이전 검색
int bin_search (const int a[], int n, int key)
{
    int pl = 0;          //검색 범위 맨 앞의 인덱스
    int pr = n - 1;      //검색 범위 맨 끝의 인덱스
    
    do{
        int pc = (pl + pr) / 2; //검색 범위 한가운데의 인덱스
        if (a[pc] == key)
            return pc;
        else if(a[pc] < key)
            pl = pc + 1;  //검색 범위를 뒤쪽 절반으로 좁힘
        else
            pr = pc - 1;  //검색 범위를 앞쪽 절반으로 좁힘
    } while (pl <= pr);
    return 1;             //검색 실패
}


int main(void)
{
    int nx,ky;
    puts("선형 검색");
    printf("요소 개수:");
    scanf("%d",&nx);
    int* x = calloc(nx,sizeof(int));  //요소 개수가 nx인 int형 배열 x생성
    for(int i=0; i<nx; i++){
        printf("x[%d] : ", i);
        scanf("%d",&x[i]);
    }
}