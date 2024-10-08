﻿// 048_ClassDefault.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Player
{
//private: // 디폴트 접근제한 지정자
//	// constrcuter destructer
//public:
//	Player() {} // 디폴트 생성자
//	~Player() {} // 소멸자
//
//	// delete Function
//	Player(const Player& _Other) ; // 디폴트 복사 생성자
//	Player(Player&& _Other) noexcept; // 디폴트 RValue 복사 생성자
//	Player& operator=(const Player& _Other); // 디폴트 대입 연산자
//	Player& operator=(Player&& _Other) noexcept; // 디폴트 RValue 대입 연산자

};

class DefaultClass
{
private: // 디폴트 접근제한 지정자
	// constrcuter destructer
public:
	DefaultClass() {} // 디폴트 생성자
	~DefaultClass() {} // 소멸자

	// delete Function
	DefaultClass(const DefaultClass& _Other) = delete; // 디폴트 복사 생성자
	DefaultClass(DefaultClass&& _Other) noexcept = delete; // 디폴트 RValue 복사 생성자
	DefaultClass& operator=(const DefaultClass& _Other) = delete; // 디폴트 대입 연산자
	DefaultClass& operator=(DefaultClass&& _Other) noexcept = delete; // 디폴트 RValue 대입 연산자

};

int main()
{
    std::cout << "Hello World!\n";
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
