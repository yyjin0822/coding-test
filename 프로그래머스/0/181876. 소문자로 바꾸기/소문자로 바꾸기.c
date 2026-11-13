#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* myString) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(1);

    int i=0;

    for(;;) {
        if(myString[i] == '\0') { answer[i] = '\0'; break; }

        if(myString[i] < 'a') { 
            answer[i] = myString[i] + ('a'-'A');
        }
        else { answer[i] = myString[i];}
        i++;
    }
    return answer;
}