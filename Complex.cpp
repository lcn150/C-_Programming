#include"Complex.h"  //Complex헤더파일 사용
//클래스파일 정의부
//Complex클래스 안의 메소드들이 정의 되어있다.
#include<iostream>
#include<String>
using namespace std;

Complex::Complex() {    //익명객체 생성자
	real = 0;    //각각 0으로 초기화 되어있다.
	image = 0;
}
Complex::Complex(int newreal, int newimage) {  //인수가 있는 생성자
	real = newreal;
	image = newimage;
}
int Complex::getReal() const {  //get메소드와 showComplex메소드는 const를 사용해서 내용을 바꾸지 않게 한다
	return real;   //지수를 반환한다
}
int Complex::getImage() const{
	return image;   //가수를 반환한다
}
void Complex::showComplex() const{  //지수와 가수의 내용을 출력한다
	cout << "(" << real << "+" << image << "i)" << endl; 
}