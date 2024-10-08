﻿// 008_Pointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    // 값형 변수
    // int A = 10;
    // 위치(번지) => 4
    // 크기 => 4
    // 형태 => int
    // 값 => 10

    // 00000000 00000000 00000000 00000011

    // 번지
    // 4번지에 있는 4바이트에
    // 00000000 00000000 00000000 00000001
    // 4번지에 접근한다를 생각하지 않는다.
    
    // 4번지에 접근해서 그곳의 4바이트를 바꾼다.
    
    // A(n번지에 존재하는 4바이트) = 1;

    // 값형 변수
    // (n번지에 존재하는 4바이트)
    // 1. 모든건 Ram에서 위치가 있을테니까 내가 찾아가야 한다.
    // 2. 그리고 그 위치에 3을 넣는다.

    // 4번지로 찾아가고 거기에있는 10이라는 값을 왼쪽 메모리 영역에
    // 알아서 복사해줍니다.
    // int Test = A;

    // 포인터는 다음과 같이 선언한다.
    // 자료형* 이름
    // A
    // 위치(번지) => 4
    // 크기 => 4
    // 형태 => int
    // 값 => 10


    // int* APtr = &A;
    // 위치(번지) => 100
    // 크기 => 8
    // 형태 => int 주소값
    // 값 => 4번지(정수 4)

    // 4번지 => 4번지라고 하는 주소값은
    // 정수와 호환되지 않는다. => 문법적으로 

    // int Result = APtr;


    // ....0000000000000100

    int A = 20;
    // 위치(번지) => 10번지
    // 크기 => 4
    // 형태 => int
    // 값 => 20

    // A의 주소(위치)값으로 출력해라.
    // 위치값은 그냥 정수인데 C++ 
    // 그리고 C에서는 정수를 넣는게 됐어.
    // C++에서는 어떤 변수의 위치를 명확하게 
    // 변수이름 앞에 & 붙이는 것은 그 10번지라는 주소값을 사용하겠다.
    int* Ptr = &A;
    // 위치(번지) => 20
    // 크기 => 8
    // 형태 => int *
    // 값 => 10번지

    bool bA = true;
    int TestB = bA;
    int* Ptr = &TestB;

    // 앞으로 어떤 자료형을 배우건 모두다 포인터형이 있다.
    // 자료형 뒤에 *붙이면 

    int ByteSize = sizeof(int*);
    ByteSize = sizeof(bool*);

    // int != int*

    // 예전에는 *
    // void*
    // 자료형* 이름

    // 1바이트

    // 유효하지 않은 주소값 자체를 0번지로 정했다.
    // 나는 아무것도 가리키지 않고 메모리에 간섭하지 않겠습니다.
    // Ram의 어느부분에도 간섭하지 않겠다는 것을 굳건히 맹세합니다.
    // Ptr = 0;
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
