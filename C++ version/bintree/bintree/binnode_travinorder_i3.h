#pragma once
template <typename T, typename VST> //元素类型、操作器
void travIn_I3(BinNodePosi(T) x, VST& visit) {
	bool backtrack = false;
	while (true) {
		if (!backtrack&&HasLChild(*x)
			x = x->lc;
		else {
			visit(x->data);
			if (HasRChild(*x)) {
				x = x->rc;
				backtrack = false;
			}
			else {
				if (!(x = x->succ())) break;
				backtrack = true;
			}
		}
	}
}