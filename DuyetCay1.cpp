#include <bits/stdc++.h>
using namespace std;

int preIndex = 0;

int arr1[10000001];

int search(int arr[], int startIn,int endIn, int data)
{
	int i = 0;
	for (i = startIn; i < endIn; i++)
	{
		if (arr[i] == data)
		{
			return i;
		}
	}
	return i;
}
void printPost(int arr[], int pre[],int inStrt, int inEnd)
{
	if (inStrt > inEnd)
	{
		return;
	}
	int inIndex = search(arr, inStrt, inEnd,pre[preIndex++]);
	printPost(arr, pre, inStrt, inIndex - 1);
	printPost(arr, pre, inIndex + 1, inEnd);
	cout << arr1[arr[inIndex]] << " ";
}
int main()
{
	int N;
	cin >> N;
//	N = 1;
	while(N--)
	{
		preIndex = 0;
		int len;
		cin >> len;
		int arr[len], pre[len];
		for (int i = 0; i < len; i++) cin >> arr[i], arr1[i] = arr[i];
		for (int i = 0; i < len; i++) cin >> pre[i];
		sort(arr1, arr1+len);
		for (int i = 0; i < len; i++)
		{
			for (int j = 0; j < len; j++)
			{
				if (arr[i] == arr1[j]) 
				{
					arr[i] = j;
					break;
				}
			}
		}
		for (int i = 0; i < len; i++)
		{
			for (int j = 0; j < len; j++)
			{
				if (pre[i] == arr1[j]) 
				{
					pre[i] = j;
					break;
				}
			}
		}
//		for (int i = 0; i < len; i++) cout << arr[i] << ' ';
//		cout << endl;
//		for (int i = 0; i < len; i++) cout << pre[i] << ' ';
		printPost(arr, pre, 0, len - 1);
		cout << endl;
	}
}
