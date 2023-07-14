// pointerSample.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

//#include <iostream> // C++에서 사용하는거
#include <stdio.h>
#include <malloc.h> //malloc 함수 사용
// 수정시 기준 소스 삭제 자제.
// 주석 달기
// 함수에는 type, argument 있다.
// main 함수 argument는 keyboard


char buf[2000];
void MemoryDump(int start, int length);

int main(int argc, char *argv[]) // >PointerSample 10000 500 이러한 형대로 입력이 되는 타입 // Command Line 명령어
                                 // 10000 : Start memory 주소
                                 // 500   : Dump 할 메모리 크기
{
    //std::cout << "Hello World!\n"; //c++에서 사용하는거

    int start = 0x09000000;
    int length = 500;
    
    MemoryDump((int)buf, length);
    

   

    //char c;
    //int i;
    //float a;
    //double d;

    //c = 'a';    //%c
    //i = 1;      //%d => 16진수면 %x
    //a = 2.0;    //%f
    //d = 3.14;   //%f => 길게 하려면 %lf
    ////void *p=&i; //void type은 없다. void로 할려면 void pointer type. void pointer는 그저 주소일 뿐. 값 ㄴㄴ
    ////void *p = (void *)0x80000000; // 주소를 입력시켜 줌 (캐스팅 해주어야 한다.) // 이렇게 주소를 임의로 지정해주면 안된다.
    //                                //별도의 메모리 공간을 할당 받아야한다.
    
    
    ////void *p = (void *)buf; //배열은 곧 포인터다
    //void *p = malloc(100); //메모리 공간을 확보해주기 아까의 버퍼 배열과 같다 (Heap 영역에 확보)
    //
    //*(double *)p = d; //주소 정하고 거기에 값을 넣어줌 //안된다 이런건


    ////printf("char c = %c\n", c); //변환 문자가 필요
    ////printf("int i = %d\n", i);
    ////printf("float a = %f\n", a);
    ////printf("double d = %f\n", d);

    ////주소 값은 4byte 정수
    ////printf("int i = %d [%d]\n", i, &i); i=2    
    ////printf("int i = %d [%d]\n", i, &i);

    ////16진수 변환
    ////printf("int i = %d [%d]\n", i, &i);
    //////printf("int i = %d [%x]\n", i, &i);
    ////printf("int i = %d [0x%08x]\n", i, &i); // 16진수 자리수 정해주기 (빈자리는 0으로 채우기)

    //printf("c = %8d [0x%08x]\n", c, &c);
    //printf("i = %8d [0x%08x]\n", i, &i);
    //printf("f = %8f [0x%08x]\n", a, &a);
    //printf("d = %8f [0x%08x]\n", d, &d);
    //printf("p = %8f [0x%08x]\n", *(double*)p, p); //void pointer로 선언했기 때문에 double 라고 캐스팅을 해준다.(형변환)
    
    

}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

void MemoryDump(int start, int length)
{
    //void *vp = (void *)start;
    int i = 0;
    char *cp = buf;

    while (i<length) // 수행조건 : i <length
    {
        /*char *cp = (char *)vp;
        char c = *cp;*/
        

        unsigned char c = *((char *)cp+(i++));
        //i++;
        printf("0x%02x  ", c);
    }

}
