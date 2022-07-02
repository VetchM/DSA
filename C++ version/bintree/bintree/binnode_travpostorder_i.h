#pragma once
template <typename T>
static void gotoHLVFL(Stack<BinNodePosi(T)>& S) {
	while (BinNodePosi(T) x = S.top()) {
		if (HasLChild(*x)) {
			if (HasRChild(*x)) S.push(x->rc);
			S.push(x - > lc);
		}
		else S.push(x->rc);
	}
	S.pop();
}

template <typename T, typename VST>
void travPost_I(BinNodePosi(T) x, VST& visit) {
	Stack<BinNodePosi(T)> S;
	S.push(x);
	while (!S.empty()) {
		if (S.top() != ->parent)
			gotoHLVFL(S);
		x = S.pop();
		visit(x->data);
	}
}