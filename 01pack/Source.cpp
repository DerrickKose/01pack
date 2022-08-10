#include <iostream>
#include <algorithm>

/*ÆÓËØ·½·¨*/
//const int N = 1010;
//int n, m;
//int v[N], w[N];
//int f[N][N];
//
//int main()
//{
//	std::cin >> n >> m;
//
//	for (int i = 1; i <= n; i++) 
//		std::cin >> v[i] >> w[i];
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j <= m; j++)
//		{
//			// ×ó±ß
//			f[i][j] = f[i - 1][j];
//			if (j >= v[i])// ÓÒ±ß
//				f[i][j] = std::max(f[i][j], f[i - 1][j - v[i]] + w[i]);
//		}
//	}
//
//	std::cout << f[n][m] << std::endl;
//	std::cin.get();
//}



///*ÓÅ»¯¿Õ¼ä*/
//const int N = 1010;
//int n, m;
//int v[N], w[N];
//int f[N];
//
//int main()
//{
//	std::cin >> n >> m;
//
//	for (int i = 1; i <= n; i++)
//		std::cin >> v[i] >> w[i];
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = m; j >= v[i]; j--)
//		{
//			// ×ó±ß
//			//f[i][j] = f[i - 1][j];
//			// ÓÒ±ß
//			//f[i][j] = std::max(f[i][j], f[i - 1][j - v[i]] + w[i]);
//			f[j] = std::max(f[j], f[j - v[i]] + w[i]);
//		}
//	}
//
//	std::cout << f[m] << std::endl;
//	std::cin.get();
//}


// mihayo
#include <string>
#include <algorithm>
using namespace std;
string attack = "attack";
string critical = "critical";
string critical_damage = "critical_damage";
string tmp_str;

int n, k;
int value[200000];
int f[200000];
//int f[200][200];

int main()
{
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		int value_i = 0;
		int tmp_value = 0;
		for (int j = 0; j < 4; j++)
		{
			cin >> tmp_str >> tmp_value;
			if (tmp_str == attack)
				value_i += 1.5 * tmp_value;
			else if (tmp_str == critical)
				value_i += 2 * tmp_value;
			else if (tmp_str == critical_damage)
				value_i += tmp_value;
				
		}
		value[i] = value_i;
	}

	for (int i = 1; i <= n; i++)
	{
		//for (int j = 0; j <= k; j++)
		for (int j = k; j >= 1; j--)
		{
			//f[i][j] = f[i - 1][j];
			//f[j] = f[j];

			//if (j != 0)
			//	f[i][j] = max(f[i][j], f[i - 1][j - 1] + value[i - 1]);
			f[j] = max(f[j], f[j - 1] + value[i - 1]);
		}
	}

	//cout << f[n][k];
	cout << f[k];
	cin.get();
}
