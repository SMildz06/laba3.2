// №3.2
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");


    cout << "Введите строку: "; //ввод строки
    string st;
    cin >> st;

    //вывод гласных
    for (int i = 0; i < st.length(); i++)
        if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u')
            cout << st[i] << endl;




	return 0;
}