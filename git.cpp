#include <iostream>
bool soNguyenTo(int n)
{
	if (n <= 1) return false;
	else
	{
		for (int i = 2; i <= sqrt(n); i++)
			if (n % i == 0)
				return false;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	if (soNguyenTo(n)) cout << "N la so nguyen to";
	else cout << "N khong la so nguyen to";
	return 0;
}