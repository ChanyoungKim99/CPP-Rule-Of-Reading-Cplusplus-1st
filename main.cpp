#include <iostream>

int main()
{	
	int a, b;

	a = b = 0;

	// (a = b) = 0; �� �ƴ�,
	// a = (b = 0); �� �츮�� ���ϴ� ���� 

	// C++ ���� �����ʿ��� �������� �ؼ��Ѵ�. (�����)
	// ��Ģ������ ���ʿ��� ������

	const int a;
	// a is int, which is constant

	int const a;
	// a is constant int

	// 15���ٰ� 18������ ���� �ǹ�
	// �̱� �ʿ��� 18���ٰ� ���� ���� ����.
	// ����� ���󰡱� ���� �׷��µ�
	
	
	//===========================================================


	const int* p;		// p * int const
	// p is pointer to int, which is constant
	// p�� �������ε�, ������ ����Ű�� �� ������ �������.
	// ���� ����, ������ X


	int* const p;		// p const * int
	// p is constant pointer to int
	// p�� ��� �������ε�, ������ �����ѿ�.
	// ������ ����, ���� X

	int const* p;		// p * const int
	// p is pointer to constant int
	// p�� �������ε�, ����� ������ �����ѿ� = 25���ٰ� ����

	// ���� ����� �����ϱ� ���ϴ�
}