// 二つの整数値の小さいほうの値を求めて表示

#include <iostream>

int main()
{
	int a, b;

	cout << "整数値a：\n"; cin >> a;
	cout << "整数値b：\n"; cin >> b;

	int min, max; // 小さいほうの値／大きいほうの値

	if (a < b) { // aがbより小さければ
		min = a;
		max = b;
	} else { // そうでなければ
		min = b;
		max = a;
	}

	cout << "小さいほうの値は" << min << "です。\n";
	cout << "大きいほうの値は" << max << "です。\n";
}