#include <stdio.h>

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    int i = 0;
    
    for(i = 0; i<arr_len; i++)
    {
        answer += arr[i];
    }
    
    answer /= arr_len;
    
    return answer;
}
