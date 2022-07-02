#include"queen_stack.h"
int N = 0;

void displayRow(Queen& q) {
	printf("%2d: ", q.x);
	int i = 0;
	while (i++ < q.y) printf("[]");
	printf("��");
	while (i++ < N) printf("[]");
	printf("%2d\n", q.y);
}

void displayProgress(Stack<Queen>& S, int nQueen) {
	system("cls");
	N = nQueen;
	S.traverse(displayRow);
	if (nQueen <= S.size())
		cout << nSolu << " solution(s) found after " << nCheck << " check(s)\a";
	getchar();
}