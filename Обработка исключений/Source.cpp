#include<iostream>
#include<string>
#include <fstream>
using namespace std;
double division(double num1,double num2) {
	if (num2 == 0)
		throw invalid_argument("���������� ������� �� ����");
	return num1/num2;
}

int main() {
	setlocale(LC_ALL, "ru");
	int n, m;
	/*try { //����,� ������� ���������� ���������� ����� ���������, � ������� ����� ���������� �������������� ��������
		cout << "������� ����� �� 1 �� 10: ";
		int x;
		cin >> x;
		//���� ��������� ����� ���� ���������� ���������, �� ��������� ���������� �� ��������� ����
		if (x < 1)
			throw 0;
		//���� ��������� ��������� ���������� ���������, �� ��������� ���������� �� ��������� ���������
		if (x > 10)
			throw "��������� ����� ������ ���������� ��������� ";
		//������� throw ������������� ���������� ���������� ����� try
		cout << "������� ���������� �����\n";
	}
	catch (const int ex ){//���� cath ������� "�����" ����������� �� ��������� int � �����������, ���� ����� ���������� ���� �������
		if(ex==0)
		cout << "��������� ������!!!\n��������� ����� ������ ���������� ���������!!!!\n";
		if(ex==11)
			cout << "��������� ������!!!\n��������� ����� ������ ���������� ���������!!!!\n";
	}
	catch (const char ex[]) {//���� cath ������� "����� " ����������� �� ��������� ��������� � �����������, ���� ����� ���������� ���� �������
		cout << "������!\n" << endl;
	}*/
	/*bool fer = true;
	do {
		try {
			string nStr;
			cout << "������� �����: ";
			getline(cin, nStr);
			int num = stoi(nStr);
			cout << "�������: " << num << endl;
			fer = false;
		}
		catch (const exception& ex) {//ex-������ ������ exeption  � ������� ����������� ���� ������
			string err = ex.what();//������ � ������� ������������ �������� ������ 
			if (err == "invalid stoi argument")
				cout << "������: " << err << endl;

		}
	} while (fer);*/
	/*try {
		cout << "������� ��� �����: ";
		cin >> n >> m;
		cout << n << " / " << m << " = " << division(n, m) << endl;
	}
	catch (const invalid_argument &ex) {
		cout << "������: " << ex.what() << endl;

	}*/
	string path = "file.tx";
	ifstream in;
	in.exceptions(ios::badbit|ios::eofbit|ios::failbit);
	try{
		cout << "������� �������� �����....";
		in.open(path);
		cout << "���� ������ ��� ������.\n";
		cout << "���������� ����:\n";
		string str;
		getline(in, str);
		cout << str << endl;
		in.close();
	}
	catch (const ifstream::failure &ex){
		cout << "������: " << ex.what() << endl;
		cout << "��� ������: " << ex.code() << endl;
	}
	



	system("pause>nul");
	return 0;
}