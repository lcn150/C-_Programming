#pragma once
//Complex ������� 
//Ŭ������ ����κ��̰� �ʿ��� �޼ҵ���� ����Ǿ��ִ�. 
#ifndef COMPLEX_H  //�ߺ����Թ���
#define COMPLEX_H   //��� ������Ͽ� ����־�� �Ѵ�
#include<iostream>
#include<String>
using namespace std;

class Complex {
public:
	Complex();       //�⺻������
	Complex(int, int);  //�μ��� �ִ� ������ 
	void setReal(int);   //������ set�� �� �ִ� �޼ҵ�
	void setImage(int);   //������ set�� �� �ִ� �޼ҵ�
	int getReal() const;  //������ get�� �� �ִ� �޼ҵ�
	int getImage() const;  //������ get�� �� �ִ� �޼ҵ�
	void showComplex() const;  //������ ������ ������ִ� �޼ҵ�

private:
	int real, image;   //���������� ���� private����
};
inline void Complex::setReal(int newreal) {  //inline���� ����� set�޼ҵ�, ���� ������Ͽ��� ����ؾ��Ѵ�
	real = newreal;
}
inline void Complex::setImage(int newimage) { //inline�Լ��� ������ �帧�� �Ѿ�� ���ƿ��ų� ���ڸ� �����ϴ� �������� ����� �ð��� �ٿ��ش�.

	image = newimage;
}

#endif