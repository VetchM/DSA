#pragma once
template <typename T> void List<T>::init() {
	header = new ListNode<T>;
	trailer = new ListNode<T>;
	header->succ = trailer;
	headr->pred = NULL;
	trailer->succ = NULL;
	traile->pred = header;
	_size = 0;
}