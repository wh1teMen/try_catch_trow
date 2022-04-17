#include<iostream>
#include<string>
#include <fstream>
using namespace std;
double division(double num1,double num2) {
	if (num2 == 0)
		throw invalid_argument("обнаружено деление на ноль");
	return num1/num2;
}

int main() {
	setlocale(LC_ALL, "ru");
	int n, m;
	/*try { //блок,в который необходимо поместитть часть программы, в которой может возникнуть исключительная ситуация
		cout << "Введите число от 1 до 10: ";
		int x;
		cin >> x;
		//если введенное число ниже указанного диапазона, то бросается исключение со значением ноль
		if (x < 1)
			throw 0;
		//если введенное числовыше указанного диапазона, то бросается исключение со строковым значением
		if (x > 10)
			throw "Введенное число больше указанного диапазона ";
		//команда throw останавливает дальнейшее выполнение блока try
		cout << "Введено правильное число\n";
	}
	catch (const int ex ){//блок cath который "ловит" исключениея со значением int и выполняется, если такое исключение было брошено
		if(ex==0)
		cout << "Произошла ошибка!!!\nВведенное число меньше указанного диапазона!!!!\n";
		if(ex==11)
			cout << "Произошла ошибка!!!\nВведенное число больше указанного диапазона!!!!\n";
	}
	catch (const char ex[]) {//блок cath который "ловит " исключениея со строковым значением и выполняется, если такое исключение было брошено
		cout << "Ошибка!\n" << endl;
	}*/
	/*bool fer = true;
	do {
		try {
			string nStr;
			cout << "Введите число: ";
			getline(cin, nStr);
			int num = stoi(nStr);
			cout << "Введено: " << num << endl;
			fer = false;
		}
		catch (const exception& ex) {//ex-Объект класса exeption  в котором описывается суть ошибки
			string err = ex.what();//строка в которую записывается название ошибки 
			if (err == "invalid stoi argument")
				cout << "ошибка: " << err << endl;

		}
	} while (fer);*/
	/*try {
		cout << "введите два числа: ";
		cin >> n >> m;
		cout << n << " / " << m << " = " << division(n, m) << endl;
	}
	catch (const invalid_argument &ex) {
		cout << "Ошибка: " << ex.what() << endl;

	}*/
	string path = "file.tx";
	ifstream in;
	in.exceptions(ios::badbit|ios::eofbit|ios::failbit);
	try{
		cout << "Попытка открытия файла....";
		in.open(path);
		cout << "Файл открыт для чтения.\n";
		cout << "Содержимое фала:\n";
		string str;
		getline(in, str);
		cout << str << endl;
		in.close();
	}
	catch (const ifstream::failure &ex){
		cout << "Ошибка: " << ex.what() << endl;
		cout << "код ошибки: " << ex.code() << endl;
	}
	



	system("pause>nul");
	return 0;
}