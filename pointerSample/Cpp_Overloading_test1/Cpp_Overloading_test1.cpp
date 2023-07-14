//#include <iostream>
#include <stdio.h>

//int abs(int val);
//float abs(float val); //오버로딩

//#define ABS(val) ((val)<0) ? -(val) : (val)	//매크로 함수 보통 대문자로 이름을 정한다.
											//주의할 점은 수식 최소 단위로 괄호를 붙여줘야 한다.
											//변수에는 모두 괄호

void swap_val(int a, int b);
void swap_p(int *a, int *b);
void swap(int &a, int &b);

int main()
{
	
	int i = -100; int j = 100;
	printf("argument1 = %d, argument2 = %d\n", i, j); //원본 데이터
	printf(",,,, swap processing ,,,,\n");
	swap(i, j); //call-by-value 처럼 보이지만 call-by-reference
	printf("argument1 = %d argument2 = %d\n", i, j); //교환 후 데이터

	//float a = -2.0;
	//printf("i 가 %d 일 때 =====> i의 절대값은 %d 입니다.\n", i-4, ABS(i-4));
	//printf("i 가 %d 일 때 =====> i의 절대값은 %d 입니다.\n", - 4, ABS(- 4));
	//printf("a 가 %f 일 때 =====> a의 절대값은 %f 입니다.\n", a, ABS(a)); //C타입
}

//int abs(int val)    //argument val의 절대값 반환
//{
//	/*if(val<0) return -val;
//	else return val;*/
//	return (val < 0) ? -val : val; //한문장으로 사용하면
//}
//
//float abs(float val)    //argument val의 절대값 반환
//{
//	return (val < 0) ? -val : val; //한문장으로 사용하면
//}

void swap_val(int a, int b) { // call-by-value
	int c = a;
	printf("   ,,,, In swap function ,,,,   \n");
	printf("     argument1 = %d, argument2 = %d\n", a, b); //원본 데이터
	printf("    ,,,, swap processing ,,,,\n");

	a = b;
	b = c;
	printf("     argument1 = %d argument2 = %d\n", a, b);
}

void swap_p(int *a, int *b) { // call-by-reference : 주소, 포인터 타입
	int c = *a; //a주소가 가리키고 있는 값!
	printf("   ,,,, In swap function ,,,,   \n");
	printf("     argument1 = %d, argument2 = %d\n", *a, *b); //원본 데이터
	printf("    ,,,, swap processing ,,,,\n");

	*a = *b;
	*b = c;
	printf("     argument1 = %d argument2 = %d\n", *a, *b);
} 

void swap(int &a, int &b) //call-by-reference : 주소, 레퍼런스 타입
{
	int c = a; //a는 외부 변수 (reference)
	printf("   ,,,, In swap function ,,,,   \n");
	printf("     argument1 = %d, argument2 = %d\n", a, b); //원본 데이터
	printf("    ,,,, swap processing ,,,,\n");

	a = b;
	b = c;
	printf("     argument1 = %d argument2 = %d\n", a, b);
}

