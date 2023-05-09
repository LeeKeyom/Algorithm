#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// A_len은 배열 A의 길이입니다.
// B_len은 배열 B의 길이입니다.
int compare(const int *a, const int*b){
    return *a>*b?1:-1;
}
int solution(int A[], size_t A_len, int B[], size_t B_len) {
    int answer = 0;
    qsort(A, A_len,sizeof(int),compare);
    qsort(B, B_len,sizeof(int),compare);
    
    for (int i=0; i < A_len; i++){
        // printf("%d %d\n", A[i],B[B_len-1-i]);
        answer += A[i]*B[B_len-1-i];
    }
    return answer;
}
