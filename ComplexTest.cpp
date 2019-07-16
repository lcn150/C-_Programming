//1594029 IT응용시스템공학과 이충헌
//실제 실행이 되는 Test파일
#include"Complex.h"   //include를 이용해 헤더파일을 불렀다

void printComplex(Complex Arr[], int size)  //일반함수로 정의된 printComplex함수
{
	for (int i = 0; i < size; i++)
		cout <<"("<<Arr[i].getReal() << "+" << Arr[i].getImage() << "i)" << endl;
}

void main() {

	Complex c1(10, 20);   //인스턴스c1생성
	Complex c2(30, 40);   //인스턴스 c2생성
	Complex c3;           //인스턴스 c3생성
	c1.showComplex();     //10+20i 출력
	c2.showComplex();     //30+40i 출력
	c3.showComplex();     //0+0i 출력

	c1.setReal(50);    //객체c1의 지수를 50으로 바꾸면
	c1.showComplex();   //50+20i 출력
	cout << "imagine number of x = " << c1.getImage() << endl;  //image는 private선언이 되었지 때문에 getImage메소드를 사용한다

	//step2 테스트 코드
	const int SIZE = 4;  //const를 사용하여 SIZE를 상수화
	Complex complexArray[SIZE] = { Complex(1,2), Complex(3,7), Complex(11,27),Complex(1,12) };
	printComplex(complexArray, SIZE);     //배열이 모두 출력이 된다.
	system("pause");  //창이 자동으로 닫히는 것을 방지하는 system("pause")
}