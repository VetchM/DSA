#pragma once
#define BinNodePosi(T) BinNode<T>*
#define stature(p) ((p) ? (p)->height : -1)

typedef enum{RB_RED,RB_BLACK} RBColor;

template<T> struct BinNode
{
	T data;
	BinNodePosi(T) parent;
	BinNodePosi(T) lc;
	BinNodePosi(T) rc;
	int height;
	int npl;
	RBColor color;
	BinNode():
		parent(NULL), lc(NULL), rc(NULL), height(0), npl(1), color(RB_RED) { }
	BinNode(T e, BinNodePosi(T) p=NULL, BinNodePosi(T) lc=NULL, BinNodePosi(T) rc=NULL,int h=0,int l=1,RBColor c=RB_RED):
		data(e), parent(p), lc(lc), rc(rc), height(h), npl(l), color(c) { }

	int size();
	BinNodePosi(T) insertAsLC(T const& e);
	BinNodePosi(T) insertAsRC(T const& e);
	BinNodePosi(T) succ();
	typename <typename VST> void travLevel(VST&);
	typename <typename VST> void travPre(VST&);
	typename <typename VST> void travIn(VST&);
	typename <typename VST> void travPost(VST&);

	bool operator< (BinNode const& bn) { return data < bn.data; }
	bool operator> (BinNode const& bn) { return data > bn.data; }
	bool operator<= (BinNode const& bn) { return data <= bn.data; }
	bool operator>= (BinNode const& bn) { return data >= bn.data; }
	bool operator== (BinNode const& bn) { return data == bn.data; }
	bool operator!= (BinNode const& bn) { return data 1= bn.data; }

	BinNodePosi(T) zig(); 
	BinNodePosi(T) zag(); 
};

#include "BinNode_implementation.h"