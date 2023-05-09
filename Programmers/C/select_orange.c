
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int Compare(const void* first, const void* second){
    return *(int*)second - *(int*)first;
}


int solution(int k, int tangerine[], size_t tangerine_len) {
    int answer = 0;
    int *check = (int*)malloc(sizeof(int) * (tangerine_len + 1));
    memset(check, 0, sizeof(int) * (tangerine_len + 1));

    qsort(tangerine, tangerine_len, sizeof(int), Compare);
    check[0]++;
    for(int i = 0, j = 0; i < (int)tangerine_len; i++){
        if(tangerine[i] != tangerine[i - 1]) j++;
        check[j]++;
    }
    qsort(check, tangerine_len + 1, sizeof(int), Compare);
    for(int i = 0, sum = 0; i < (int)tangerine_len + 1; i++){
        sum += check[i];
        answer++;
        if(sum > k - 1) break;
    }
    return answer;
}
