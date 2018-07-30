#pragma once
template <typename T, typename VST> 
void travPre_I1(BinNodePosi(T) x, VST& visit) {
	Stack<BinNodePosi(T)> S;
	S.push(x);
	while (!S.empty()) {
		x = S.pop();
		visit(x->data);
		if (HasRChild(*x)) 
			S.push(x->rc); 
		if (HasLChild(*x)) 
			S.push(x->lc);
	}
}