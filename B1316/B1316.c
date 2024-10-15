#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n = 0;              
    int groupWordCount = 0;  

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char Word[101];  
        int seen[26] = { 0 };  // 알파벳 소문자 a-z 체크를 위한 배열
        int isGroupWord = 0; // 그룹 단어 여부 플래그 (0이면 그룹 단어, 1이면 아님)

        scanf("%s", Word);

        seen[Word[0] - 'a'] = 1; // 첫번째 문자 기록

        for (int j = 1; Word[j] != '\0'; j++)
        {
            // 이전 문자와 현재 문자가 다르고, 현재 문자가 이미 나왔었다면 그룹 단어가 아님
            if (Word[j] != Word[j - 1] && seen[Word[j] - 'a'] == 1)
            {
                isGroupWord = 1;
                break;
            }
            // 현재 문자를 본 문자로 기록
            seen[Word[j] - 'a'] = 1;
        }

        if (isGroupWord == 0)
        {
            groupWordCount++;
        }
    }

    printf("%d\n", groupWordCount);  
    return 0;
}