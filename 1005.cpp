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
			//����n
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
				//ɾ��n������ɾ��a[i]������������a[i]�ظ��Ŀ��ܣ�
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
	sort(arr.begin(), arr.end());                           //uniqueֻ�ܱȽ�����Ԫ���Ƿ��ظ�
	arr.erase(unique(arr.begin(), arr.end()), arr.end());      //unique���ظ���Ԫ���Ƶ�ĩβ������ĩβ�е�һ���ظ�ֵ�ĵ�ַ
	for (i = arr.size() - 1; i >= 0; i--)
	{
		cout << arr[i];
		if (i != 0)cout << ' ';
	}
	system("pause");
	return 0;
}

