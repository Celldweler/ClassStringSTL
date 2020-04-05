#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <Windows.h>
#include <bitset>
using namespace std;
//***************************|2 Variant|***********************************
void BaseTask()
{
	/*
	В заданной строке поменять местами первый и последний символ строки
	*/
	cout << "\nBase task level: \n";
	string str;
	getline(cin, str);
	cout << "Исходная строка: ";
	cout << str << endl;
	char temp ;
	temp = str[0];
	str[0] = str[(str.length() - 1)];
	str[(str.length() - 1)] = temp;
	cout << "Перевернутая строка: ";
	cout << str<<endl;

}
void pred(std::string& s)
{
	std::cout << "> " << s << std::endl;
}
void MidleTask()
{
	/*В заданной строке посчитать количество слов. Разделителем слов считается один или несколько пробелов. */
	cout << "\Midle task level: \n";
	std::string s;
	std::cout << "Enter string: ";
	getline(std::cin, s);
	std::istringstream ist(s);
	std::vector<std::string> vec_word;
	int cnt = 0;
	while (ist >> s)
	{
		vec_word.push_back(s);
		++cnt;
	}
	std::cout << "Count words: " << cnt << std::endl
		<< "Words: " << std::endl;
	std::for_each(vec_word.begin(), vec_word.end(), pred);
	return ;
}

string& new_str(string& d, const string& s1, const string& s2) {
	bitset<256> bs;
	const unsigned char* p = reinterpret_cast<const unsigned char*>(s2.c_str());
	while (*p)
		bs.set(*p++, 1);

	for (d = "", p = reinterpret_cast<const unsigned char*>(s1.c_str()); *p; ++p) {
		if (!bs.test(*p))
			d += static_cast<char>(*p);
	}
	return d;
}

void HardTask()
{
	cout << "\nHard task level:\n";
/*Заданы две строки.Построить новую строку,состоящую из символов,которые входят как в одну,
так и в другую строку*/
	string s1 = "ABCDEF_abcdef-0123456789";
	string s2 = "CFAbcd23490";
	//std::getline(std::cin, s1);
	//std::getline(std::cin, s2);
	cout << "\n\First string: \n" << s1 << "\nSecond  string: \n" << s2 << endl;
		string d;
	cout << "\nНовая строка,состоящая из символов,которые входят как в одну,так и в другую строку\n";
	cout << new_str(d, s1, s2);
	cin.get();
	return;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(0, "");

	//BaseTask();
	//MidleTask();
	HardTask();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
