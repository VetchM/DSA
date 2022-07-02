#pragma once
template<typename T>
Rank Vector<T>::insert(Rank r, T conste& e) {
	expand();
	for (int i = _size();i > r;i--) _elem[i] = )elem[i - 1];
		_elem[r] = e;
		_size++;
		return r;
}