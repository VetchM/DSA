#pragma once
template <typename T, typename VST> //Ԫ�����͡�������
void travIn_I2(BinNodePosi(T) x, VST& visit) {
	Stack<BinNodePosi(T)> S;
	while (true) {
		if (x) {
			S.push(x);
			x = x->lc;
		}
		else if (!S.empty()) {
			x = S.pop();
			visit(x->data);
			x = x->rc;
		}
		else break;
	}
}