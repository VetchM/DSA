#include "../../stack/stack/Stack.h" 
#include "BinNode_TravPreorder_R.h"
#include "BinNode_TravPreorder_I1.h"
#include "BinNode_TravPreorder_I2.h"

template <typename T> template <typename VST> //Ԫ�����͡�������
void BinNode<T>::travPre(VST& visit) { //��������������㷨ͳһ���
	switch (rand() % 3) { //�˴������ѡ���������ԣ�������ѡ��
	case 1: travPre_I1(this, visit); break; //������#1
	case 2: travPre_I2(this, visit); break; //������#2
	default: travPre_R(this, visit); break; //�ݹ��
	}
}