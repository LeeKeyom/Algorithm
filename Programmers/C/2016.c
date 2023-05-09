#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    char* arr[]={"FRI", "SAT","SUN","MON", "TUE", "WED","THU"};
    char* answer = (char*)malloc(sizeof(arr));    
    int finday[20] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int daycount = 0;
    int total = 0;
    
    for(int i = 0; i<a-1; i++){
        total += finday[i];
    }
    
    total += b-1;
    
    for(int i = 0; i<total; i++){
        daycount++;
        if(daycount>=7){
            daycount = 0;
        }
    }
    answer = arr[daycount];
    
    return answer;
}
