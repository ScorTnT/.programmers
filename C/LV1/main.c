//
// Created by NET-2 on 2024-05-03.
//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "과일 장수.c"

void main(void) {
    int score[] = {4, 1, 2, 2, 4, 4, 4,4,1,2,4,2};
    int answer = solution(4,3,score,12);
    printf("answer %d",answer);
}