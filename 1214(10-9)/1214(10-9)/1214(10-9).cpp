// 1214(10-9).cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct card
{
    const char* face;
    const char* suit;
};
typedef struct card Card;
void fillDeck(Card* const wDeck,
    const char* wFace[],
    const char* wSuit[]);
void shuffle(Card* const wDeck);
void deal(const Card* const wDeck);
int main(void)
{
    Card deck[52];  
    const char* face[] =
    {
        "Ace", "Deuce", "Three", "Four", "Five",
        "Six", "Seven", "Eight", "Nine", "Ten",
        "Jack", "Queen", "King"
    };
    const char* suit[] = 
    {
        "Hearts", "Diamonds", "Clubs", "Spades"
    };
    srand(time(NULL));
    fillDeck(deck, face, suit); 
    shuffle(deck);              
    deal(deck);                
    return 0;
}
void fillDeck(Card* const wDeck, const char* wFace[], const char* wSuit[])
{
    int i;
    for (i = 0; i < 52; i++) 
    {
        wDeck[i].face = wFace[i % 13];
        wDeck[i].suit = wSuit[i / 13];
    }
}
void shuffle(Card* const wDeck)
{
    int i, j;
    Card temp;
    for (i = 0; i < 52; i++) 
    {
        j = rand() % 52;
        temp = wDeck[i];
        wDeck[i] = wDeck[j];
        wDeck[j] = temp;
    }
}

void deal(const Card* const wDeck)
{
    int i;
    for (i = 0; i < 52; i++)
    {
        printf("%5s of %-8s%c",
            wDeck[i].face,
            wDeck[i].suit,
            (i + 1) % 4 ? '\t' : '\n');
    }
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
