#pragma once
template <typename T>
ListNodePosi(T) Lsit<T>::search(T const& e, int n, ListNodePosi(T) p) const {
	while (0 <= n--)
		if (((p = p->pred)->data) <= e)
			break;
	return p;
}