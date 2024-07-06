#include <string.h>
//
// Created by NET-2 on 2024-05-13.
//
char** solution(const char* players[], size_t players_len, const char* callings[], size_t callings_len) {
    char** answer = (char**)malloc(sizeof(char*)*players_len);
    for(int i=0;i<players_len;i++) answer[i] = players[i];
    for(int k=0;k<callings_len;k++) for(int t=1;t<players_len;t++) if(strcmp(answer[t], callings[k])==0) {
        char *temp ;
        strcpy(temp,answer[t-1]);
        strcpy(answer[t-1],answer[t]);
        strcpy(answer[t],temp);
    }
    return answer;
}