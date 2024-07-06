//
// Created by NET-2 on 2024-05-03.
//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "달리기 경주.c"

void main(void) {
    const char* players[]={"mumu", "soe", "poe", "kai", "mine"};
    const char* callings[] = {"kai", "kai", "mine", "mine"};
    char** answer = solution(players,5,callings,4);
    printf("fin ");
    for(int i=0;i<5;i++) printf("%s ",answer[i]);
}