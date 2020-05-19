#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int total;
	cin >> total;
	vector<int>arr;
	int num;
	int i;
	for (i = 0; i < total; i++)
	{
		cin >> num;
		arr.push_back(num);
	}
	sort(arr.begin(), arr.end());

	int n;
	int j;
	int debugger = arr.size();
	for (; debugger >= 0; debugger--)
	{
		for (i = 0; i < arr.size(); i++)
		{
			//计算n
			n = arr[i];
			while (n != 1)
			{
				if (n % 2 == 0)
				{
					n /= 2;
				}
				else
				{
					n = (3 * n + 1) / 2;
				}
				//删除n（不能删除a[i]本身，但不避免a[i]重复的可能）
				for (j = 0; j < arr.size(); j++)
				{
					if (arr[j] == n )
					{
						arr.erase(arr.begin() + j);
					}
				}
			}
		}
	}
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	sort(arr.begin(), arr.end());                           //unique只能比较相邻元素是否重复
	arr.erase(unique(arr.begin(), arr.end()), arr.end());      //unique将重复的元素移到末尾，返回末尾中第一个重复值的地址
	for (i = arr.size() - 1; i >= 0; i--)
	{
		cout << arr[i];
		if (i != 0)cout << ' ';
	}
	system("pause");
	return 0;
}

