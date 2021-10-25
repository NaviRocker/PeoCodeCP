/* 
Author - Luqman Fazal
*/
#include <stdio.h>
int main(int argc, char const *argv[]){
    int boardSize, numOfSnakes, numOfLadders, head, tail, count = 0, square = 0, num; 
    scanf("%d", &boardSize);
    int board[boardSize];
    for(int i = 0; i < boardSize; i++) board[i] = 1;
    scanf("%d", &numOfSnakes);
    for(int i = 0; i < numOfSnakes; i++){
        scanf("%d %d", &tail, &head);
        board[head - 1] = (tail - head);
    }
    scanf("%d", &numOfLadders);
    for(int i = 0; i < numOfLadders; i++){
        scanf("%d %d", &tail, &head);
        board[tail - 1] = (head - tail);
    }
    while(square < boardSize){
        num = board[square];
        square += num;
        if(num == 1) count++;
    }
    printf("%d", count - 1);
    return 0;
}