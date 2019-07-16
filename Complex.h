#pragma once
//Complex 헤더파일 
//클래스의 선언부분이고 필요한 메소드들이 선언되어있다. 
#ifndef COMPLEX_H  //중복포함방지
#define COMPLEX_H   //모든 헤더파일에 들어있어야 한다
#include<iostream>
#include<String>
using namespace std;

class Complex {
public:
	Complex();       //기본생성자
	Complex(int, int);  //인수가 있는 생성자 
	void setReal(int);   //지수를 set할 수 있는 메소드
	void setImage(int);   //가수를 set할 수 있는 메소드
	int getReal() const;  //지수를 get할 수 있는 메소드
	int getImage() const;  //가수를 get할 수 있는 메소드
	void showComplex() const;  //지수와 가수를 출력해주는 메소드

private:
	int real, image;   //정보은닉을 위한 private선언
};
inline void Complex::setReal(int newreal) {  //inline으로 선언된 set메소드, 오직 헤더파일에만 사용해야한다
	real = newreal;
}
inline void Complex::setImage(int newimage) { //inline함수는 실행의 흐름이 넘어갔다 돌아오거나 인자를 복사하는 과정에서 생기는 시간을 줄여준다.

	image = newimage;
}

#endif