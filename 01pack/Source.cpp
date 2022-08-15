#include <iostream>
#include <algorithm>
#include <string>

/*朴素方法*/
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
//			// 左边
//			f[i][j] = f[i - 1][j];
//			if (j >= v[i])// 右边
//				f[i][j] = std::max(f[i][j], f[i - 1][j - v[i]] + w[i]);
//		}
//	}
//
//	std::cout << f[n][m] << std::endl;
//	std::cin.get();
//}



/*优化空间*/
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
//			// 左边
//			//f[i][j] = f[i - 1][j];
//			// 右边
//			//f[i][j] = std::max(f[i][j], f[i - 1][j - v[i]] + w[i]);
//			f[j] = std::max(f[j], f[j - v[i]] + w[i]);
//		}
//	}
//
//	std::cout << f[m] << std::endl;
//	std::cin.get();
//}



/*mihayo*/
//#include <string>
//using namespace std;
//string attack = "attack";
//string critical = "critical";
//string critical_damage = "critical_damage";
//string tmp_str;
//
//int n, k;
//int value[200000];
//int f[200000];
////int f[200][200];
//
//int main()
//{
//	cin >> n >> k;
//
//	for (int i = 0; i < n; i++)
//	{
//		int value_i = 0;
//		int tmp_value = 0;
//		for (int j = 0; j < 4; j++)
//		{
//			cin >> tmp_str >> tmp_value;
//			if (tmp_str == attack)
//				value_i += 1.5 * tmp_value;
//			else if (tmp_str == critical)
//				value_i += 2 * tmp_value;
//			else if (tmp_str == critical_damage)
//				value_i += tmp_value;
//		}
//		value[i] = value_i;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		//for (int j = 0; j <= k; j++)
//		for (int j = k; j >= 1; j--)
//		{
//			//f[i][j] = f[i - 1][j];
//			//f[j] = f[j];
//
//			//if (j != 0)
//			//	f[i][j] = max(f[i][j], f[i - 1][j - 1] + value[i - 1]);
//			f[j] = max(f[j], f[j - 1] + value[i - 1]);
//		}
//	}
//
//	//cout << f[n][k];
//	cout << f[k];
//	cin.get();
//}



/*完全背包问题-朴素方法*/
//using namespace std;
//const int N = 1010;
//
//int n, m;
//int v[N], w[N];
//int f[N][N];
//
//int main()
//{
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++) 
//		cin >> v[i] >> w[i];
//	
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j <= m; j++)
//		{
//			f[i][j] = f[i - 1][j];
//			if (j >= v[i])
//				f[i][j] = max(f[i][j], f[i][j - v[i]] + w[i]);
//		}
//	}
//
//	cout << f[n][m] << endl;
//}



/*完全背包问题-优化*/
//using namespace std;
//const int N = 1010;
//
//int n, m;
//int v[N], w[N];
//int f[N];
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//		cin >> v[i] >> w[i];
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = v[i]; j <= m; j++)
//		{
//				f[j] = max(f[j], f[j - v[i]] + w[i]);
//		}
//	}
//
//	cout << f[m] << endl;
//}



/*石子合并*/
//using namespace std;
//const int N = 310;
//int n;
//
//int s[N];
//int f[N][N];
//
//int main()
//{
//	cin >> n;
//
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> s[i];
//		s[i] += s[i - 1];
//	}
//
//	for (int len = 2; len <= n; len++)
//	{
//		for (int i = 1; i + len - 1 <= n; i++)
//		{
//			int j = i + len - 1;
//			f[i][j] = 1e8;
//			for (int k = i; k < j; k++)
//			{
//				f[i][j] = min(f[i][j], f[i][k] + f[k + 1][j] + s[j] - s[i - 1]);
//			}
//		}
//	}
//
//	cout << f[1][n] << endl;
//}


///*最长公共子序列*/
//using namespace std;
//const int N = 1010;
//
//int n, m;
//char a[N], b[N];
//int f[N][N];
//
//int main()
//{
//	cin >> n >> m >> a + 1 >> b + 1;
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			f[i][j] = max(f[i - 1][j], f[i][j - 1]);
//			if (a[i] == b[j])
//				f[i][j] = max(f[i][j], f[i - 1][j - 1] + 1);
//		}
//	}
//
//	cout << f[n][m] << endl;
//}


/*最长回文子串-dp*/
//using namespace std;
//const int N = 1010;
//
//string str;
//bool f[N][N];
//int ans = 1;
//int l = 0, r = 0;
//
//int main()
//{
//	cin >> str;
//
//	for (int i = str.size() - 1; i >= 0; i--)
//	{
//		for (int j = i; j < str.size(); j++)
//		{
//			if (i == j) f[i][j] = true;
//			else if (i + 1 == j) f[i][j] = (str[i] == str[j]);
//			else f[i][j] = (f[i + 1][j - 1] && str[i] == str[j]);
//			if (f[i][j]) ans = max(ans, j - i + 1);
//		}
//	}
//
//	for (int i = str.size(); i >= 0; i--)
//	{
//		for (int j = i; j < str.size(); j++)
//		{
//			if (f[i][j] && j - i + 1 == ans)
//			{
//				l = i;
//				r = j;
//				break;
//			}
//		}
//		if (0 != l) break;
//	}
//
//	cout << ans << " " << str.substr(l, ans);
//	cin.get();
//}


/*最长回文子序列-dp*/
using namespace std;

const int N = 1010;
string str;
int dp[N][N];

int main()
{
	cin >> str;
	int lenStr = str.length();

	//for (int len = 1; len <= lenStr; len++)
	//{
	//	for (int i = 0; i + len < lenStr; i++)
	//	{
	//		int j = i + len;
	//		if (str[i] == str[j]) dp[i][j] = dp[i + 1][j - 1] + 2;
	//		else dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
	//	}
	//}
	
	for (int i = lenStr - 1; i >= 0; i--)
	{
		dp[i][i] = 1;
		for (int j = i + 1; j < lenStr; j++)
		{
			if (str[i] == str[j]) dp[i][j] = dp[i + 1][j - 1] + 2;
			else dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
		}
	}

	cout << dp[0][lenStr - 1] << endl;
	cin.get();
}