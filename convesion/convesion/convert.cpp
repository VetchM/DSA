#include"convert.h"

void convert(Stack<char>& S, _int64 n, int base) {
	static char digit[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	while (0 < n) {
		int remadinder = (int)(n%base);
		S.push(digit[remadiner]);
		n / = base;
	}
}