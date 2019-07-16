//1594029 IT����ý��۰��а� ������
//���� ������ �Ǵ� Test����
#include"Complex.h"   //include�� �̿��� ��������� �ҷ���

void printComplex(Complex Arr[], int size)  //�Ϲ��Լ��� ���ǵ� printComplex�Լ�
{
	for (int i = 0; i < size; i++)
		cout <<"("<<Arr[i].getReal() << "+" << Arr[i].getImage() << "i)" << endl;
}

void main() {

	Complex c1(10, 20);   //�ν��Ͻ�c1����
	Complex c2(30, 40);   //�ν��Ͻ� c2����
	Complex c3;           //�ν��Ͻ� c3����
	c1.showComplex();     //10+20i ���
	c2.showComplex();     //30+40i ���
	c3.showComplex();     //0+0i ���

	c1.setReal(50);    //��üc1�� ������ 50���� �ٲٸ�
	c1.showComplex();   //50+20i ���
	cout << "imagine number of x = " << c1.getImage() << endl;  //image�� private������ �Ǿ��� ������ getImage�޼ҵ带 ����Ѵ�

	//step2 �׽�Ʈ �ڵ�
	const int SIZE = 4;  //const�� ����Ͽ� SIZE�� ���ȭ
	Complex complexArray[SIZE] = { Complex(1,2), Complex(3,7), Complex(11,27),Complex(1,12) };
	printComplex(complexArray, SIZE);     //�迭�� ��� ����� �ȴ�.
	system("pause");  //â�� �ڵ����� ������ ���� �����ϴ� system("pause")
}