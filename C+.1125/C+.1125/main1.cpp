#include <iostream>
#include <algorithm>
using namespace std;

//�ж��Ƿ�Ϊ��ȫ������ȫ�������Լ����������Լ��֮�͵�������
int test(int n)
{
	int P = 0;
	if ((n<0) | (n>500000))
	{
		return -1;
	}
	else
	{
		for (int i = 2; i <= n; i++)//������Χ
		{
			int sum = 0;
			int tmp = sqrt(i);
			for (int j = 2; j < tmp; j++)//�ж��Ƿ�Ϊ��ȫ��
			{
				if (i % j == 0)
				{
					if (i / j == j)//Լ����ͬ��ֻ��һ��
					{
						sum += j;
					}
					else
						sum += j + (i / j);//Լ����ͬ������Լ������
				}
			}
			if (sum + 1 == i)
			{
				P++;//�ж��Ƿ�Ϊ��ȫ��
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
