#include"Complex.h"  //Complex������� ���
//Ŭ�������� ���Ǻ�
//ComplexŬ���� ���� �޼ҵ���� ���� �Ǿ��ִ�.
#include<iostream>
#include<String>
using namespace std;

Complex::Complex() {    //�͸�ü ������
	real = 0;    //���� 0���� �ʱ�ȭ �Ǿ��ִ�.
	image = 0;
}
Complex::Complex(int newreal, int newimage) {  //�μ��� �ִ� ������
	real = newreal;
	image = newimage;
}
int Complex::getReal() const {  //get�޼ҵ�� showComplex�޼ҵ�� const�� ����ؼ� ������ �ٲ��� �ʰ� �Ѵ�
	return real;   //������ ��ȯ�Ѵ�
}
int Complex::getImage() const{
	return image;   //������ ��ȯ�Ѵ�
}
void Complex::showComplex() const{  //������ ������ ������ ����Ѵ�
	cout << "(" << real << "+" << image << "i)" << endl; 
}