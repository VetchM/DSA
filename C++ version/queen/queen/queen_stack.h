#pragma once
#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include "../../stack/stack/stack.h" 
#include "queen.h" 

typedef enum { Continuous, Step } RunMode;

extern RunMode runMode; //����ģʽ
extern int nSolu; //�������
extern int nCheck; //���Ե��ܴ���

void placeQueens(int);
void displayRow(Queen& q, int);
void displayProgress(Stack<Queen>& S, int);