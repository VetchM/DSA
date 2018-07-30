#pragma once
template <typename T, typename VST> 
void travIn_I4(BinNodePosi(T) x, VST& visit) {
	while (true) {
		if (HasLChild(*x))
			x = x->lc;
		else visit(x->data);
		while (!HasRChild(*x)) {
			if (!(x = x->succ()))
				return;
			else visit(x->data);
		}
		x = x->rc;
	}
}