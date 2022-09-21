#include <iostream>

int main()
{	
	int a, b;

	a = b = 0;

	// (a = b) = 0; 이 아닌,
	// a = (b = 0); 이 우리가 원하는 과정 

	// C++ 언어는 오른쪽에서 왼쪽으로 해석한다. (영어로)
	// 사칙연산은 왼쪽에서 오른쪽

	const int a;
	// a is int, which is constant

	int const a;
	// a is constant int

	// 15번줄과 18번줄은 같은 의미
	// 미국 쪽에서 18번줄과 같이 많이 쓴다.
	// 어순을 따라가기 위해 그러는듯
	
	
	//===========================================================


	const int* p;		// p * int const
	// p is pointer to int, which is constant
	// p는 포인터인데, 정수를 가리키고 그 정수는 상수에요.
	// 참조 가능, 역참조 X


	int* const p;		// p const * int
	// p is constant pointer to int
	// p는 상수 포인터인데, 정수를 가리켜요.
	// 역참조 가능, 참조 X

	int const* p;		// p * const int
	// p is pointer to constant int
	// p는 포인터인데, 상수인 정수를 가리켜요 = 25번줄과 같음

	// 영어 어순이 이해하기 편하다
}