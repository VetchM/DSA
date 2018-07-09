#pragma once
template<typename T> Vector<T>& Vector<T>::operator= (Vector<T> const& v) {
	if (_elem) delete[]_elem;
	copyFrom(V._elem, 0, _V.size());
	return *this;
}