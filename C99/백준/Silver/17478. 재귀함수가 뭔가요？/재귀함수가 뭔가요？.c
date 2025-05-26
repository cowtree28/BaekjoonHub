#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n;

void printbar(int k) {
    for (int i = 0; i < k; i++)
        printf("____"); // 문제에서 들여쓰기를 ____으로 요구함
}

void r(int num) {
    int temp = n - num;
    printbar(temp);
    printf("\"재귀함수가 뭔가요?\"\n");

    if (num == 0) {
        printbar(temp);
        printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
    } else {
        printbar(temp);
        printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
        printbar(temp);
        printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
        printbar(temp);
        printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
        r(num - 1);
    }

    printbar(temp);
    printf("라고 답변하였지.\n");
}

int main() {
    scanf("%d", &n);
    printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
    r(n);
    return 0;
}
