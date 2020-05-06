#include <stdio.h>


int main(void) {
    printf("C言語で電卓\n");

    int n1;
    char op;
    int n2;
    int ans;

    scanf("%d %c %d", &n1, &op, &n2);
    printf("%d %c %d\n", n1, op, n2);

    switch (op) {
    case '+':
        ans = n1 + n2;
        break;
    case '-':
        ans = n1 - n2;
        break;
    case '*':
        ans = n1 * n2;
        break;
    case '/':
        ans = n1 / n2;
        break;
    default:
        printf("入力が正しくありません");
        break;
    }
    printf("%d\n",ans);

    return 0;
}