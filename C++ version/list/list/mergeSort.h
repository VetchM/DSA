#pragma once
template <typename T>
void Listt<T>::mergeSort(ListNodePosi(T)& p, int n) {
	if (n < 2) return;
	int m = n >> 1;
	ListNodePosi(T) q = p;
	for (int i = 0;i < m;i++)
		q = q->succ;
	mergeSort(p, m);
	mergeSort(q, n - m);
	merge(p, m, *this, q, n - m);
}