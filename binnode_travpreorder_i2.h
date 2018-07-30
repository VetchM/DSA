#pragma once
template <typename T, typename VST>
static void  visitAlongLeftBranch(BinNodePosi(T) x, VST& visit, Stack<BinNodePosi(T)>& S) {
	while (x) {
		visit(x->data);
		S.push(x->rc);
		x = x->lc;
	}
}

template <typename T, typename VST>
void travPre_I2((BinNodePosi(T) x, VST& visit) {
	Stack<BinNodePosi(T)> S;
	while (true)
	{
		visitAlongLeftBranch(x, visit, S);
		if (S.empty()) break;
		x = S.pop();
	}
}