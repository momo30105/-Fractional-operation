#include<iostream>
using namespace std;
class Rational {
private:
	int numerator;//���l
	int denomirator;//����
public:
	Rational(int n = 1, int d = 1)  //�غc�l��J���Ѽ�
	{
		numerator = n;
		denomirator = d;
	}
	Rational&add(Rational&r)  // �[
	{
		Rational t;
		t.numerator = r.numerator*denomirator + numerator*r.denomirator;
		t.denomirator = r.denomirator*denomirator;

		int a = t.numerator;
		int b = t.denomirator;		

		// �ϥ�����۰��k�M��̤j���]��  �ì۰� 
	
		if (a%b != 0 && b%a != 0) { //���P�_�O�_�����l�����䤤�@�Ƭ��L�̪��̤j���]��
			while (a != 0 && b != 0)  //�P�_���l�����Ҥ���0 
			{
				if (a >= b && b!=0)
				{
					a = a%b;  //�B��l% : a= a/b���l��
				}
				else if (b > a && a!=0)
				{
					b = b%a;
				}
			}
			if (a >= b)
			{
				t.numerator = t.numerator / a;
				t.denomirator = t.denomirator / a;
			}
			else if (b > a)
			{
				t.numerator = t.numerator / b;
				t.denomirator = t.denomirator / b;
			}
		}
		else if (a%b == 0 || b%a == 0) {
			
			if (a >= b && b!=0)
			{
				t.numerator = t.numerator / b;
				t.denomirator = t.denomirator / b;
			}
			else if (b > a && a!=0)
			{
				t.numerator = t.numerator / a;
				t.denomirator = t.denomirator / a;
			}
		}
		return t;
	}
	Rational&sub(Rational&r) //��
	{
		Rational t;
		t.numerator = numerator*r.denomirator - r.numerator*denomirator;
		t.denomirator = r.denomirator*denomirator;

		// ����۰��k�M��̤j���]��  �ì۰�   
		int a = t.numerator;
		int b = t.denomirator;

		if (a%b != 0 && b%a != 0) { //���P�_�O�_�����l�����䤤�@�Ƭ��L�̪��̤j���]��
			while (a != 0 && b != 0)  //�P�_���l�����Ҥ���0 
			{
				if (a >= b && b != 0)
				{
					a = a%b;  //�B��l% : a= a/b���l��
				}
				else if (b > a && a != 0)
				{
					b = b%a;
				}
			}
			if (a >= b)
			{
				t.numerator = t.numerator / a;
				t.denomirator = t.denomirator / a;
			}
			else if (b > a)
			{
				t.numerator = t.numerator / b;
				t.denomirator = t.denomirator / b;
			}
		}
		else if (a%b == 0 || b%a == 0) {

			if (a >= b && b != 0)
			{
				t.numerator = t.numerator / b;
				t.denomirator = t.denomirator / b;
			}
			else if (b > a && a != 0)
			{
				t.numerator = t.numerator / a;
				t.denomirator = t.denomirator / a;
			}
		}	
		return t;
	}
	Rational&mult(Rational&r) //��
	{
		Rational t;
		t.numerator = r.numerator*numerator;
		t.denomirator = r.denomirator*denomirator;

		// ����۰��k�M��̤j���]��  �ì۰�   
		int a = t.numerator;
		int b = t.denomirator;
		if (a%b != 0 && b%a != 0) { //���P�_�O�_�����l�����䤤�@�Ƭ��L�̪��̤j���]��
			while (a != 0 && b != 0)  //�P�_���l�����Ҥ���0 
			{
				if (a >= b && b != 0)
				{
					a = a%b;  //�B��l% : a= a/b���l��
				}
				else if (b > a && a != 0)
				{
					b = b%a;
				}
			}
			if (a >= b)
			{
				t.numerator = t.numerator / a;
				t.denomirator = t.denomirator / a;
			}
			else if (b > a)
			{
				t.numerator = t.numerator / b;
				t.denomirator = t.denomirator / b;
			}
		}
		else if (a%b == 0 || b%a == 0) {

			if (a >= b && b != 0)
			{
				t.numerator = t.numerator / b;
				t.denomirator = t.denomirator / b;
			}
			else if (b > a && a != 0)
			{
				t.numerator = t.numerator / a;
				t.denomirator = t.denomirator / a;
			}
		}
		return t;
	}
	Rational&devide(Rational&r)  //��
	{
		Rational t;
		t.numerator = numerator*r.denomirator;
		t.denomirator = denomirator*r.numerator;

		// ����۰��k�M��̤j���]��  �ì۰�   
		int a = t.numerator;
		int b = t.denomirator;

		if (a%b != 0 && b%a != 0) { //���P�_�O�_�����l�����䤤�@�Ƭ��L�̪��̤j���]��
			while (a != 0 && b != 0)  //�P�_���l�����Ҥ���0 
			{
				if (a >= b && b != 0)
				{
					a = a%b;  //�B��l% : a= a/b���l��
				}
				else if (b > a && a != 0)
				{
					b = b%a;
				}
			}
			if (a >= b)
			{
				t.numerator = t.numerator / a;
				t.denomirator = t.denomirator / a;
			}
			else if (b > a)
			{
				t.numerator = t.numerator / b;
				t.denomirator = t.denomirator / b;
			}
		}
		else if (a%b == 0 || b%a == 0) {

			if (a >= b && b != 0)
			{
				t.numerator = t.numerator / b;
				t.denomirator = t.denomirator / b;
			}
			else if (b > a && a != 0)
			{
				t.numerator = t.numerator / a;
				t.denomirator = t.denomirator / a;
			}
		}
		return t;
	}
	void printR() {
		cout << numerator << "/" << denomirator << endl;
	}
};
void main() {
	Rational r1(2, 3);
	Rational r2(1, 5);
	Rational r3; //�[
	Rational r4; //��
	Rational r5; //��
	Rational r6; //��
	r3 = r1.add(r2);
	r4 = r1.sub(r2);
	r5 = r1.mult(r2);
	r6 = r1.devide(r2);
	r1.printR();
	r2.printR();
	r3.printR();
	r4.printR();
	r5.printR();
	r6.printR();
	system("pause");
}
