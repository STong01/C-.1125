#include <iostream>
#include <algorithm>
using namespace std;

//判断是否为完全数，完全数：除自己以外的所有约数之和等于自身
int test(int n)
{
	int P = 0;
	if ((n<0) | (n>500000))
	{
		return -1;
	}
	else
	{
		for (int i = 2; i <= n; i++)//遍历范围
		{
			int sum = 0;
			int tmp = sqrt(i);
			for (int j = 2; j < tmp; j++)//判断是否为安全数
			{
				if (i % j == 0)
				{
					if (i / j == j)//约数相同，只加一次
					{
						sum += j;
					}
					else
						sum += j + (i / j);//约数不同，两个约数都加
				}
			}
			if (sum + 1 == i)
			{
				P++;//判断是否为安全数
			}
		}
		return P;
	}
}

int main()
{
	int n;
	while (cin >> n)
		cout << test(n) << endl;

	system("pause");
	return 0;
}
