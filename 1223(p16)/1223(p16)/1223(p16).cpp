// 1223(p16).cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define ENTER '\n'
#define MAX 80

int main() {
    FILE* fptr;
    char str[MAX], ch;
    int i = 0;

    fptr = fopen("output.txt", "a");
    if (!fptr) {
        printf("檔案開啟失敗!\n");
        return 1;
    }

    printf("請輸入字串，按ENTER結束輸入:\n");
    while ((ch = getchar()) != ENTER && i < MAX - 1) {
        str[i++] = ch;
        putchar(ch); // 顯示輸入的字元
    }
    str[i] = '\0'; // 加上結尾字元

    fprintf(fptr, "%s\n", str); // 寫入檔案並換行
    fclose(fptr);

    printf("\n檔案附加完成!!\n");
    system("pause");
    return 0;
}


// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
