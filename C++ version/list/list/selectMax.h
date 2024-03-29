#pragma once
template <typename T>
ListNodePosi(T) List<T>::selectMax(ListNodePosi(T) p, int n) {
	ListNodePosi(T) max = p;
	for (ListNodePosi(T) cur = p;1 < n;n--)
		if (!it((cur = cur->succ)->data, max->data))
			max = cur;
	return max;
}