//
// Created by NET-2 on 2024-05-03.
//
#include <stdio.h>
#include <stdlib.h>

// score_len은 배열 score의 길이입니다.
int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}
int solution(int k, int m, int score[], size_t score_len) {
    int answer = 0,B;
    qsort(score,score_len,sizeof(int),compare);
    for(B=score_len-m;B>=0;B-=m) answer += (score[B]*m);
    return answer;
}